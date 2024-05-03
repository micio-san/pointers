#include <iostream>;
#include <stdlib.h>;
using namespace std;

/*DYNAMIC ARRAYS
in arrays data is stored in continuos memory, 
therefore it is fast to access it while other 
datatypes (ex linked list) store data in non-continous order,
but because it is stored like that it also has disadvantages,
if you want to insert or delete elements in array it will be slower.
*/

void dynamicArrays() {
	/*The size of the array has to be constant, and known before execution.
	in c++ there are 2 commands which are used to allocate (NEW) or deallocate (DELETE) 
	memory at runtime, meaning getting and freeing memory
	at need.*/
	int size;
	cout << "Feed me number: ";
	cin >> size;
	//The user will decide the size and memory will be allocated at runtime accordingly;
	int* array = new int[size];
	cout << "Size of array now: " << size << "\n";
	for (int i = 0; i < size; i++) {
		//random number from 1 to 10
		array[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < size; i++) {
		//other way to dereference
		cout << "Members of array" << *(array + i) << "\n";
	}
	/*using dinamyc memory comes with the necessity of deallocationg the
	memory that was once assigned, so for every NEW there has tobe a DELETE.
	The square brackets are necessary because that is the way you allocated memory,
	it is also good practice to assign null to the used array, so the array won't point to any address
	that is used somewhere else in the computer
	*/
	delete[]array;
	array = NULL;
}

void twoDDynamicArrays() {
	/*A multidimensional array is an array containg arrays, every element inside will point to an addy*/
	int rows, cols;
	cout << "Row ?" << "\n";
	cin >> rows;
	cout << "Col ?" << "\n";
	cin >> cols;

}