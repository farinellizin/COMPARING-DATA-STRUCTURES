#include "binaryTree.hpp"

void initBinaryTree(BinaryTree **t) {
    *t = NULL;
}

bool isBinaryTreeEmpty(BinaryTree **t) {
    return *t == NULL;
}

void insertBinary(BinaryTree **t, Data content) {
    if (isBinaryTreeEmpty(t))
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

int isInBinaryTree(BinaryTree *t, Data content) {
    if (t == NULL) {
        return 0;
    }

    return t -> item.value == content.value || isInBinaryTree(t->leftSon, content) || isInBinaryTree(t -> rigthSon, content);
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
        // printf("[ERROR]: Data not found!!!\n");
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

    cout << "\t\t\t\t\tValue found and will be removed: " << content.value << endl;

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
    // int cont = 0;
    if (!(t == NULL)) {
        posordem(t -> leftSon);
        posordem(t -> rigthSon);
        // printf("%d ", t -> item.value);
        cout << t -> item.value << endl;
    }
}

// float read500numbersBinary(BinaryTree **t) {
//     size_t time = clock();
//     Data aux;
//     string line;
//     ifstream myfile;
//     myfile.open("500numbers.txt");

//     while (!myfile.eof()) {
//         getline(myfile, line);
//         if (line[0] != '\n') {
//             aux.value = stof(line);
//             insertBinary(t, aux);
//         }
//     }

//     time = clock() - time;
//     return (float(time)/CLOCKS_PER_SEC);
// }

// float read5000numbersBinary(BinaryTree **t) {
//     size_t time = clock();
//     Data aux;
//     string line;
//     ifstream myfile;
//     myfile.open("5000numbers.txt");

//     while (!myfile.eof()) {
//         getline(myfile, line);
//         if (line[0] != '\n') {
//             aux.value = stof(line);
//             insertBinary(t, aux);
//         }
//     }

//     time = clock() - time;
//     return (float(time)/CLOCKS_PER_SEC);
// }

// float read50000numbersBinary(BinaryTree **t) {
//     size_t time = clock();
//     Data aux;
//     string line;
//     ifstream myfile;
//     myfile.open("50000numbers.txt");

//     while (!myfile.eof()) {
//         getline(myfile, line);
//         if (line[0] != '\n') {
//             aux.value = stof(line);
//             insertBinary(t, aux);
//         }
//     }

//     time = clock() - time;
//     return (float(time)/CLOCKS_PER_SEC);
// }

// float  read500000numbersBinary(BinaryTree **t) {
//     size_t time = clock();
//     Data aux;
//     string line;
//     ifstream myfile;
//     myfile.open("500000numbers.txt");

//     while (!myfile.eof()) {
//         getline(myfile, line);
//         if (line[0] != '\n') {
//             aux.value = stof(line);
//             insertBinary(t, aux);
//         }
//     }
    
//     time = clock() - time;
//     return (float(time)/CLOCKS_PER_SEC);
// }

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
