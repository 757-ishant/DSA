#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr ++;    // 4 bytes memory will add
    cout << ptr << endl;
    ptr --;
    cout << ptr << endl;

    int* ptr1;
    int* ptr2 = ptr1 + 2;        // it means 8 bytes of memory will add in ptr1

    cout<<ptr2 - ptr1<<endl;     // it will print 2.means only 2 integers can come  between them.
    cout<<"we can use compare operators also. If true the it will return 1 ans vicacersa."<<endl<<endl;
    int* ptr3;
    int* ptr4;

    cout<<(ptr3<ptr4)<<endl;
    cout<<(ptr3>ptr4)<<endl;
    cout<<(ptr3==ptr4)<<endl;
    cout<<(ptr3<=ptr4)<<endl;
    cout<<(ptr3>=ptr4)<<endl;
    cout<<(ptr3!=ptr4)<<endl;

    return 0;
}