#include <iostream>
using namespace std;
int sum(int arr[] , int  n){
    int sum  = 0;
    for(int i = 0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int product(int arr[] , int n){
    int product = 1 ;
    for (int i = 0 ; i< n ; i++){
        product = product * arr[i];
    }
    return product;
}
int getMax(int arr[] , int n ){
    int max = INT_MIN;
    for (int i = 0 ; i< n;i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
void swapmaxmin(int arr[] , int n){
    int max = getMax(arr,n);
    int min = getMin(arr,n);
    for(int i = 0 ; i < n ; i++){
        if (arr [i] == min){
            arr[i] = max;
        }else if (arr [i] == max){
            arr[i] = min;
        }
    }
    cout<<"after swapping max and min values: \n";
    for(int i = 0 ; i< n ; i++){
        cout<< arr[i]<<" ";
    }
}
void printunique(int arr[] , int n){
    for (int i = 0 ; i < n ; i ++ ){

        int count = 0;
        for (int j = 0 ; j < n ; j ++){
            if(arr [ i]  == arr [j]){
                count++;
            }
        }
        if (count == 1){
            cout<< arr[i]<<" ";
        }
    }
}
int main(){
    int sz = 5;
    int arr[sz];
    for(int i = 0 ; i < sz ;i ++ ){
        cin>>arr[i];
    }
    cout<<sum(arr,sz)<<endl;
    cout<<product(arr,sz)<<endl;
    cout<<getMax(arr,sz)<<endl;
    cout<<getMin(arr,sz)<<endl;
    printunique(arr,sz);
    cout<<endl;
    swapmaxmin(arr, sz);
    cout<<endl;


    for (int i = 0 ; i < 5  ; i++){
        int n1[5] = {1,2,3,4,5};

        int count = 0 ;

        int n2[5] = {6,2,3,5,10};
        for (int j = 0 ; j < 5 ; j ++){
            if (n1[i] == n2[j]){
                count ++;
            }
        }
        if (count == 1){
            cout<< n1[i]<<" ";
        }
    }
}   