#include "includes.hpp"
using namespace std;

void printBinaryTree(float bt500, float btRemove500, int btRemoveCont500, float bt5000, float btRemove5000, int btRemoveCont5000,
float bt50000, float btRemove50000, int btRemoveCont50000, float bt500000, float btRemove500000, int btRemoveCont500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*         Here's all the data gathered in the processing of the Binary Tree         *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 500 values:                                                    *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << btRemove500 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 5000 values:                                                   *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << btRemove5000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 50000 values:                                                  *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << btRemove50000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 500000 values:                                                 *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << btRemove500000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}

void printMap(float m500, float mRemove500, int mRemoveCont500, float m5000, float mRemove5000, int mRemoveCont5000,
float m50000, float mRemove50000, int mRemoveCont50000, float m500000, float mRemove500000, int mRemoveCont500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*             Here's all the data gathered in the processing of the Map             *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 500 values:                                                            *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove500 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 5000 values:                                                           *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove5000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont5000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 50000 values:                                                          *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove50000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont50000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 500000 values:                                                         *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove500000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}

void printUnorderedMap(float m500, float mRemove500, int mRemoveCont500, float m5000, float mRemove5000, int mRemoveCont5000,
float m50000, float mRemove50000, int mRemoveCont50000, float m500000, float mRemove500000, int mRemoveCont500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*        Here's all the data gathered in the processing of the Unordered Map        *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 500 values:                                                  *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove500 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 5000 values:                                                 *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove5000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont5000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 50000 values:                                                *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove50000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont50000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 500000 values:                                               *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << mRemove500000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}

void printAVLTree(float avl500, float avlRemove500, int avlRemoveCont500, float avl5000, float avlRemove5000, int avlRemoveCont5000,
float avl50000, float avlRemove50000, int avlRemoveCont50000, float avl500000, float avlRemove500000, int avlRemoveCont500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*           Here's all the data gathered in the processing of the AVL Tree          *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 500 values:                                                       *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << avlRemove500 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 5000 values:                                                      *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << avlRemove5000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 50000 values:                                                     *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << avlRemove50000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 500000 values:                                                    *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << avlRemove500000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}

void printVector(float vec500, float ordVec500, float vecRemove500, int vecRemoveCont500, float vec5000, float ordVec5000, float vecRemove5000,
int vecRemoveCont5000, float vec50000, float ordVec50000, float vecRemove50000, int vecRemoveCont50000, float vec500000, float ordVec500000,
float vecRemove500000, int vecRemoveCont500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*           Here's all the data gathered in the processing of the Vector            *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 500 values:                                                         *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec500 << " seconds;                               *" << endl;  
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << vecRemove500 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 5000 values:                                                        *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec5000 << " seconds;                               *" << endl;  
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << vecRemove5000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 50000 values:                                                       *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec50000 << " seconds;                               *" << endl;  
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << vecRemove50000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 500000 values:                                                      *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec500000 << " seconds;                                                *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec500000 << " seconds;                               *" << endl;  
    cout << "\t\t\t*            Searching and removing: " << fixed << setprecision(4) << vecRemove500000 << " seconds.                                *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}