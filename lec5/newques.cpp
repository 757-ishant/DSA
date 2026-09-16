#include <iostream>
using namespace std;
             //  calculate sum of digits of a number.
// int sumofDigits(int num){
//     int digitSum=0;

//     while(num>0){
//         int lastDigit=num%10;
//         num /=10;
//         digitSum +=lastDigit;
//     }
//     return digitSum;
// }
// int main(){
//     cout<<sumofDigits(123);
//     return 0;
// }

                                          // Calculate nCr binomial coffecient for n and r.
int fact(int f){
    int factorial=1;
    for(int i=1;i<=f;i++){
        factorial *= i;
    }
    return factorial;
}
int nCr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_n_r=fact(n-r);
    return fact_n/(fact_r*fact_n_r);
}
int main(){
    int n,r;
    cout<<"Enter value of n: \n";
    cin>>n;
    cout<<"Enter value of r: \n";
    cin>>r;
    cout<<"The nCr is: "<<nCr(n,r)<<endl;
    return 0; 
}