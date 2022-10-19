#include "vector.hpp"

void swap(float* a, float* b) {
    float t = *a;
    *a = *b;
    *b = t;
}

int partition(vector <float> &vectorToOrder, int low, int high) {
    float pivot = vectorToOrder[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) {
        if (vectorToOrder[j] < pivot) {
            i++;
            swap(&vectorToOrder[i], &vectorToOrder[j]);
        }
    }
    swap(&vectorToOrder[i + 1], &vectorToOrder[high]);
    return (i + 1);
}

void quickSort(vector <float> &vectorToOrder, int low, int high) {
	if (low < high) {
        int pi = partition(vectorToOrder, low, high);
        quickSort(vectorToOrder, low, pi - 1);
        quickSort(vectorToOrder, pi + 1, high);
    }
}

int vectorBinarySearch(vector <float> &vectorToSearch, float value) {
    int lowerBoundary = 0, upperBoundary = (vectorToSearch.size() - 1), middleBoundary = 0;

    while (lowerBoundary <= upperBoundary) {
        middleBoundary = ((lowerBoundary + upperBoundary) / 2);

        if (vectorToSearch[middleBoundary] == value) {
            return middleBoundary;
        }

        if (vectorToSearch[middleBoundary] > value) {
            upperBoundary = middleBoundary - 1;
        } else {
            lowerBoundary = middleBoundary + 1;
        }
    }

    return -1;
}

bool isInVector(vector <float> &vectorToSearch, float value) {
    for (long unsigned int i = 0; i < vectorToSearch.size(); i++) {
        if (vectorToSearch[i] == value) {
            return true;
        }
    }

    return false;
}

float readNumbersVector(vector <float> &vectorToSave, string docName) {
    size_t time = clock();
    ifstream myfile;
    string line;
    myfile.open(docName);

    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n' && !isInVector(vectorToSave, stof(line))) {
            vectorToSave.push_back(stof(line));
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

float searchRemoveFromVector(vector <float> &vectorToRemove, int &vecRemoveCont) {
	size_t time = clock();
	ifstream myfile;
	string line;
	int pos;

	myfile.open("search.txt");

	while (!myfile.eof()) {
		getline(myfile, line);
		if (line[0] != '\n') {
			pos = vectorBinarySearch(vectorToRemove, stof(line));
			if (pos != -1) {
				vectorToRemove.erase(vectorToRemove.begin() + pos);
				vecRemoveCont++;
			}
		}
	}

	time = clock() - time;
	return (float(time)/CLOCKS_PER_SEC);
}