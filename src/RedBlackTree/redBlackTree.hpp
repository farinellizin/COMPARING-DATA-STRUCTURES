#ifndef REDBLACKTREE_HPP
#define REDBLACKTREE_HPP
#include "includes.hpp"
using namespace std;

typedef struct RedBlackData RedBlackData;
typedef struct RedBlackTree RedBlackTree;


struct RedBlackData {
    float value;
};

struct RedBlackTree {
    RedBlackData item;
    RedBlackTree *leftSon, *rightSon, *dad;
    bool color;
};

RedBlackTree* initRedBlack();

void simpleLeftRotation(RedBlackTree **root, RedBlackTree *child);
void simpleRightRotation(RedBlackTree **root, RedBlackTree *child);

void insertFixUp(RedBlackTree **root, RedBlackTree *child);
void insertRedBlack(RedBlackTree **t, RedBlackTree **dad, RedBlackTree **rot, RedBlackData content);

float searchRemoveFromRedBlack(RedBlackTree **t, int &btRemoveCont);
float readNumbersRedBlack(RedBlackTree **t, string docName);

void preordem(RedBlackTree *t);

#endif