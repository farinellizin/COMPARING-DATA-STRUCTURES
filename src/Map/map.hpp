#ifndef MAP_HPP
#define MAP_HPP
#include "includes.hpp"
using namespace std;

float readNumbersMap(map <string, float> &mapToFill, string docName);
float searchInMap(map <string, float> &mapToSearch);
float searchRemoveFromMap(map <string, float> &mapToRemove, int &mRemoveCont);

#endif