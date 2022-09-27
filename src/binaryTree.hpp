#ifndef BINARYTREE_HPP 
#define BINARYTREE_HPP
#include "includes.hpp"
using namespace std;

typedef struct Data Data;
typedef struct BinaryTree BinaryTree;

struct Data {
    float value;
};

struct BinaryTree {
	Data item;
	BinaryTree *leftSon, *rigthSon;
};

void initBinaryTree(BinaryTree **t);
bool isBinaryTreeEmpty(BinaryTree **t);
void insertBinary(BinaryTree **t, Data content);
int isInBinaryTree(BinaryTree *t, Data content);
void removeBinary(BinaryTree **t, Data content, int &btRemoveCont);
void antecessorBinary(BinaryTree **t, BinaryTree *aux);
float searchRemoveFromBinary(BinaryTree **t, int &btRemoveCont);
float readNumbersBinary(BinaryTree **t, string docName);


#endif