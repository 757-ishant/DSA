#include <iostream>
using namespace std;

             // Check if a no. is prime or not. and print prime numbers from 1 to n.
bool primeNo(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
        return false;
    }
        return true;
}
void primePrint(int n){
    for(int i=2;i<=n;i++){
        if(primeNo(i)){
            cout<<i<<" ";
        } 
    }
}

             //  to print n th fibonacci.
int printfibo(int n){
    if(n<=1) return n;
    int a=0,b=1,c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<" ";
    return c;
}

int main(){
    int n;
    cin>>n;
    // int x;
    // cin>>x;
    // if(primeNo(x)){
    //     cout<<"Prime No."<<endl;
    // }else{
    //     cout<<"Not a Prime No."<<endl;
    // }
    // primePrint(n);             // print prime no. from 2 to n.
    printfibo(n);
    return 0;
}

        