#include <iostream>
using namespace std;

void changeArray (int arr[], int n){
    for(int i = 0; i < n ; i ++ ){
        arr[i] = 2*arr[i];
    }
}


int main(){

    int arr[]= {1,2,3};
    

    changeArray(arr,3);
    cout<<"in main\n";

    for(int i = 0 ; i < 3; i ++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}