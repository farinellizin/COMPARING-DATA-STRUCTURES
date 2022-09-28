#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "includes.hpp"
using namespace std;

void quickSort(vector <float> &vectorToOrder, int begin, int end);
int vectorBinarySearch(vector <float> &vectorToSearch, float value);
bool isInVector(vector <float> &vectorToOrder, float value);
float readNumbersVector(vector <float> &vectorToSave, string docName);
float searchRemoveFromVector(vector <float> &vectorToRemove, int &vecRemoveCont);

#endif