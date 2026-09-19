#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int>& nums , int target){
    int st = 0 ; 
    int end = nums.size()-1;

    while(st<=end){
        int mid = st + (end - st)/2;
        
        if(target > nums[mid]){
            st = mid+1;
        }else if( target < nums[mid]){
            end = mid - 1;
        }else{
            return mid;
        }
    }return -1;
}
int main(){
    vector<int> v1{-1,0,3,4,5,9,12};// odd
    int target =12;

    vector<int> v2{-1 , 0 , 3 , 5, 9 ,12};// Even

    cout<<"your target index is: "<<binarysearch(v1,12)<<endl;
    cout<<"your target index is: "<<binarysearch(v2,0)<<endl;
    return 0;
}