#include "includes.hpp"
using namespace std;

void printRedBlackTree(float rb500, float rbRemove500, int rbRemoveCont500, float rb5000, float rbRemove5000, int rbRemoveCont5000,
float rb50000, float rbRemove50000, int rbRemoveCont50000, float rb500000, float rbRemove500000, int rbRemoveCont500000, 
float rbSearch500, float rbSearch5000, float rbSearch50000, float rbSearch500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*        Here's all the data gathered in the processing of the RedBlack Tree        *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      RedBlack Tree - 500 values:                                                  *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << rb500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << rbSearch500 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << rbRemove500 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (rbRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      RedBlack Tree - 5000 values:                                                 *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << rb5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << rbSearch5000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << rbRemove5000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (rbRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      RedBlack Tree - 50000 values:                                                *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << rb50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << rbSearch50000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << rbRemove50000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (rbRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      RedBlack Tree - 500000 values:                                               *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << rb500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << rbSearch500000 << " seconds;                                             *" << endl;   
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << rbRemove500000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (rbRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}