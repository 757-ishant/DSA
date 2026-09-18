Binary Search --- DSA Notes

1. What is Binary Search?

Binary Search is a searching algorithm used to find an element in a
sorted search space.

Instead of checking every element one by one, Binary Search checks the
middle element and eliminates half of the search space after every
comparison.

Example

Array:  [2, 4, 6, 8, 10, 12, 14]
Target: 10

We check the middle:

[2, 4, 6, 8, 10, 12, 14]
          ↑
          8

Since 10 > 8, the left half can be ignored.

Search only:

[10, 12, 14]

2. Main Requirement

For normal Binary Search, the array must be sorted.

Example:

[1, 3, 5, 7, 9, 11]

Binary Search can determine which half may contain the target because
the elements are ordered.

Important

Do not use normal Binary Search on an arbitrary unsorted array.

3. Time and Space Complexity

Operation               Complexity

Best Case                   O(1)
Average Case            O(log n)
Worst Case              O(log n)
Space --- Iterative         O(1)
Space --- Recursive     O(log n)

Why O(log n)?

The search space is approximately divided by 2 each time:

n
n/2
n/4
n/8
n/16
...

So the number of iterations grows logarithmically.

4. Important Variables

The standard implementation uses two pointers:

int left = 0;
int right = nums.size() - 1;

They define the current search range:

left                       right
 ↓                           ↓
[  .  .  .  .  .  .  .  .  ]

The middle is calculated using:

int mid = left + (right - left) / 2;

Why this formula?

You may also see:

int mid = (left + right) / 2;

But:

left + (right - left) / 2

is preferred because it avoids possible integer overflow when
left + right becomes too large.

5. Basic Binary Search Logic

There are three possibilities.

Case 1: Target is found

if (nums[mid] == target)

Return the index:

return mid;

Case 2: Target is greater than the middle element

if (nums[mid] < target)

Because the array is sorted, the target can only be on the right side.

Move:

left = mid + 1;

Case 3: Target is smaller than the middle element

if (nums[mid] > target)

The target can only be on the left side.

Move:

right = mid - 1;

6. Basic Template

int left = 0;
int right = nums.size() - 1;

while (left <= right) {

    int mid = left + (right - left) / 2;

    if (nums[mid] == target) {
        return mid;
    }
    else if (nums[mid] < target) {
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
}

return -1;

7. Why while (left <= right)?

Suppose:

left = 4
right = 4

There is still one element left to check.

Therefore:

while (left <= right)

allows that element to be checked.

If we used:

while (left < right)

the loop would stop when left == right.

For the standard exact-search template, use:

while (left <= right)

8. Why mid + 1 and mid - 1?

Suppose:

left = 0
mid = 3
right = 6

If:

nums[mid] < target

we already checked mid, and it is not the answer.

So we start from:

left = mid + 1;

Similarly, if:

nums[mid] > target

we move to:

right = mid - 1;

This removes the middle element from the next search.

9. Dry Run

Consider:

nums = [2, 4, 6, 8, 10, 12, 14]
target = 10

Step 1

left = 0
right = 6

mid = 3
nums[mid] = 8

Since:

8 < 10

move right:

left = mid + 1
left = 4

Step 2

left = 4
right = 6

mid = 5
nums[mid] = 12

Since:

12 > 10

move left:

right = mid - 1
right = 4

Step 3

left = 4
right = 4

mid = 4
nums[mid] = 10

Target found.

Answer:

index = 4

10. Complete C++ Example

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {

    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

    vector<int> nums = {2, 4, 6, 8, 10, 12, 14};

    int target = 10;

    int result = binarySearch(nums, target);

    cout << result << endl;

    return 0;
}

Output:

4

11. Binary Search Using for Loop

Binary Search can also be written using a for loop:

int left = 0;
int right = nums.size() - 1;

while (left <= right) {

    int mid = left + (right - left) / 2;

    if (nums[mid] == target)
        return mid;

    if (nums[mid] < target)
        left = mid + 1;
    else
        right = mid - 1;
}

The while version is generally easier to understand and remember.

12. What if the Target Does Not Exist?

Example:

nums = [2, 4, 6, 8, 10]
target = 7

Eventually:

left > right

The search space has become empty.

Therefore:

return -1;

means the target was not found.

13. First Occurrence

Sometimes duplicates exist:

[1, 2, 2, 2, 3]

If we search for 2, normal Binary Search might return any occurrence.

If the question asks for the first occurrence, continue searching on
the left after finding 2.

Basic idea:

if (nums[mid] == target) {
    answer = mid;
    right = mid - 1;
}

We store the current answer and keep looking for an earlier occurrence.

14. Last Occurrence

For the last occurrence:

if (nums[mid] == target) {
    answer = mid;
    left = mid + 1;
}

After finding the target, continue searching toward the right.

15. Lower Bound

Definition

Lower Bound is the first position where:

nums[i] >= target

Example:

nums = [1, 2, 4, 4, 4, 7]
target = 4

Lower Bound:

index = 2

Because index 2 is the first position containing a value >= 4.

16. Upper Bound

Definition

Upper Bound is the first position where:

nums[i] > target

Example:

nums = [1, 2, 4, 4, 4, 7]
target = 4

Upper Bound:

index = 5

because 7 is the first value greater than 4.

17. C++ STL Functions

C++ provides built-in Binary Search functions.

binary_search()

Returns whether an element exists.

bool found = binary_search(nums.begin(), nums.end(), target);

Result:

true
false

lower_bound()

auto it = lower_bound(nums.begin(), nums.end(), target);

To get the index:

int index = it - nums.begin();

upper_bound()

auto it = upper_bound(nums.begin(), nums.end(), target);

To get the index:

int index = it - nums.begin();

These functions require the range to be sorted for their normal use.

18. Binary Search on Answer

This is an important advanced concept.

Sometimes the array itself is not sorted, but the possible answers
form a monotonic pattern.

Example:

Answer:
1  2  3  4  5  6  7  8

Works?
N  N  N  N  Y  Y  Y  Y

Once a value works, all larger values also work.

This allows Binary Search on the answer.

Common problems

Koko Eating Bananas

Capacity To Ship Packages Within D Days

Minimum Speed to Arrive on Time

Split Array Largest Sum

Aggressive Cows

Allocate Minimum Number of Pages

The important question is:

Can I divide the possible answers into a false part and a true
part?

If yes, Binary Search may be possible.

19. Rotated Sorted Array

Example:

[4, 5, 6, 7, 0, 1, 2]

This was originally sorted:

[0, 1, 2, 4, 5, 6, 7]

but it has been rotated.

Binary Search can still be used by determining which half is sorted.

Important LeetCode problem:

Search in Rotated Sorted Array --- LeetCode 33

20. Common Mistakes

Mistake 1

while (left < right)

For the standard exact-search template, use:

while (left <= right)

Mistake 2

left = mid;

This can cause the same mid to be selected repeatedly.

Use:

left = mid + 1;

Mistake 3

right = mid;

For the standard closed-interval template, use:

right = mid - 1;

Mistake 4

Forgetting to move the pointer.

Wrong:

if (nums[mid] < target)
    left = mid;

Correct:

if (nums[mid] < target)
    left = mid + 1;

Mistake 5

Using Binary Search on an unsorted array without a valid monotonic
property.

21. How to Think During a Problem

When you see a problem, ask:

Question 1

Is the search space sorted?

YES → Binary Search may work

Question 2

If it is not sorted, is there a monotonic property?

FALSE FALSE FALSE TRUE TRUE TRUE

YES → Binary Search on Answer may work

Question 3

What exactly am I searching for?

It could be:

Exact element

First occurrence

Last occurrence

First >= target

First > target

Minimum valid answer

Maximum valid answer

22. Important Binary Search Problems

Beginner

LeetCode 704 --- Binary Search

LeetCode 35 --- Search Insert Position

LeetCode 278 --- First Bad Version

Intermediate

LeetCode 34 --- Find First and Last Position

LeetCode 69 --- Sqrt(x)

LeetCode 153 --- Find Minimum in Rotated Sorted Array

LeetCode 33 --- Search in Rotated Sorted Array

LeetCode 162 --- Find Peak Element

Binary Search on Answer

LeetCode 875 --- Koko Eating Bananas

LeetCode 1011 --- Capacity To Ship Packages Within D Days

LeetCode 1482 --- Minimum Number of Days to Make m Bouquets

23. Quick Revision

Binary Search
      ↓
Sorted / Monotonic Search Space
      ↓
left = 0
right = n - 1
      ↓
mid = left + (right-left)/2
      ↓
 ┌──────────────┬──────────────┐
 ↓              ↓              ↓
equal          smaller        greater
 ↓              ↓              ↓
found       go right        go left
             left=mid+1    right=mid-1

Core template

int left = 0;
int right = nums.size() - 1;

while (left <= right) {

    int mid = left + (right - left) / 2;

    if (nums[mid] == target)
        return mid;

    else if (nums[mid] < target)
        left = mid + 1;

    else
        right = mid - 1;
}

return -1;

Key points to remember

Binary Search reduces the search space by half.

Normal Binary Search needs a sorted search space.

Time complexity is O(log n).

Iterative space complexity is O(1).

Use mid = left + (right-left)/2.

nums[mid] < target → move left.

nums[mid] > target → move right.

Use mid + 1 and mid - 1 to remove the checked middle.

First/last occurrence requires modifying what happens after finding
the target.

Binary Search can also be applied to a monotonic answer space.