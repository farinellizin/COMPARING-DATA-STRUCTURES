#ifndef UNORDEREDMAP_HPP
#define UNORDEREDMAP_HPP
#include "includes.hpp"
using namespace std;

float readNumbersUnorderedMap(unordered_map <string, float> &mapToFill, string docName);
float searchRemoveFromUnorderedMap(unordered_map <string, float> &mapToRemove, int &mRemoveCont);

#endif