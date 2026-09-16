#include <iostream>
using namespace std;

int printHello(){
    cout<<"Hello\n";
    return 3;
}
int main(){              
    //  First method to call function
                //  Here when we call this function 1. Hello prints
    int val =printHello();                                              //  2. Then val returns its value as 3.
    cout<<"value= "<<val<<endl;

    //  Second method to call function
    cout<<printHello()<<endl;                 //  Here when we call this function 1. Hello prints
    return 0; 
}
