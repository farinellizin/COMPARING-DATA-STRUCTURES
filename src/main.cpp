#include "includes.hpp"
#include "binaryTree.hpp"
#include "printData.hpp"
using namespace std;

int main () {
    BinaryTree *binaryTree500, *binaryTree5000, *binaryTree50000, *binaryTree500000;
	initBinaryTree(&binaryTree500);
	initBinaryTree(&binaryTree5000);
	initBinaryTree(&binaryTree50000);
	initBinaryTree(&binaryTree500000);

	float bt500, bt5000, bt50000, bt500000, btRemove500, btRemove5000, btRemove50000, btRemove500000; // data binaryTree
	int btRemoveCont500 = 0, btRemoveCont5000 = 0, btRemoveCont50000 = 0, btRemoveCont500000 = 0;
	// float avlt500, avlt5000, avlt50000, avlt500000; // data avlTree
	// float rbt500, rbt5000, rbt50000, rbt500000; // data redblackTree
	// float m500, m5000, m50000, m500000; // data map
	// float v500, v5000, v50000, v500000; // data vector
	// float umap500, umap5000, umap50000, umap500000; // data unordered map

	bt500 = read500numbersBinary(&binaryTree500);
	bt5000 = read5000numbersBinary(&binaryTree5000);
	bt50000 = read50000numbersBinary(&binaryTree50000);
	bt500000 = read500000numbersBinary(&binaryTree500000);

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