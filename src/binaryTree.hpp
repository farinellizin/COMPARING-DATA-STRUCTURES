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
void searchBinary(BinaryTree **t, BinaryTree **aux, Data content);
int isInBinaryTree(BinaryTree *t, Data content);

void posordem(BinaryTree *t);

void removeBinary(BinaryTree **t, Data content);
void antecessorBinary(BinaryTree **t, BinaryTree *aux);
// void widthPathBinary(BinaryTree *t);

float read500numbersBinary(BinaryTree **t);
float read5000numbersBinary(BinaryTree **t);
float read50000numbersBinary(BinaryTree **t);
float read500000numbersBinary(BinaryTree **t);

#endif