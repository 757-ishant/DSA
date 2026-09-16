#include <iostream>
using namespace std;

int fun(){
    int x=25;
    cout<<"x="<<x<<endl;
    return 2;
}
int main(){
    fun();                       // when we run this we saw error because x is not defined in main function scope.
    // cout<<x<<endl;               // It is stored in stack frame of fun() not in main().
    return 0;
}

