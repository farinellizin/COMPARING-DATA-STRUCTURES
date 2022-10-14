#include "avlTree.hpp"
#include "includes.hpp"
#include "printData.hpp"
using namespace std;

void runAVLTree() {
    AVLTree *AVLTree500 = initAVLTree(), *AVLTree5000 = initAVLTree(), *AVLTree50000 = initAVLTree(), *AVLTree500000 = initAVLTree();

    float avl500 = 0, avl5000 = 0, avl50000 = 0, avl500000 = 0, avlRemove500 = 0, avlRemove5000 = 0, avlRemove50000 = 0, avlRemove500000 = 0; // data AVLTree
	int avlRemoveCont500 = 0, avlRemoveCont5000 = 0, avlRemoveCont50000 = 0, avlRemoveCont500000 = 0;

    avl500 = readNumbersAVL(&AVLTree500, "500numbers.txt");
	avl5000 = readNumbersAVL(&AVLTree5000, "5000numbers.txt");
	avl50000 = readNumbersAVL(&AVLTree50000, "50000numbers.txt");
	avl500000 = readNumbersAVL(&AVLTree500000, "500000numbers.txt");

	avlRemove500 = searchRemoveFromAVL(&AVLTree500, avlRemoveCont500);
	avlRemove5000 = searchRemoveFromAVL(&AVLTree5000, avlRemoveCont5000);
	avlRemove50000 = searchRemoveFromAVL(&AVLTree50000, avlRemoveCont50000);
	avlRemove500000 = searchRemoveFromAVL(&AVLTree500000, avlRemoveCont500000);
	cout << endl << endl;

	printAVLTree(avl500, avlRemove500, avlRemoveCont500, avl5000, avlRemove5000, avlRemoveCont5000, avl50000, avlRemove50000, 
	avlRemoveCont50000, avl500000, avlRemove500000, avlRemoveCont500000);
}