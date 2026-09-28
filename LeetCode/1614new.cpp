#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int maxDepth = 0;

    for (char ch : s) {
        if (ch == '(') {
            count++;
            maxDepth = max(maxDepth, count);
        }
        else if (ch == ')') {
            count--;
        }
    }

    cout << maxDepth;

    return 0;
}