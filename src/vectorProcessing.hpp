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

    // float vec500, ordVec500, vecRemove500;
    // int vecRemoveCont500 = 0;

    vec500 = readNumbersVector(vector500, "500numbers.txt");
    cout << "fim leitura 1" << endl;
	vec5000 = readNumbersVector(vector5000, "5000numbers.txt");
    cout << "fim leitura 2" << endl;
	vec50000 = readNumbersVector(vector50000, "50000numbers.txt");
    cout << "fim leitura 3" << endl;
	vec500000 = readNumbersVector(vector500000, "500000numbers.txt");
    cout << "fim leitura 4" << endl;

    for (long unsigned int i = 0; i < vector500.size(); i++) {
        cout << vector500[i] << endl;
    }

    // float aux;

    // for (long unsigned int i = 0; i < vector500.size(); i++) {
    //     for (long unsigned int j = i + 1; j < vector500.size(); j++) {
    //         if (vector500[i] > vector500[j]) {
    //             aux = vector500[i];
    //             vector500[i] = vector500[j];
    //             vector500[j] = aux;
    //         }
    //     }
    // }

    // teste(vector500);

    cout << endl << endl << endl;

    // for (long unsigned int i = 0; i < vector500.size(); i++) {
    //     cout << vector500[i] << endl;
    // }

    size_t time = clock();
    quickSort(vector500, 0, vector500.size());
    time = clock() - time;
    ordVec500 = (float(time)/CLOCKS_PER_SEC);
    
    cout << "fim ordenação 1" << endl;

    time = clock();
    quickSort(vector5000, 0, vector5000.size());
    time = clock() - time;
    ordVec5000 = (float(time)/CLOCKS_PER_SEC);
    
    cout << "fim ordenação 2" << endl;

    time = clock();
    quickSort(vector50000, 0, vector50000.size());
    time = clock() - time;
    ordVec50000 = (float(time)/CLOCKS_PER_SEC);

    cout << "fim ordenação 3" << endl;

    time = clock();
    quickSort(vector500000, 0, vector500000.size());
    time = clock() - time;
    ordVec500000 = (float(time)/CLOCKS_PER_SEC);

    cout << "fim ordenação 4" << endl;

    cout << "\n\t\t\t\t ~ Searching and Removing from 500 values Vector: " << endl << endl;
    vecRemove500 = searchRemoveFromVector(vector500, vecRemoveCont500);
    cout << "\n\t\t\t\t ~ Searching and Removing from 500 values Vector: " << endl << endl;
    vecRemove5000 = searchRemoveFromVector(vector5000, vecRemoveCont5000);
    cout << "\n\t\t\t\t ~ Searching and Removing from 500 values Vector: " << endl << endl;
    vecRemove50000 = searchRemoveFromVector(vector50000, vecRemoveCont50000);
    cout << "\n\t\t\t\t ~ Searching and Removing from 500 values Vector: " << endl << endl;
    vecRemove500000 = searchRemoveFromVector(vector500000, vecRemoveCont500000);

    // cout << vec500 << vec5000 << vec50000 << vec500000 << ordVec500 << ordVec5000;
    // cout << ordVec50000<< ordVec500000<<vecRemoveCont500 << vecRemoveCont5000 << vecRemoveCont50000 << vecRemoveCont500000;
    // cout << vecRemove500 << vecRemove5000 << vecRemove50000 << vecRemove500000 << endl;

    // cout << "time: " << vec500 << "\t\tsorting: " << ordVec500 << "\t\tremoval: " << vecRemove500 << "\t\tremoved: " << vecRemoveCont500 << endl << endl;

    printVector(vec500, ordVec500, vecRemove500, vecRemoveCont500, vec5000, ordVec5000, vecRemove5000, vecRemoveCont5000,
    vec50000, ordVec50000, vecRemove50000, vecRemoveCont50000, vec500000, ordVec500000, vecRemove500000, vecRemoveCont500000);
}