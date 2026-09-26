#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int> st(nums.begin(), nums.end());

    int multiple = k;

    while (st.count(multiple)) {
        multiple += k;
    }

    return multiple;
}

int main() {
    vector<int> nums = {2, 4, 6,8};
    int k = 2;

    cout << missingMultiple(nums, k) << endl;

    return 0;
}