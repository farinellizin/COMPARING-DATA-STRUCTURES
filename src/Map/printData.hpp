#include "includes.hpp"
using namespace std;

void printMap(float m500, float mRemove500, int mRemoveCont500, float m5000, float mRemove5000, int mRemoveCont5000,
float m50000, float mRemove50000, int mRemoveCont50000, float m500000, float mRemove500000, int mRemoveCont500000,
float mSearch500, float mSearch5000, float mSearch50000, float mSearch500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*             Here's all the data gathered in the processing of the Map             *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 500 values:                                                            *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << mSearch500 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << mRemove500 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 5000 values:                                                           *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << mSearch5000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << mRemove5000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont5000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 50000 values:                                                          *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << mSearch50000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << mRemove50000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont50000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Map - 500000 values:                                                         *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << m500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << mSearch500000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << mRemove500000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", mRemoveCont500000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}