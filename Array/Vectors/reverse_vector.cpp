#include <iostream>
#include <vector>
using namespace std;
 
int reverseVector(vector<int>& v, int n) {    // First run without appercent "&" and it will not reverse the vector because it will create a copy of the vector and reverse that copy. So, we need to use "&" to pass the vector by reference.

    int i = 0 ; int  j = n-1;
    while(i<j){
        swap(v[i],v[j]);
        i++, j--;
    }
    return 0;
}
int main(){
    int n ; 
    cin>> n ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++ ){
        cin >> v[i];
    }
    reverseVector(v,n);
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}