#include <iostream>
#include <vector>
using namespace std;

        // Majority Element 
// Moore's Voting Algorithm.
// Time Complexity : O(n)
// Space Complexity : O(1)

    int moore_voting(vector<int>& nums , int n){
    int freq = 0 ;
    int ans = 0;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        if (freq == 0 ){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq ++;
        }
        else{
            freq --;
        }
    }return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>nums[i];
    }
    cout<<"Your given array is : ";
    for(int i : nums){
        cout<<i<<" ";
    }
    cout<<endl;

    // Majority Element 
    // Ques no. 169 on leetcode
    // Given : an array of size n, find the majority element. The majority element is the element that appears more than ⌊n/2⌋ times.

    // Brute Force                  O(n^2)

    for(int i = 0 ; i < n ; i++){
        int count = 0 ;
        for (int j = 0 ; j < n ; j++){
            if (nums[i] == nums [j]){
                count ++;
            }
        }if (count > n / 2){
            cout << "Your Majority Element is: "<<nums[i];
            break;
        }
    }
    cout<<endl;

    cout<<"By moore voting majority element is: "<<moore_voting(nums,n);


    return 0;
}