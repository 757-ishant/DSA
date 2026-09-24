#include <iostream>
#include<vector>
using namespace std;
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            
            int num = nums[i];
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            if (sum == i) {
                return i;
            }
        }

        return -1;
    }
int main(){
    vector<int> nums{4, 3, 2, 1};
    vector<int> nums2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << smallestIndex(nums2) << endl;
    cout << smallestIndex(nums);
}