#ifndef VECTOR_HPP
#define VECTOR_HPP
#include "includes.hpp"
using namespace std;

void quickSort(vector <float> &vectorToOrder, int begin, int end);
bool isInVector(vector <float> &vectorToOrder, float value);
void readNumbersVector(vector <float> &vectorToSave, string docName);

#endif