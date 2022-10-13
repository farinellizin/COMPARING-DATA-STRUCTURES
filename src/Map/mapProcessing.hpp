#include "map.hpp"
#include "includes.hpp"
using namespace std;

void runMap() {
    map <string, float> map500;
    map <string, float> map5000;
    map <string, float> map50000;
    map <string, float> map500000;

    float m500, m5000, m50000, m500000, mRemove500, mRemove5000, mRemove50000, mRemove500000;
    int mRemoveCont500 = 0, mRemoveCont5000 = 0, mRemoveCont50000 = 0, mRemoveCont500000 = 0;
    
    m500 = readNumbersMap(map500, "500numbers.txt");
    m5000 = readNumbersMap(map5000, "5000numbers.txt");
    m50000 = readNumbersMap(map50000, "50000numbers.txt");
    m500000 = readNumbersMap(map500000, "500000numbers.txt");

	mRemove500 = searchRemoveFromMap(map500, mRemoveCont500);
	mRemove5000 = searchRemoveFromMap(map5000, mRemoveCont5000);
	mRemove50000 = searchRemoveFromMap(map50000, mRemoveCont50000);
	mRemove500000 = searchRemoveFromMap(map500000, mRemoveCont500000);
	cout << endl << endl;

    printMap(m500, mRemove500, mRemoveCont500, m5000, mRemove5000, mRemoveCont5000,
 m50000, mRemove50000, mRemoveCont50000, m500000, mRemove500000, mRemoveCont500000);
} 