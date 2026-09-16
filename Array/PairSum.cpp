#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>nums = {2,7,11,15};
    int target = 13;
                        //Brute force O(n^2);

    // for (int i = 0 ; i < nums.size() ; i++){
    //     for (int j = i + 1 ; j < nums.size() ; j ++){
    //         if (nums[i] + nums[j] == target){
    //             cout<<nums[i]<<" "<<nums[j]<<endl;
    //         }
    //     }
    // }

                    // Optimal O(n);

            int st = 0 ; int end = nums.size()-1;

            for (int i = 0 ; i < nums.size() ; i ++  ){
                if(target < nums[st] + nums[end]){
                    end--;
                }
                else if(target > nums[st] + nums[end]){
                    st++;
                }
                else{
                    cout<<nums[st]<<" "<<nums[end]<<endl;
                    break;
                }
            }

        return 0;
    }