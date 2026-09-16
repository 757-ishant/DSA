#include<iostream>
using namespace std;
int main(){
    cout<<"hello world\n" << "My name is ishant"<<endl;
    int a=10;
    char grade='A';        //all letters have ascii values that are printed on terminal.
    float marks=99.93f;                       //We write "f" at the end because if we do not write it then it will assume our value as double value.
    bool result=true;                      //when we print bool value we get 1 or 0 not true or false bcz our computer stores binary values so 1=true and 0=false.
    double price=99.999;      // diffrence between double and float is double ha space of 8 bytes and float has space of 4 bytes.
    cout<<a<<"\n"<<grade<<"\n"<<marks<<"\n"<<result<<"\n"<<price<<"\n"; 
    cout<<sizeof (a)<<"\n"<<sizeof (grade)<<"\n"<<sizeof (marks)<<"\n"<<sizeof (result)<<"\n"<<sizeof (price)<<endl;
    // sizeof is a function we use to determine size of data types.
    
    //Type casting    //conversion of data type from one to another.
        
        //1. conversion during compilation.(implicit)           small space to big space.
     int value= grade;   
     cout<<value<<endl;

        //2. conversion during execution(explicit)   big space to small space.                       
    int newprice=(int)price;
    cout<<newprice<<endl;       //In coding when we int value from double or float the all numbers after decimal are cut off.
    return 0;              

}
