#include <iostream>
using namespace std;

int main() {



    int a = 10;
    int* p = &a;

    cout << "Address of p = " << p << endl;
    cout << "Value of a using pointer p =" << *p << endl;
    *p = 25;
    cout << "New value of  a = " << a << endl<< endl;

cout << "part 2 of assignment :" << endl << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    int* pt = arr;

    cout << "Addresses:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Address of array [" << i << "]: " << (pt + i) << endl;
    }

    cout << "Values:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Value at array [" << i << "]: " << *(pt + i) << endl;
    }

    return 0;
}