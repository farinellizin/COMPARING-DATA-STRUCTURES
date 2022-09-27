#include "vector.hpp"

void quickSort(vector <float> &vectorToOrder, int begin, int end)
{
	int i = begin, j = end - 1, pivot = vectorToOrder[(begin + end) / 2], aux;

	while(i <= j)
	{
		while(vectorToOrder[i] < pivot && i < end)
		{
			i++;
		}
		while(vectorToOrder[j] > pivot && j > begin)
		{
			j--;
		}
		if(i <= j)
		{
			aux = vectorToOrder[i];
			vectorToOrder[i] = vectorToOrder[j];
			vectorToOrder[j] = aux;
			i++;
			j--;
		}
	}
	if(j > begin)
		quickSort(vectorToOrder, begin, j+1);
	if(i < end)
		quickSort(vectorToOrder, i, end);
}

bool isInVector(vector <float> &vectorToOrder, float value) {
    int lowerBoundary = 0, upperBoundary = (vectorToOrder.size() - 1), middleBoundary = 0;

    while (lowerBoundary <= upperBoundary) {
        middleBoundary = ((lowerBoundary + upperBoundary) / 2);
        if (vectorToOrder[middleBoundary] == value) {
            return true;
        }

        if (vectorToOrder[middleBoundary] > value) {
            upperBoundary = middleBoundary - 1;
        } else {
            lowerBoundary = middleBoundary + 1;
        }
    }

    return false;
}

// void readNumbersVector(vector <float> &vectorToSave, string docName) {
//     ifstream myfile;
//     string line;
//     myfile.open(docName);

//     while (!myfile.eof()) {
//         getline(myfile, line);
//         if (line[0] != '\n') {

//         }
//     }
// }