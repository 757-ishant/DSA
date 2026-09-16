#include<iostream>
#include<vector>
using namespace std;
int main(){

    //size:
    vector<int>v1 = {1,2,3,4};
    cout<<"Size = "<<v1.size()<<endl;

    //push_back:
    v1.push_back(25);
    v1.push_back(35);
    v1.push_back(45);
    cout<<"Size = "<<v1.size()<<endl;
    for(int i : v1){
        cout<<i<<endl;
    }
    

    //pop_back:
    v1.pop_back();  // always last value pops out(45).
    cout<<"Size = "<<v1.size()<<endl;
    for(int i : v1){
        cout<<i<<endl;
    }

    //front:
    cout<<v1.front()<<endl;

    //back:
    cout<<v1.back()<<endl;

    //at:
    cout<<v1.at(4)<<endl;
    return 0;     
}