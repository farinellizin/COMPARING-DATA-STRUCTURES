#include "includes.hpp"
#include "redBlackTree.hpp"
#include "printData.hpp"

void runRedBlackTree() {
    RedBlackTree *RedBlackTree500 = initRedBlack(), *RedBlackTree5000 = initRedBlack(), *RedBlackTree50000 = initRedBlack(), *RedBlackTree500000 = initRedBlack();

    float rb500 = 0, rb5000 = 0, rb50000 = 0, rb500000 = 0, rbRemove500 = 0, rbRemove5000 = 0, rbRemove50000 = 0, rbRemove500000 = 0; // data rbTree
	int rbRemoveCont500 = 0, rbRemoveCont5000 = 0, rbRemoveCont50000 = 0, rbRemoveCont500000 = 0;

    rb500 = readNumbersRedBlack(&RedBlackTree500, "500numbers.txt");
	rb5000 = readNumbersRedBlack(&RedBlackTree5000, "5000numbers.txt");
	rb50000 = readNumbersRedBlack(&RedBlackTree50000, "50000numbers.txt");
	rb500000 = readNumbersRedBlack(&RedBlackTree500000, "500000numbers.txt");

	rbRemove500 = searchRemoveFromRedBlack(&RedBlackTree500, rbRemoveCont500);
	rbRemove5000 = searchRemoveFromRedBlack(&RedBlackTree5000, rbRemoveCont5000);
	rbRemove50000 = searchRemoveFromRedBlack(&RedBlackTree50000, rbRemoveCont50000);
	rbRemove500000 = searchRemoveFromRedBlack(&RedBlackTree500000, rbRemoveCont500000);
	cout << endl << endl;

	printRedBlackTree(rb500, rbRemove500, rbRemoveCont500, rb5000, rbRemove5000, rbRemoveCont5000, rb50000, rbRemove50000, 
	rbRemoveCont50000, rb500000, rbRemove500000, rbRemoveCont500000);
}