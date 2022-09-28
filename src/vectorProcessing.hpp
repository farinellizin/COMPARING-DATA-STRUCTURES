#include "includes.hpp"
#include "vector.hpp"
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

    cout << "1\n\n\n";
    vecRemove500 = searchRemoveFromVector(vector500, vecRemoveCont500);
    cout << "2\n\n\n";
    vecRemove5000 = searchRemoveFromVector(vector5000, vecRemoveCont5000);
    cout << "3\n\n\n";
    vecRemove50000 = searchRemoveFromVector(vector50000, vecRemoveCont50000);
    cout << "4\n\n\n";
    vecRemove500000 = searchRemoveFromVector(vector500000, vecRemoveCont500000);

    cout << vec500 << vec5000 << vec50000 << vec500000 << ordVec500 << ordVec5000;
    cout << ordVec50000<< ordVec500000<<vecRemoveCont500 << vecRemoveCont5000 << vecRemoveCont50000 << vecRemoveCont500000;
    cout << vecRemove500 << vecRemove5000 << vecRemove50000 << vecRemove500000 << endl;

    cout << "time: " << vec500 << "\t\tsorting: " << ordVec500 << "\t\tremoval: " << vecRemove500 << "\t\tremoved: " << vecRemoveCont500 << endl << endl;
}