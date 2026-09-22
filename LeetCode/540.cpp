// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

 

// Example 1:

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2
// Example 2:

// Input: nums = [3,3,7,7,10,11,11]
// Output: 10
 

// Constraints:

// 1 <= nums.length <= 105
// 0 <= nums[i] <= 105

#include <iostream>
#include <vector>
using namespace std;

    int singleNonDuplicate(vector<int>& nums) {
       int st = 0 ;
       int end = nums.size() - 1;

       if(nums.size()==1)return nums[0];
        while(st<=end){
            int mid = st + (end-st)/2;

            // Edge cases
            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            
            if(mid == nums.size()-1 && nums[nums.size()-1] != nums[nums.size()-2]) return nums[mid];
            

            // Checking Mid ans or not
            if(nums[mid] != nums[mid -1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            // Checking Even no. 
            if (mid%2 == 0){

                //  Ans on left
                if(nums[mid] == nums[mid-1]){
                    end = mid-1;
                }

                // Ans on right
                else{
                    st = mid + 1;
                }
            }  
            //  Checking odd no.
            else{

                // Ans on right
                if(nums[mid] == nums[mid-1]){
                    st = mid + 1;
                }

                // Ans of left
                else{
                    end = mid-1;
                }
            }   
        }
        return -1; 
    }
int main(){

    
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout<<singleNonDuplicate(nums);

}