#include <iostream>
#include <vector>

using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<arr<<endl;
    cout<<*arr<<endl;


    // this pointer could be modified or changed.
    int a =10 , b =20;
    int* p = &a;
    p =&b;
     
    // but this will show error
    // int *arr;
    arr =&a;

    cout<<*p<<endl;
    return 0;
}