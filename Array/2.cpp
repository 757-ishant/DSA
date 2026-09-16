#include <iostream>
using namespace std;

int main(){

    char ch[5];
    cout<< endl <<"Enter 5 characters: ";
    for(int i = 0 ; i < 5 ; i++){
        cin>>ch[i];
    }
    cout<< endl <<"You entered: ";
    for(int i = 0 ; i < 5 ; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    cout<< ch[4];
}