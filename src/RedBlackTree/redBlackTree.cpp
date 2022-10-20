#include "redBlackTree.hpp"

RedBlackTree* initRedBlack(){
    return NULL;
}

void insertFixUp(RedBlackTree **raiz, RedBlackTree *child){
    RedBlackTree *tio;

    while((child != *raiz) && (child->dad->color == false)){
        
        if(child->dad == child->dad->dad->leftSon){
            
            tio = child->dad->dad->rightSon;

            //caso 1:
            if((tio != NULL) && (tio->color == false)){
                child->dad->color = true;
                tio->color = true;
                child->dad->dad->color = false;
                child = child->dad->dad;
            
            } else {
                //caso 2
                if(child == child->dad->rightSon){
                    child = child->dad;
                    simpleLeftRotation(raiz, child);
                }
                
                //caso 3
                child->dad->color = true;
                child->dad->dad->color = false;
                simpleRightRotation(raiz, child->dad->dad);
            }

        } else {
            
            tio = child->dad->dad->leftSon;
            
            //caso 1
            if((tio != NULL) && (tio->color == false)){
                child->dad->color = true;
                tio->color = true;
                child->dad->dad->color = false;
                child = child->dad->dad;
                
            } else {
                
                //caso 2
                if(child == child->dad->leftSon){
                    child = child->dad;
                    simpleRightRotation(raiz, child);
                }

                //caso 3
                child->dad->color = true;
                child->dad->dad->color = false;
                simpleLeftRotation(raiz, child->dad->dad);      
            }

        }
    }

    (*raiz)->color = true;
}


void insertRedBlack(RedBlackTree **t, RedBlackTree **dad, RedBlackTree **raiz, RedBlackData content){
  
    if(*t == NULL){
        // *t = (Tree*)malloc(sizeof(Tree));
        *t = new RedBlackTree;
        (*t)->leftSon = NULL; 
        (*t)->rightSon = NULL; 
        (*t)->dad = dad!=t?*dad:NULL;
        (*t)->color = false; //false: vermelho  true:preto
        (*t)->item = content; 
        insertFixUp(raiz, *t);
    
    } else { 

        if(content.value < (*t)->item.value){
            insertRedBlack(&(*t)->leftSon, t, raiz, content);
            return;
        }
        
        if(content.value > (*t)->item.value){
            insertRedBlack(&(*t)->rightSon, t, raiz, content);
            return;
        }
    }
}

void simpleLeftRotation(RedBlackTree **raiz, RedBlackTree *child){
    RedBlackTree *x, *y;

    x = child;
    y = child->rightSon;
    x->rightSon = y->leftSon;

    if(y->leftSon != NULL)
        y->leftSon->dad = x;

    y->dad = x->dad;
    
    if(x->dad == NULL)
        *raiz = y;

    else{

        if(x == x->dad->leftSon)
        x->dad->leftSon = y;

        else
        x->dad->rightSon = y;
    
    }

    y->leftSon = x;
    x->dad = y;
}

void simpleRightRotation(RedBlackTree **raiz, RedBlackTree *child){
    RedBlackTree *x, *y;

    x = child;
    y = child->leftSon;
    x->leftSon = y->rightSon;

    if (y->rightSon != NULL)
        y->rightSon->dad = x;

    y->dad = x->dad;
    
    if(x->dad == NULL){
        *raiz = y;
    }

    else{

        if(x == x->dad->rightSon)
        x->dad->rightSon = y;

        else
        x->dad->leftSon = y;
    
    }

    y->rightSon = x;
    x->dad = y;
}

float readNumbersRedBlack(RedBlackTree **t, string docName) {
    size_t time = clock();
    RedBlackData aux;
    string line;
    ifstream myfile;
    myfile.open(docName);

    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            insertRedBlack(t, t, t, aux);
        }
    }
    
    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

float searchRemoveFromRedBlack(RedBlackTree **t, int &btRemoveCont) {
    size_t time = clock();
    RedBlackData aux;
    string line;
    ifstream myfile;
    myfile.open("search.txt");

    while(!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            removeRB(t, t, aux, btRemoveCont);
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

void deleteRB(RedBlackTree **T, RedBlackTree *valor){
    RedBlackTree *y=valor;
    RedBlackTree *x;
    bool originalColor=y->color;
    if (valor->leftSon==NULL){
        x=valor->rightSon;
        if (x==NULL){
            x=new RedBlackTree;
            x->item.value=404;
            x->color=true;
            valor->rightSon=x;
        }

        RBTransplant(T,valor,valor->rightSon);
        x->dad=valor->dad;
    } else if(valor->rightSon==NULL){
        x=valor->leftSon;
        if (x==NULL){
            x=new RedBlackTree;
            x->item.value=404;
            x->color=true;
            valor->leftSon=x;
        }
        
        RBTransplant(T,valor,valor->leftSon);
        x->dad=valor->dad;
    } else{
        y=TreeMinimun(&valor->leftSon);
        originalColor=y->color;
        x=y->leftSon;
        if (x==NULL){
            x=new RedBlackTree;
            x->dad=y;
            x->item.value=404;
            x->color=true;
            y->leftSon=x;
        }
        if (y->dad==valor){
            x->dad=y;
        } else {
            RBTransplant(T,y,y->leftSon);
            y->leftSon=valor->leftSon;
            y->leftSon->dad=y;
        }

        RBTransplant(T,valor,y);
        y->rightSon=valor->rightSon;
        y->rightSon->dad=y;
        y->color=valor->color;
    }

    RedBlackTree *aux=x;
    if (originalColor)
        RBDeleteFixup(T,x);
    if (aux->item.value==404){
        if (aux==aux->dad->leftSon)
        aux->dad->leftSon=NULL;
        else
        aux->dad->rightSon=NULL;
        delete aux;
    }

    delete valor;
}

void RBTransplant(RedBlackTree **T, RedBlackTree *valor, RedBlackTree *sucessor){
    if (valor->dad==NULL)
        (*T)=sucessor;
    else if(valor==valor->dad->leftSon)
        valor->dad->leftSon=sucessor;
    else
        valor->dad->rightSon=sucessor;
    sucessor->dad=valor->dad;
}

void removeRB(RedBlackTree **raiz, RedBlackTree **t, RedBlackData r, int &rbRemoveCont){
    if (*t == NULL){ 
        return;
    }

    if (r.value < (*t)->item.value){ removeRB(raiz, &(*t)->leftSon, r, rbRemoveCont); return; }
    if (r.value > (*t)->item.value){ removeRB(raiz, &(*t)->rightSon, r, rbRemoveCont); return; }

    if ((*raiz)->rightSon==NULL && (*raiz)->leftSon==NULL){delete (*raiz);(*raiz)=NULL;return;}

    rbRemoveCont++;
    deleteRB(raiz,(*t));  
}

RedBlackTree *TreeMinimun(RedBlackTree **t){
    if ((*t)->rightSon != NULL){
        return TreeMinimun(&(*t)->rightSon);
    } else{
        return (*t);
    }
    
    return NULL;
} 

void RBDeleteFixup(RedBlackTree **T, RedBlackTree *x){
    while (x!=(*T)&&x->color){
        if (x==x->dad->leftSon){
            RedBlackTree* w=x->dad->rightSon;
        if (w!=NULL){
            if (!w->color){
                w->color=true;
                x->dad->color=false;
                simpleLeftRotation(T,x->dad);
                w=x->dad->rightSon;
            }
            
            if ((w->rightSon==NULL||w->rightSon->color)&&(w->leftSon==NULL||w->leftSon->color)){
                w->color=false;
                x=x->dad;
            } else if(w->rightSon==NULL||w->rightSon->color){
                w->leftSon->color=true;
                w->color=false;
                simpleRightRotation(T,w);
                w=x->dad->rightSon;
            }
            
            if(w->rightSon!=NULL&&!w->rightSon->color){
                w->color=x->dad->color;
                x->dad->color=true;
                w->rightSon->color=true;
                simpleLeftRotation(T,x->dad);
                x=(*T);
            }
        } else
            x=x->dad;
        } else{
            RedBlackTree* w=x->dad->leftSon;
            if (w!=NULL){
                if (!w->color){
                    w->color=true;
                    x->dad->color=false;
                    simpleRightRotation(T,x->dad);
                    w=x->dad->leftSon;
                }
                if ((w->rightSon==NULL||w->rightSon->color)&&(w->leftSon==NULL||w->leftSon->color)){
                    if(w != NULL)
                        w->color=false;
                    x=x->dad;
                } else if(w->leftSon==NULL||w->leftSon->color){
                    w->rightSon->color=true;
                    w->color=false;
                    simpleLeftRotation(T,w);
                    w=x->dad->leftSon;
                }
                if(w->leftSon!=NULL&&!w->leftSon->color){
                    w->color=x->dad->color;
                    x->dad->color=true;
                    w->leftSon->color=true;
                    simpleRightRotation(T,x->dad);
                    x=(*T);
                }
            }
        else
            x=x->dad;
        }
    }
    x->color=true;  
}

void search(RedBlackTree **t, RedBlackTree **aux, RedBlackData content) {
    if (*t == NULL) {
        return;
    }

    if ((*t) -> item.value > content.value) {
        search(&(*t) ->leftSon, aux, content);
    }

    if ((*t) -> item.value < content.value) {
        search(&(*t) -> rightSon, aux, content);
    }

    *aux = *t;
}

float searchInRedBlack(RedBlackTree **t) {
    size_t time = clock();
    RedBlackData auxD;
    string line;
    ifstream myfile;
    myfile.open("search.txt");
    RedBlackTree *aux = initRedBlack();

    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            auxD.value = stof(line);
            search(t, &aux, auxD);
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}