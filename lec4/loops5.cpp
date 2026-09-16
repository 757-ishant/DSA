#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for (int j=0;j<i;j++){   //Printing spaces
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n-i;k++){                 //printing numbers
    //         cout<<i+1;             //If i add spaces here it will look like a inverted pyramid.
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int k=0;k<n-i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    char ch='A';
    for(int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<n-i;k++){
            cout<<ch;
            // ch++;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}