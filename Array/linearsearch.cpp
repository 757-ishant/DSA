#include <iostream>
using namespace std;
int linearsearch(int arr[] , int n , int target){

    for (int i = 0 ; i < n ;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;

}
int main(){

    int arr[]={4,2,7,8,1,5};

    int n = 6;
    int target;
    cout<<"enter target\n";
    cin>>target;

    cout<<linearsearch(arr,n,target)<<endl;
    return 0;

}