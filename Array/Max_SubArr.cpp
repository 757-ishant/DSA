#include <iostream>
#include <vector>
using namespace std;

                // Kadane 's Algorithm.    Time complexity=O(n).
int KadaneAlgo(vector<int> &v){
    int currSum = 0;    int maxSum = INT_MIN;

        for(int i = 0 ; i < v.size(); i++){
            currSum += v[i];
            maxSum = max(currSum , maxSum);
            if (currSum < 0 ){
                currSum = 0;
            }
        }
        return maxSum;
}
int main(){

    int n = 5;
    vector<int> v = {1,2,3,4,5};


            // all subarray from index st to end

    // for(int st = 0 ; st < n ; st++){
    //     for (int end = st ; end < n ; end ++){
    //         for(int i = st ; i  <= end ; i++){
    //             cout<<v[i]<<" ";
    //         }cout<<" ";
    //     }cout<<endl;
    // }



    //   Brute force approach to find max sum of subarray.  Time Complexity= O(n^2)
    int maxSum = INT_MIN;
    for(int st = 0 ; st < n ; st++ ){
        int currSum = 0;     // whenever new st comes currSum becomes 0.        
        for(int end = st ; end < n ; end ++){
            currSum += v[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout<<"max subarray sum = "<<maxSum<<endl;
            
    cout<<"By kadane algo sum = "<<KadaneAlgo(v);


    return 0;
}