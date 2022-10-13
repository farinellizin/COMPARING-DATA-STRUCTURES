#ifndef AVLTREE_HPP
#define AVLTREE_HPP
#include "includes.hpp"
using namespace std;

typedef struct AVLData AVLData;
typedef struct AVLTree AVLTree;

struct AVLData{
	float value;
};

struct AVLTree{
	AVLData item;
	AVLTree *leftSon, *rightSon;
	int weight;
};

AVLTree* initAVLTree();
void insertAVL(AVLTree **t, AVLData r);
void removeAVL(AVLTree **t, AVLTree **f, AVLData r, int &avlRemoveCont);
void antecessorAVL(AVLTree **t, AVLTree *aux);
void rebalanceAVL(AVLTree **t);
int getWeightAVL(AVLTree **t);
int getMaxWeightAVL(int left, int right);
void simpleRightRotation(AVLTree **t);
void simpleLeftRotation(AVLTree **t);
void doubleRightRotation(AVLTree **t);
void doubleLeftRotation(AVLTree **t);
float searchRemoveFromAVL(AVLTree **t, int &btRemoveCont);
float readNumbersAVL(AVLTree **t, string docName);

#endif