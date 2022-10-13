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

// apagar depois
void preordem(RedBlackTree *t){
  if(!(t == NULL)){
    printf("%f - %s\n", t->item.value, t->color ? "black" : "red");
    preordem(t->leftSon); 
    preordem(t->rightSon); 
  }
}