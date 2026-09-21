// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

 

// Example 1:

// Input: arr = [0,1,0]

// Output: 1

// Example 2:

// Input: arr = [0,2,1,0]

// Output: 1

// Example 3:

// Input: arr = [0,10,5,2]

// Output: 1

 

// Constraints:

// 3 <= arr.length <= 105
// 0 <= arr[i] <= 106
// arr is guaranteed to be a mountain array.

#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1 ; int end = arr.size()-2;
        while(st <=end){
            int mid = st + (end-st)/2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }if(arr[mid - 1]<arr[mid]){    // increasing

                st = mid +1;         // search in right
            }
            else  {                     // decreasing (arr[mid+1]>arr[mid])

                end = mid -1;          // search in left
            }
        }return 0;
    }
int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    cout<<peakIndexInMountainArray(arr)<<endl;

    return 0;
}