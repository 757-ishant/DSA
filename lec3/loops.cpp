#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: \n";
    cin>>n;
                     // While loops
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;
    // }
    // cout<<"\n";

                    // For loops
    // for(int i=1; i<=n; i+=2){
    //     cout<<i<<" ";
    // }

                    // do-while loops
    // do{                                  //Condition is checked after so if condition is false the loop will run 1 time then stop.
    //     cout<<"Hello World!\n";
    // }while(3>5);
    int i=1;
    do{
        cout<<i<<" ";
        i++;   
    }while(i<=n);  
    return 0;
}