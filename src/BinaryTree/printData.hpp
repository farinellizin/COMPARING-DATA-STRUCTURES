#include "includes.hpp"
using namespace std;

void printBinaryTree(float bt500, float btRemove500, int btRemoveCont500, float bt5000, float btRemove5000, int btRemoveCont5000,
float bt50000, float btRemove50000, int btRemoveCont50000, float bt500000, float btRemove500000, int btRemoveCont500000,
float btSearch500, float btSearch5000, float btSearch50000, float btSearch500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*         Here's all the data gathered in the processing of the Binary Tree         *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 500 values:                                                    *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << btSearch500 << " seconds;                                             *" << endl;                                     
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << btRemove500 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 5000 values:                                                   *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << btSearch5000 << " seconds;                                             *" << endl;                              
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << btRemove5000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 50000 values:                                                  *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << btSearch50000 << " seconds;                                             *" << endl;                              
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << btRemove50000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Binary Tree - 500000 values:                                                 *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << bt500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << btSearch500000 << " seconds;                                             *" << endl;                              
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << btRemove500000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (10000 - btRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}