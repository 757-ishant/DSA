#include <iostream>
using namespace std;

//     Q-calculate sum of numbers from 1 to n.

int sumofNum(int n){
    int sum =0;
    for(int i=1; i<=n;i++){
        sum+=i;
    }
    return sum;
}
        // Q- Calculate factorial of n.
int nFactorial(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    return product;
}
int main(){
    cout<<"Enter value for n: \n";
    int c;
    cin>>c;
    cout<<"Sum of numbers from one to n is= "<< sumofNum(c)<<endl;
    cout<<"Factorial of n is= "<< nFactorial(c)<<endl;
    return 0;
}