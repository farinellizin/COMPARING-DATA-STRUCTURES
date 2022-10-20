#include "includes.hpp"
using namespace std;

void printAVLTree(float avl500, float avlRemove500, int avlRemoveCont500, float avl5000, float avlRemove5000, int avlRemoveCont5000,
float avl50000, float avlRemove50000, int avlRemoveCont50000, float avl500000, float avlRemove500000, int avlRemoveCont500000, 
float avlSearch500, float avlSearch5000, float avlSearch50000, float avlSearch500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*           Here's all the data gathered in the processing of the AVL Tree          *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 500 values:                                                       *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << avlSearch500 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << avlRemove500 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 5000 values:                                                      *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << avlSearch5000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << avlRemove5000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 50000 values:                                                     *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << avlSearch50000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << avlRemove50000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      AVL Tree - 500000 values:                                                    *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << avl500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << avlSearch500000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << avlRemove500000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - avlRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}