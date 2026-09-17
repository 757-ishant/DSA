#include <iostream>
#include <vector>
using namespace std;
// method 1.
void changeA( int* ptr){
    *ptr = 20; 
}

//method 2
void changeB(int &c){
    c=50;
}
int main(){
    int a =10;
    int b =20;

    changeA(&a);
    changeB(b);

    cout << a << endl;
    cout << b << endl;
    return 0;
}