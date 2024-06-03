#pragma once
#include <initializer_list>
#include <vector>
using namespace std;
class Sort
{
    vector<int> data;
public:
    Sort(int numElements, int min, int max);
    Sort(initializer_list<int> list);
    Sort(const vector<int>& vec, int numElements);
    Sort(const char* str);
    Sort(int numArgs, ...);
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};

