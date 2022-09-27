#include "includes.hpp"
#include "vector.hpp"
using namespace std;

void runVector() {
    // vector <float> vector500;
    // vector <float> vector5000;
    // vector <float> vector50000;
    // vector <float> vector500000;

    // float vec500, vec5000, vec50000, vec500000, vecRemove500, vecRemove5000, vecRemove50000, vecRemove500000;
	// int vecRemoveCont500 = 0, vecRemoveCont5000 = 0, vecRemoveCont50000 = 0, vecRemoveCont500000 = 0;

    vector <float> teste;

    for (int i = 0; i < 15; i++) {
        teste.push_back(rand() % 100 + 1);
    }

    quickSort(teste, 0, 15);
    

    for (int i = 0; i < 15; i++) {
        cout << teste[i] << endl;
    }


}