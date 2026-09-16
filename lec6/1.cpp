#include <iostream>
using namespace std;

int dectobin(int n){
     int ans = 0;
     int power = 1;
     while(n>0){
        int rem = n%2;
        n/=2;
        ans += (rem*power);
        power*=10;
     }
     return ans;
}

int bintodec(int n){
    int ans =0 , power = 1;
    while (n>0){
        int rem = n%10;
        ans += (rem*power);
         
        n/=10;
        power*=2;
    }
    return ans;
}
int main(){
    cout<<"Enter value for conversion: \n";
    int n,c;
    cin>>n;
    cout<<"Binary equivalent: "<<dectobin(n)<<endl;
    cin>>c;
    cout<<"Decimal equivalent: "<<bintodec(c)<<endl;

    // for(int i=0; i<=10; i++){
    //     cout<<"Binary equivalent of "<<i<<" is: "<<dectobin(i)<<endl;
    // }
    return 0;
}