#include <iostream>
using namespace std;

//one of the most common uses of pointes is with arrays
void pointersInArray(){
	int nums[5] = { 1,5,3,8,4 };
	cout << "This is the adress of the first element of the array: " << nums << "\n";
	//therefore the nums variable beahaves like a pointer, and the [] are behaving as a dereference operator
	cout << "The value of the first el" << *nums << "\n";
	//adding 2 to skip position of addres spaces, then dereference
	cout << "number at idx 2" << *(nums + 2) << "\n";
	//howto enter and add values dynamically with for loop
	int numsTwo[3];
	for (int i = 0; i < (sizeof(numsTwo) / sizeof(1)); i++) {
		cout << "Add number: " << "\n";
		cin >> numsTwo[i];
	}
	//for (int i = 0; i < (sizeof(numsTwo) / sizeof(1)); i++) {
	//	cout << numsTwo[i] << "\n";
	//}
	//same as line 18 but using pointers
	for (int i = 0; i < (sizeof(numsTwo) / sizeof(1)); i++) {
		cout << "Address I hope: " << numsTwo + i << " of " << *(numsTwo + i) << "\n";
	}
	//if we loop one more time than the size of out actual array we log a memory address, which does not belong to the array
	//this does not work with ints I have NO IDEA WHY!
	const char *ptrArra[3] = { "3","2" };
}