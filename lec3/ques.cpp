#include <iostream>
using namespace std;
                    // Q-Checking char is upper case or lower case.
int main(){
    // char ch;
    // cout<<"enter the character: \n";
    // cin>>ch;
    // // if(ch>='a'&&ch<='z'){
    // //     cout<<"it is lower case\n";
    // // }else{
    // //     cout<<"it is upper case\n";
    // // }

    // if(ch>=65&&ch<=90){                     // ASCII values of alphabets.Here implicit Type conversion is used.
    //     cout<<"it is Upper case\n";
    // }else{
    //     cout<<"it is Lower case\n";
    // }

                    // Q-Sum of numbers from 1 to n.
    // int n;
    // cout<<"enter the number: \n";
    // cin>>n;

    // int sum = 0;
    // // for(int i=1;i<=n;i++){
    // //     sum+=i;
    // // }

    // int i =1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    //     if(i>5){
    //         break;
    //     }
    // } 
    // //sum = n*(n+1)/2;
    // cout<<"sum of numbers from 1 to "<<n<<" is= "<<sum<<"\n";

    //             // Q- Sum of all odd numbers from 1 to n.
    // int n;
    // cout<<"enter the number: \n";
    // cin>>n;
    // int oddSum=0;
    // for(int i = 1;i<=n;i++){
    //     if(i%2 != 0){
    //         oddSum+= i;
    //     }
    // }
    // cout<<"Sum of odd numbers = "<<oddSum<<"\n";

                        // Q- Check number is prime or not.
    int n;
    cout<<"enter the number: \n";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i*i <= n;i++){       //  i<=n-1
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Number is Prime\n";
    }else{
        cout<<"Number is not Prime\n";
    }

    return 0;
}