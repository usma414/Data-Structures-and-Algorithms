#include <iostream>
#include <vector>
using namespace std;

int main () {

int a = 5;
int* ptr = &a;
int** ptr2 = &ptr;

cout << &a << endl; 
cout << ptr << endl;
cout << &ptr << endl;


// Derefrencing 
cout << *(ptr) << endl;    // Gives value ath particular address.
cout << *(ptr2) << endl;   // *(ptr2) is same as as ptr
cout << ptr << endl;       // Same as *(ptr2)
cout << **(ptr2) << endl;  //Same as a

}