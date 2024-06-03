#include <iostream>
#include "Sort.h"
int main()
{
	
	Sort list(10, 1, 100);
	list.InsertSort();
	list.Print();

	Sort list1 = { 5, 3, 8, 1, 2, 4, 6, 7 }; 
	list1.InsertSort(); 
	list1.Print();


}