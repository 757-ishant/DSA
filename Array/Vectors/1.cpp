#include <iostream>
#include <vector>
using namespace std;
int main(){

    // vector<int>vec;                  //currently empty vector of size 0.
    // cout<<"size of vector: "<<vec.size()<<endl;
    // cout<<vec[0]<<endl;

    vector<int>vec={1,2,3,4,5}; //vector of size 5.
    cout<<"size of vector: "<<vec.size()<<endl;
    cout<<vec[0]<<endl;

    vector<int>vec1(5,0);   //vector of size 5 with all values initialized to 0.                                    
    for (int i = 0 ; i< 5 ; i ++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;

    return 0;
}