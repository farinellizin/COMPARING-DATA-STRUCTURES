#include "unorderedMap.hpp"

float readNumbersUnorderedMap(unordered_map <string, float> &mapToFill, string docName) {
    size_t time = clock();
    string line;
    ifstream myfile;

    myfile.open(docName);
    while (!myfile.eof()) {
        getline(myfile, line);
        
        if (line[0] != '\n') {
            mapToFill.emplace(line, stof(line));
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

float searchInUnorderedMap(unordered_map <string, float> &mapToSearch) {
    size_t time = clock();
    string line;
    ifstream myfile;

    myfile.open("search.txt");
    while (!myfile.eof()) {
        getline(myfile, line);

        if (line[0] != '\n') {
            mapToSearch.find(line);
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}

float searchRemoveFromUnorderedMap(unordered_map <string, float> &mapToRemove, int &mRemoveCont) {
    size_t time = clock();
    string line;
    ifstream myfile;

    myfile.open("search.txt");
    while (!myfile.eof()) {
        getline(myfile, line);
        if (line[0] != '\n') {
            auto search = mapToRemove.find(line);
            if (search != mapToRemove.end()) {
                mapToRemove.erase(line);
                mRemoveCont++;
            }
        }
    }

    time = clock() - time;
    return (float(time)/CLOCKS_PER_SEC);
}