#include "includes.hpp"
#include "binaryTree.hpp"
#include "printData.hpp"

void runBinaryTree() {
    BinaryTree *binaryTree500, *binaryTree5000, *binaryTree50000, *binaryTree500000;
	initBinaryTree(&binaryTree500);
	initBinaryTree(&binaryTree5000);
	initBinaryTree(&binaryTree50000);
	initBinaryTree(&binaryTree500000);

    float bt500, bt5000, bt50000, bt500000, btRemove500, btRemove5000, btRemove50000, btRemove500000; // data binaryTree
	int btRemoveCont500 = 0, btRemoveCont5000 = 0, btRemoveCont50000 = 0, btRemoveCont500000 = 0;

    bt500 = readNumbersBinary(&binaryTree500, "500numbers.txt");
	bt5000 = readNumbersBinary(&binaryTree5000, "5000numbers.txt");
	bt50000 = readNumbersBinary(&binaryTree50000, "50000numbers.txt");
	bt500000 = readNumbersBinary(&binaryTree500000, "500000numbers.txt");

    cout << "\n\t\t\t\t ~ Searching and Removing for 500 values Binary Tree: " << endl << endl;
	btRemove500 = searchRemoveFromBinary(&binaryTree500, btRemoveCont500);
	cout << "\n\t\t\t\t ~ Searching and Removing for 5000 values Binary Tree: " << endl << endl;
	btRemove5000 = searchRemoveFromBinary(&binaryTree5000, btRemoveCont5000);
	cout << "\n\t\t\t\t ~ Searching and Removing for 50000 values Binary Tree: " << endl << endl;
	btRemove50000 = searchRemoveFromBinary(&binaryTree50000, btRemoveCont50000);
	cout << "\n\t\t\t\t ~ Searching and Removing for 500000 values Binary Tree: " << endl << endl;
	btRemove500000 = searchRemoveFromBinary(&binaryTree500000, btRemoveCont500000);
	cout << endl << endl;

	printBinaryTree(bt500, btRemove500, btRemoveCont500, bt5000, btRemove5000, btRemoveCont5000, bt50000, btRemove50000, 
	btRemoveCont50000, bt500000, btRemove500000, btRemoveCont500000);
}