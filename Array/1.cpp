#include <iostream>
using namespace std;
int main(){

    // decalre array

    int number[15];

    cout<< endl <<"Everything is fine till now."<<endl;

    cout<< endl <<"value of number[0] is: "<<number[0] <<endl; // any garbage value will be printed because we have not initialized the array.
    cout<< endl <<"value of number[14] is: "<<number[14] <<endl;

    // intilizing an array

    int s[3]={5,6,7}; // we can also initialize an array like this.
    cout<< endl <<"value of s[0] is: "<<s[0] <<endl;
    cout<< endl <<"value of s[1] is: "<<s[1] <<endl;
    cout<< endl <<"value of s[2] is: "<<s[2] <<endl;

    int a[15] = {1,2,3,4,5}; // if we initialize an array with less values than its size then the rest of the values will be initialized to 0.

    for(int  i =0 ; i < 15 ; i++){
        cout<< a[i]<<" ";
    }
    cout<< endl;
    
    // all indexes has value as 1.
    int arr[10];
    for(int i = 0; i <10 ; i++){
        arr[i] = 1;
    }
    for(int i = 0; i < 10 ; i++){
        cout<< arr[i]<<" ";
    }

    

    return 0;  
}