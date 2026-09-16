#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     for(int k=1;k<=i+1;k++){
    //         cout<<k;
    //     }
    //     for(int l=i;l>=1;l--){
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }
  
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        for(int k=1;k<=i+1;k++){
            cout<<ch;
            ch++;
        }
        ch -= 2;                        // most imp line here Think for this line
        for(int l=i;l>=1;l--){
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }
}