#include "includes.hpp"
#include "binaryTree.hpp"
using namespace std;

int main () {
    BinaryTree *binaryTree500, *binaryTree5000, *binaryTree50000, *binaryTree500000;
	initBinaryTree(&binaryTree500);
	initBinaryTree(&binaryTree5000);
	initBinaryTree(&binaryTree50000);
	initBinaryTree(&binaryTree500000);

	float bt500, bt5000, bt50000, bt500000; // data binaryTree
	// float avlt500, avlt5000, avlt50000, avlt500000; // data avlTree
	// float rbt500, rbt5000, rbt50000, rbt500000; // data redblackTree
	// float m500, m5000, m50000, m500000; // data map
	// float v500, v5000, v50000, v500000; // data vector
	// float umap500, umap5000, umap50000, umap500000; // data unordered map

	bt500 = read500numbersBinary(&binaryTree500);
	bt5000 = read5000numbersBinary(&binaryTree5000);
	bt50000 = read50000numbersBinary(&binaryTree50000);
	bt500000 = read500000numbersBinary(&binaryTree500000);

	cout << bt500 << endl << bt5000 << endl << bt50000 << endl << bt500000;
	
}