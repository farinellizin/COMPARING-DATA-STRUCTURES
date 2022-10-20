#include "includes.hpp"
using namespace std;

void printVector(float vec500, float ordVec500, float vecRemove500, int vecRemoveCont500, float vec5000, float ordVec5000, float vecRemove5000,
int vecRemoveCont5000, float vec50000, float ordVec50000, float vecRemove50000, int vecRemoveCont50000, float vec500000, float ordVec500000,
float vecRemove500000, int vecRemoveCont500000, float vecSearch500, float vecSearch5000, float vecSearch50000, float vecSearch500000) {
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
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << vecSearch500 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << vecRemove500 << " seconds;                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont500));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 5000 values:                                                        *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec5000 << " seconds;                               *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << vecSearch5000 << " seconds;                                             *"  << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << vecRemove5000 << " seconds;                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont5000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 50000 values:                                                       *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec50000 << " seconds;                               *" << endl;  
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << vecSearch50000 << " seconds;                                             *"  << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << vecRemove50000 << " seconds;                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont50000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Vector - 500000 values:                                                      *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << vec500000 << " seconds;                                                *" << endl;
    cout << "\t\t\t*            Ordering with QuickSort: " << fixed << setprecision(4) << ordVec500000 << " seconds;                               *" << endl; 
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << vecSearch500000 << " seconds;                                             *"   << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << vecRemove500000 << " seconds;                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", (vecRemoveCont500000));
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}