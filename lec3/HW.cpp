#include <iostream>
using namespace std;
int main(){
                    // Sum of odd numbers 1 to n.
    // int n,oddSum=0;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     if(i%2 !=0){
    //         oddSum+=i;
    //     }
    //     i++;
    // }
    // cout<<"Sum of odd numbers 1 to "<<n<<" is: "<<oddSum<<endl;

                // Sum of even numbers 1 to n.
//     int n,evenSum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     // int i =1;
//     // while(i<=n){
//     //     if(i%2==0){
//     //         evenSum+=i;
//     //     }
//     //     i++;
//     // }
//     for(int i =1;i<=n;i++){
//         if(i%2==0) {
//             evenSum+=i;
//         }
//     }
//     cout<<"Sum of even numbers 1 to "<<n<<" is: "<<evenSum<<endl; 


        //Sum of all numbers from 1 to N which are divisible by 3.
        // int n,sum=0;
        // cout<<"Enter the value of n: ";
        // cin>>n;
        // for(int i=1;i<=n;i++){
        //     if(i%3==0){
        //         sum+=i;
        //     }
        // }
        // cout<<sum<<endl;

                // Print factorial of a number n.
        long long int n,fact=1;
        cout<<"Enter value of n: \n";
        cin>>n;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}    
              