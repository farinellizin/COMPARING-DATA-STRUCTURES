#include "BinaryTree/binaryTreeProcessing.hpp"
#include "Vector/vectorProcessing.hpp"
#include "Map/mapProcessing.hpp"
#include "UnorderedMap/unorderedMapProcessing.hpp"
#include "AVLTree/avlTreeProcessing.hpp"
#include "RedBlackTree/redBlackTreeProcessing.hpp"
#include "includes.hpp"
using namespace std;

int main () {
	for (int i = 0; i < 10; i++) {
		cout << "\t\t\tEXECUÇÃO " << i + 1 << endl << endl;
		
		runVector();
		runBinaryTree();
		runMap();
		runUnorderedMap();
		runAVLTree();
		runRedBlackTree();
	
		cout << endl << endl << endl;
	}
}