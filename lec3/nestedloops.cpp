#include <iostream>
using namespace std;
int main(){
    // for(int i=1 ; i<=5 ; i++){
    //     cout<<"*****\n";
    // }

    int x,y;
    cout<<"Enter value of x\n";
    cin>>x;
    cout<<"Enter value of y\n";
    cin>>y;
    for(int i=1 ; i<=x ; i++){
        for(int j=1 ; j<=y ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}