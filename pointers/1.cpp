#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 10;
    
    // pointer
    int* ptr = &a;

    cout<<&a<<"   "<<ptr<<endl;   // both same values.

    cout<< &ptr<<endl; // adress of ptr.

    cout<< *ptr;   // value at address ptr.

    cout<<endl;
    cout<<endl;
    
    int** ptr2 = &ptr; // It stores   adress of ptr

    cout<<&ptr<<endl;    // these both
    cout<<ptr2<<endl;       //        values would be same.
    cout<<endl;
    
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;     // value at adress.
    cout<<*ptr2<<endl;
    cout<<&a<<endl;
    cout<<**ptr2<<endl;

    return 0;
}