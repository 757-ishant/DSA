#include <iostream>
using namespace std;

void reverseArray (int arr[] , int n){
    int i = 0 ; int j = n-1;
    while (i<j){
        swap(arr[i],arr[j]);
        i++,j--;
    }
}

int main(){
    int arr[5];
    for(int i =0 ; i<5;i++){
        cin>>arr[i];
    }
    reverseArray(arr,5);

    for(int i = 0 ; i < 5 ; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0;
}