#include <iostream>
using namespace std;
                    // Sum function
double sum(double a,double b){          // Parameters
    double s= a+b;
    return s;
}

int minofTwo(int a, int b){           // Parameters
    return (a<b) ?a : b;
}
int main(){                       // here we have use parameters passed in sum function.
    cout<<sum(5.1,6.2)<<endl;           // Arguments ->(5.1,6.2)

    cout<<sum(4, 7)<<endl;          // Arguments

    cout<<(10+2)<<endl;   

    cout<<"min = "<<minofTwo(10,3)<<endl;      // Arguments
    return 0;
}