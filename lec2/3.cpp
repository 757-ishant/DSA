#include <iostream>
using namespace std;
int main(){
    // int age;
    // cout<<"Enter the age: ";
    // cin>>age;
    // cout<<"Your are "<< age <<" years old"<<endl; 
    // int a=10,b=10;
    // cout<<"Sum = "<<a+b<<endl;      
    // cout<<"Differnce = "<<a-b<<endl;      
    // cout<<"product = "<<a*b<<endl;      
    // cout<<"division = "<<a/b<<endl;
    // cout<<"remainder = "<<a%b<<endl;   
    // cout<<(a==b)<<endl; 
    // cout<<(a!=b)<<endl;
    // cout<<5/2<<endl;                      //c++ treat as an integer division until we do not typecaste.This happens for all operators.
    // cout<<(float)5/(float)2<<endl;
    // cout<<(float)5/(int)2<<endl;
    // cout<<(double)5/(double)2<<endl;
    // cout<<(int)5/(double)2<<endl;
    // int ans =5/(double)2;                   // But this time it will store 2.5 and then typecaste into integer and store 2.
    // cout<<ans<<endl; 
    // cout<<5/2*3<<endl;               // it follows left to right associativity.Start from left then come to right.
    // cout<<(5<2)<<endl;
    // cout<<(5>2)<<endl;
    // cout<<(5==6)<<endl;  
    // cout<<(5!=5)<<endl;
    // cout<<!(3>1)<<"\n"<<(3>1)<<endl;              // NOT operator works on only one operand. 
    // cout<<((5>3)||(4>5)||(4>7))<<endl;          //If one is true then whole is true no matter how many are false.
    // cout<<((5>3)&&(7>5)&&(9>7))<<endl;          //If all are true then whole is true otherwise false.

                //Sum of two numbers
    long long a;                            //Int data  types have upto 4 bytes so for long no. we can use long long. 
    int b;
    cout<<"This program is used to calculate sum of two numbers.\n";
    cout<<"Enter no. a: ";                    
    cin>>a;
    cout<<"Enter no. b: ";
    cin>>b;
    cout<<"Sum= "<<a+b;
    return 0; 
}