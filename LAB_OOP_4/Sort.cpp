#include "Sort.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cstdarg>
#include <algorithm>
using namespace std;
Sort::Sort(int numElements, int min, int max)
{
    srand(time(nullptr));
    for (int i = 0; i < numElements; ++i)
        data.push_back(min + rand() % (max - min + 1));
}
Sort::Sort(initializer_list<int> list) : data(list) {}

Sort::Sort(const vector<int>& vec, int numElements) {
    for (int i = 0; i < numElements; ++i)
        data.push_back(vec[i]);
}

Sort::Sort(const char* str) {
    stringstream ss(str);
    int num;
    char comma;
    while (ss >> num) {
        data.push_back(num);
        ss >> comma;
    }
}

Sort::Sort(int numArgs, ...) {
    va_list args;
    va_start(args, numArgs);
    for (int i = 0; i < numArgs; ++i)
        data.push_back(va_arg(args, int));
    va_end(args);
}
void Sort::InsertSort(bool ascendent)
{
    int n = data.size();
    for (int i = 1; i < n; ++i) {
        int key = data[i];
        int j = i - 1;
        while (j >= 0 && (ascendent ? data[j] < key : data[j] > key)) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }
}

void Sort::Print() {
    for (int num : data)
        cout << num << " ";
    cout << endl;
}
int Sort::GetElementsCount() {
    return data.size();
}

int Sort::GetElementFromIndex(int index) {
    if (index >= 0 && index < data.size())
        return data[index];
    else
        return -1;
}