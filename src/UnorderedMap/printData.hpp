#include "includes.hpp"
using namespace std;

void printUnorderedMap(float um500, float umRemove500, int umRemoveCont500, float um5000, float umRemove5000, int umRemoveCont5000,
float um50000, float umRemove50000, int umRemoveCont50000, float um500000, float umRemove500000, int umRemoveCont500000, 
float umSearch500, float umSearch5000, float umSearch50000, float umSearch500000) {
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*        Here's all the data gathered in the processing of the Unordered Map        *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 500 values:                                                  *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << um500 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << umSearch500 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << umRemove500 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", umRemoveCont500);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 5000 values:                                                 *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << um5000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << umSearch5000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << umRemove5000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", umRemoveCont5000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 50000 values:                                                *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << um50000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << umSearch50000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << umRemove50000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", umRemoveCont50000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*      Unordered Map - 500000 values:                                               *" << endl;
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*            Store: " << fixed << setprecision(4) << um500000 << " seconds;                                                 *" << endl;
    cout << "\t\t\t*            Searching: " << fixed << setprecision(4) << umSearch500000 << " seconds;                                             *" << endl;
    cout << "\t\t\t*            Removing: " << fixed << setprecision(4) << umRemove500000 << " seconds.                                              *" << endl;
    printf("\t\t\t*            Number of removals: %05d                                              *\n", umRemoveCont500000);
    cout << "\t\t\t*                                                                                   *" << endl;
    cout << "\t\t\t*************************************************************************************" << endl;
}