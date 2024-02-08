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

/*returning multiple values from a function using pointers
using pointers to return more than one value from a function is one of the most common uses of pointers*/
int returnSmallestNum(int nums[5]) {
	int small=nums[0];
	for (int i = 0; i < 5; i++) {
		cout << nums[i] << "\n";
		if (small > nums[i] ) {
			small = nums[i];
		};
	}
	cout << "smol: " << small << "\n";
	return small;
}

int returnBiggest(int nums[5]) {
	int bg = nums[0];
	for (int i = 0; i < 5; i++) {
		if (nums[i] > bg) {
			bg = nums[i];
		}
	}
	return bg;
}

/*get both with one function by using pointers, beause we want to return TWO values from the function. we have to pass 
  the addresses of the two value by reference, then change the values stored in those two addresses to the min and max
*/
void getBoth(int nums[5], int*min, int*max ) {
	for (int i = 0; i < 5; i++) {
		cout << nums[i] << "\n";
		if (*min > nums[i]) {
			*min = nums[i];
		};
		if (nums[i] > *max) {
			*max = nums[i];
		}
	}
	/*this function will directly modify the values that are stored in the& min&& max addresses, those same addresses will be
	accessible directly in our multipleValsOneFunc(), but MODIFIED!
	*/
}

void multipleValsOneFunc() {
	int nums[5] = { 5,4,-1,29,6 };
	int smol = returnSmallestNum(nums);
	int big = returnBiggest(nums);
	cout << "min is: " << smol << " and biggest is: " << big << "\n";
	int min = nums[0];
	int max = nums[1];
	//passing parameter by reference!
	getBoth(nums, &min, &max);
    //change directly by address!!!!!!
	cout << "Modified max?: " << min << " and modified min: " << max;
}
