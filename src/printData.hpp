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