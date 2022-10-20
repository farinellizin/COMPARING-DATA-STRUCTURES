#include "avlTree.hpp"

AVLTree* initAVLTree(){
	return NULL;
}

void insertAVL(AVLTree **t, AVLData content){

	if(*t == NULL){
		*t = new AVLTree;
		(*t)->leftSon = NULL; 
		(*t)->rightSon = NULL; 
		(*t)->weight = 0;
		(*t)->item = content; 
	} else {
	
	if(content.value < (*t)->item.value){
		insertAVL(&(*t)->leftSon, content);
		if ((getWeightAVL(&(*t)->leftSon) - getWeightAVL(&(*t)->rightSon)) == 2){
			if(content.value < (*t)->leftSon->item.value) {
				simpleRightRotation(t);
			} else {
				doubleRightRotation(t);
			}
		}
	}
	
		if(content.value > (*t)->item.value){
		insertAVL(&(*t)->rightSon, content);
		if ((getWeightAVL(&(*t)->rightSon) - getWeightAVL(&(*t)->leftSon)) == 2){
			if(content.value > (*t)->rightSon->item.value)
				simpleLeftRotation(t);
			else
				doubleLeftRotation(t);
		}
		}
	
	}

  	(*t)->weight = getMaxWeightAVL(getWeightAVL(&(*t)->leftSon), getWeightAVL(&(*t)->rightSon)) + 1;
}

void antecessorAVL(AVLTree **t, AVLTree *aux){ 

	if ((*t)->rightSon != NULL){ 
		antecessorAVL(&(*t)->rightSon, aux);
		return;
  	}
  	
  	aux->item = (*t)->item;
  	aux = *t; 
  	*t = (*t)->leftSon;
  	free(aux);
} 

void rebalanceAVL(AVLTree **t){
	int balance;
  	int left = 0;
  	int right = 0;

	balance = getWeightAVL(&(*t)->leftSon) - getWeightAVL(&(*t)->rightSon);

	if((*t)->leftSon) {
		left = getWeightAVL(&(*t)->leftSon->leftSon) - getWeightAVL(&(*t)->leftSon->rightSon);
    }

	if((*t)->rightSon) {
		right = getWeightAVL(&(*t)->rightSon->leftSon) - getWeightAVL(&(*t)->rightSon->rightSon);
    }

	if(balance == 2 && left >= 0) {
		simpleRightRotation(t);
    }

	if(balance == 2 && left < 0) {
		doubleRightRotation(t);
    }

	if(balance == -2 && right <= 0) {
		simpleLeftRotation(t);
    }

	if(balance == -2 && right > 0) {
		doubleLeftRotation(t);
    } 	

}

void removeAVL(AVLTree **t, AVLTree **f, AVLData content, int &avlRemoveCont){
	AVLTree *aux;
  	
  	if (*t == NULL) {
		avlRemoveCont++;
		return;
  	}

  	if (content.value < (*t)->item.value) { 
		removeAVL(&(*t)->leftSon, t, content, avlRemoveCont); 
		return;
	}

  	if (content.value > (*t)->item.value) { 
		removeAVL(&(*t)->rightSon, t, content, avlRemoveCont);
		return;
	}

	// cout << "\t\t\t\t\tValue found and will be removed: " << content.value << endl;

  	if ((*t)->rightSon == NULL) { 
  		aux = *t;  
  		*t = (*t)->leftSon;
		free(aux);
		rebalanceAVL(f);
		return;
  	}

  	if ((*t)->leftSon != NULL) { 
  		antecessorAVL(&(*t)->leftSon, *t);
  		rebalanceAVL(t);
  		rebalanceAVL(f);
  		return;
  	}

  	aux = *t;  
  	*t = (*t)->rightSon;
  	free(aux);
  	rebalanceAVL(t);
  	rebalanceAVL(f); 	
}

void preordem(AVLTree *t)
{
	if(!(t == NULL)){
		printf("%f:%d\t", t->item.value, t->weight);
		preordem(t->leftSon); 
		preordem(t->rightSon); 
	}
}

int getWeightAVL(AVLTree **t){
	if(*t == NULL)
		return -1;
	return (*t)->weight;
}

int getMaxWeightAVL(int left, int right){
	if(left > right)
		return left;
	return right;
}

void simpleRightRotation(AVLTree **t){
	AVLTree *aux;
	aux = (*t)->leftSon;
	(*t)->leftSon = aux->rightSon;
	aux->rightSon = (*t);
	(*t)->weight = getMaxWeightAVL(getWeightAVL(&(*t)->leftSon), getWeightAVL(&(*t)->rightSon)) + 1;
	aux->weight  = getMaxWeightAVL(getWeightAVL(&aux->leftSon), (*t)->weight) + 1;
	(*t) = aux;
}

void simpleLeftRotation(AVLTree **t){
	AVLTree *aux;
	aux = (*t)->rightSon;
	(*t)->rightSon = aux->leftSon;
	aux->leftSon = (*t);
	(*t)->weight = getMaxWeightAVL(getWeightAVL(&(*t)->leftSon), getWeightAVL(&(*t)->rightSon)) + 1;
	aux->weight  = getMaxWeightAVL(getWeightAVL(&aux->leftSon), (*t)->weight) + 1;
	(*t) = aux;
}

void doubleRightRotation(AVLTree **t){
	simpleLeftRotation(&(*t)->leftSon);
	simpleRightRotation(t);
}

void doubleLeftRotation(AVLTree **t){
	simpleRightRotation(&(*t)->rightSon);
	simpleLeftRotation(t);
}

float readNumbersAVL(AVLTree **t, string docName) {
	size_t time = clock();
    AVLData aux;
    string line;
    ifstream myfile;
    myfile.open(docName);

    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            insertAVL(t, aux);
        }
    }
    
    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);	
}

float searchRemoveFromAVL(AVLTree **t, int &btRemoveCont) {
	size_t time = clock();
    AVLData aux;
	AVLTree *avlTreeAux;
    string line;
    ifstream myfile;
    myfile.open("search.txt");

    while(!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            removeAVL(t, &avlTreeAux, aux, btRemoveCont);
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

void search(AVLTree **t, AVLTree**aux, AVLData content) {
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

float searchInAVL(AVLTree **t) {
    size_t time = clock();
    AVLData auxD;
    string line;
    ifstream myfile;
    myfile.open("search.txt");
    AVLTree *aux = initAVLTree(); 

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