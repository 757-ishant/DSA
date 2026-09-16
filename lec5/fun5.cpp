#include <iostream>
using namespace std;

int sum(int a,int b){
    a+=10;
    b+=10;
    return a+b;
}
int main(){
    int a=5,b=4;
    cout<<sum(a,b)<<endl;
    cout<<a<<" "<<b<<endl;                     // there is no change in main memory.
}
