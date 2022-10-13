#include "unorderedMap.hpp"
#include "includes.hpp"
using namespace std;

void runUnorderedMap() {
    unordered_map <string, float> umap500;
    unordered_map <string, float> umap5000;
    unordered_map <string, float> umap50000;
    unordered_map <string, float> umap500000;

    float um500, um5000, um50000, um500000, umRemove500, umRemove5000, umRemove50000, umRemove500000;
    int umRemoveCont500 = 0, umRemoveCont5000 = 0, umRemoveCont50000 = 0, umRemoveCont500000 = 0;
    
    um500 = readNumbersUnorderedMap(umap500, "500numbers.txt");
    um5000 = readNumbersUnorderedMap(umap5000, "5000numbers.txt");
    um50000 = readNumbersUnorderedMap(umap50000, "50000numbers.txt");
    um500000 = readNumbersUnorderedMap(umap500000, "500000numbers.txt");

	umRemove500 = searchRemoveFromUnorderedMap(umap500, umRemoveCont500);
	umRemove5000 = searchRemoveFromUnorderedMap(umap5000, umRemoveCont5000);
	umRemove50000 = searchRemoveFromUnorderedMap(umap50000, umRemoveCont50000);
	umRemove500000 = searchRemoveFromUnorderedMap(umap500000, umRemoveCont500000);
	cout << endl << endl;

    printUnorderedMap(um500, umRemove500, umRemoveCont500, um5000, umRemove5000, umRemoveCont5000,
 um50000, umRemove50000, umRemoveCont50000, um500000, umRemove500000, umRemoveCont500000);
} 