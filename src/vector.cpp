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