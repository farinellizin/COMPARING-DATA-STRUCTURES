#include "includes.hpp"
#include "vector.hpp"
#include "printData.hpp"
using namespace std;

void runVector() {
    vector <float> vector500;
    vector <float> vector5000;
    vector <float> vector50000;
    vector <float> vector500000;

    float vec500, vec5000, vec50000, vec500000;
    float ordVec500, ordVec5000, ordVec50000, ordVec500000, vecRemove500, vecRemove5000, vecRemove50000, vecRemove500000;
	int vecRemoveCont500 = 0, vecRemoveCont5000 = 0, vecRemoveCont50000 = 0, vecRemoveCont500000 = 0;

    vec500 = readNumbersVector(vector500, "500numbers.txt");
	vec5000 = readNumbersVector(vector5000, "5000numbers.txt");
	vec50000 = readNumbersVector(vector50000, "50000numbers.txt");
	vec500000 = readNumbersVector(vector500000, "500000numbers.txt");

    size_t time = clock();
    quickSort(vector500, 0, vector500.size());
    time = clock() - time;
    ordVec500 = (float(time)/CLOCKS_PER_SEC);

    time = clock();
    quickSort(vector5000, 0, vector5000.size());
    time = clock() - time;
    ordVec5000 = (float(time)/CLOCKS_PER_SEC);

    time = clock();
    quickSort(vector50000, 0, vector50000.size());
    time = clock() - time;
    ordVec50000 = (float(time)/CLOCKS_PER_SEC);

    time = clock();
    quickSort(vector500000, 0, vector500000.size());
    time = clock() - time;
    ordVec500000 = (float(time)/CLOCKS_PER_SEC);

    vecRemove500 = searchRemoveFromVector(vector500, vecRemoveCont500);
    vecRemove5000 = searchRemoveFromVector(vector5000, vecRemoveCont5000);
    vecRemove50000 = searchRemoveFromVector(vector50000, vecRemoveCont50000);
    vecRemove500000 = searchRemoveFromVector(vector500000, vecRemoveCont500000);

    printVector(vec500, ordVec500, vecRemove500, vecRemoveCont500, vec5000, ordVec5000, vecRemove5000, vecRemoveCont5000,
    vec50000, ordVec50000, vecRemove50000, vecRemoveCont50000, vec500000, ordVec500000, vecRemove500000, vecRemoveCont500000);
}