#include "binaryTree.hpp"

void initBinaryTree(BinaryTree **t) {
    *t = NULL;
}

bool isBinaryTreeEmpty(BinaryTree **t) {
    return *t == NULL;
}

void insertBinary(BinaryTree **t, Data content) {
    if (*t == NULL)
    {
        *t = new BinaryTree;
        (*t)->leftSon = NULL;
        (*t)->rigthSon = NULL;
        (*t)->item = content;
    } else {
        if (content.value < (*t)->item.value) {
            insertBinary(&(*t)->leftSon, content);
        }

        if (content.value > (*t)->item.value) {
            insertBinary(&(*t)->rigthSon, content);
        }
    }
}

void antecessorBinary(BinaryTree **t, BinaryTree *aux)
{
    if ((*t)->rigthSon != NULL) {
        antecessorBinary(&(*t)->rigthSon, aux);
        return;
    }

    aux->item = (*t)->item;
    aux = *t;
    *t = (*t)->leftSon;
    free(aux);
}

void removeBinary(BinaryTree **t, Data content, int &btRemoveCont) {
    BinaryTree *aux;

    if (*t == NULL) {
        btRemoveCont++;
        return;
    }

    if (content.value < (*t)->item.value) {
        removeBinary(&(*t)->leftSon, content, btRemoveCont);
        return;
    }

    if (content.value > (*t)->item.value) {
        removeBinary(&(*t)->rigthSon, content, btRemoveCont);
        return;
    }

    if ((*t) -> rigthSon == NULL) {
        aux = *t;
        *t = (*t) -> leftSon;
        free(aux);
        return;
    }

    if ((*t) -> leftSon != NULL) {
        antecessorBinary(&(*t)->leftSon, *t);
        return;
    }

    aux = *t;
    *t = (*t) -> rigthSon;
    free(aux);
}

void posordem(BinaryTree *t) {
    if (!(t == NULL)) {
        posordem(t -> leftSon);
        posordem(t -> rigthSon);
        cout << t -> item.value << endl;
    }
}

float readNumbersBinary(BinaryTree **t, string docName) {
    size_t time = clock();
    Data aux;
    string line;
    ifstream myfile;
    myfile.open(docName);

    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            insertBinary(t, aux);
        }
    }
    
    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

float searchRemoveFromBinary(BinaryTree **t, int &btRemoveCont) {
    size_t time = clock();
    Data aux;
    string line;
    ifstream myfile;
    myfile.open("search.txt");

    while(!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            aux.value = stof(line);
            removeBinary(t, aux, btRemoveCont);
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}
