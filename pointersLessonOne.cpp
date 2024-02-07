#include <iostream>
using namespace std;

void printN(int *ptr) {
    //store in pointer, print value;
    cout << "function pointer:" << *ptr << "\n";
}
//because void ptrcan points to any datatype you have to keep track of which datatype
void printVoid(void* printPtr, char type) {
    switch (type) {
    case 'i':
        // a void ptr cannot be dereferenced directly, it has to be casted into a specific datatype like so:
        cout << "Type casting into int pointer then dereferencing: " << *((int*)printPtr) << "\n";
        break;
    case 'c':
        cout << "Type casting into char pointer then dereferencing: " << *((char*)printPtr) << "\n";
        break;
    };
}

void pointersAndVoidPointers() {
    // a pointer is a container that stores a variable;
    int n = 5;
    //prints the addres of variable n, the & operator gives you access to address
    cout << &n << "\n";
    //pointer stores the addess of var n;
    int* pt = &n;
    //this is == to line 9
    cout << "pointer addy: " << pt << "\n";
    // to access the value with * operator as dereference operator
    cout << "pointer val: " << *pt << "\n";
    //reassing to the memory location stored in * a new value;
    *pt = 10000;
    //POINTER HAVE TO BE OF THE SAME TYPE OF THE VARIABLE THEY ARE POINTING TO. THE INTEGER POINTER IS POINTING TO A INT VARIABLE
    cout << "pointer new value: " << *pt << "\n";
    /*VOID POINTERS is a type of pointer that can hold the addy of any type(float, int, char), but you cannot directly dereference a null
    pointer (line 13)*/
    int miao = 5;
    char str = 'm';
    int* ptr = &miao;
    void* ptr2 = &str;
    //I send the variable address, via pointer of via &(line 12)
    printN(ptr);
    //what if I want function print both int pointer
    printVoid(ptr, 'i');
    printVoid(ptr2, 'c');
}