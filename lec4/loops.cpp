#include <iostream>
using namespace std;
int main() {
            // Square pattern
    int n;
    cin>>n;
    // for(int i=0 ;i<=n-1;i++){
    //     for (int j=0;j<=n-1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    if(n>26){
        cout<<"it will not work";
    }else{
        for(int i =0; i<n ;i++){
            char ch ='A';
            for(int j =0;j<n;j++){
            cout<<ch<<" ";
            ch+=1;                      //65+1=66=>'B'
            }
            cout<<endl;
        }
    } 
    return 0;
}
