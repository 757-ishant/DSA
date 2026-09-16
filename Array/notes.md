/*
===========================================================
                    ARRAY DATA STRUCTURE
                         DSA - C++
===========================================================

1. WHAT IS AN ARRAY?
-----------------------------------------------------------
An array is a linear data structure that stores multiple
elements of the SAME data type in CONTIGUOUS memory
locations.

Example:

int arr[5] = {10, 20, 30, 40, 50};

Index:     0    1    2    3    4
           -------------------------
Array:    |10 | 20 | 30 | 40 | 50 |
           -------------------------

Important:
- Indexing starts from 0 in C++.
- Last index = size - 1.
- Array elements are stored continuously in memory.
- Array normally stores elements of the same data type.


===========================================================
2. DECLARATION OF AN ARRAY
===========================================================

Syntax:

data_type array_name[size];

Example:

int arr[5];

This creates an array that can store 5 integers.

Other examples:

float marks[5];
char letters[10];
double values[20];


===========================================================
3. INITIALIZATION OF AN ARRAY
===========================================================

Method 1:

int arr[5] = {10, 20, 30, 40, 50};


Method 2:
Size can be automatically calculated.

int arr[] = {10, 20, 30, 40, 50};


Method 3:
Partial initialization.

int arr[5] = {10, 20};

Remaining elements become 0.

arr = {10, 20, 0, 0, 0};


Method 4:

int arr[5] = {};

All elements become 0.


===========================================================
4. ACCESSING ARRAY ELEMENTS
===========================================================

We use INDEX to access elements.

int arr[5] = {10, 20, 30, 40, 50};

cout << arr[0];  // 10
cout << arr[1];  // 20
cout << arr[4];  // 50

Important:

arr[0] = first element
arr[1] = second element
arr[4] = fifth element

Array index starts from 0.


===========================================================
5. UPDATING AN ARRAY ELEMENT
===========================================================

We can change an element using its index.

int arr[5] = {10, 20, 30, 40, 50};

arr[2] = 100;

Now:

10 20 100 40 50

Updating an element takes:

Time Complexity = O(1)


===========================================================
6. TRAVERSAL OF ARRAY
===========================================================

Traversal means visiting every element of the array.

Example:

int arr[5] = {10, 20, 30, 40, 50};

for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}

Output:

10 20 30 40 50

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
7. TAKING ARRAY INPUT
===========================================================

Example:

int n;
cin >> n;

int arr[n];

for(int i = 0; i < n; i++)
{
    cin >> arr[i];
}

Note:
Variable Length Arrays are not standard C++.

Better approach:

vector<int> arr(n);

for(int i = 0; i < n; i++)
{
    cin >> arr[i];
}


===========================================================
8. PRINTING AN ARRAY
===========================================================

int arr[] = {10, 20, 30, 40, 50};

int n = sizeof(arr) / sizeof(arr[0]);

for(int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}


===========================================================
9. FIND SIZE OF ARRAY
===========================================================

For a normal array:

int arr[] = {10, 20, 30, 40, 50};

int n = sizeof(arr) / sizeof(arr[0]);

cout << n;

Output:

5

Why?

sizeof(arr)
= total memory occupied by array

sizeof(arr[0])
= memory occupied by one element

Therefore:

Number of elements =
total size / size of one element


===========================================================
10. INSERTION IN ARRAY
===========================================================

Suppose:

arr = {10, 20, 30, 40}

We want to insert 15 at index 1.

Before:

10 20 30 40

After:

10 15 20 30 40

To insert an element, elements after the insertion
position must be shifted to the RIGHT.

Example:

for(int i = n; i > index; i--)
{
    arr[i] = arr[i - 1];
}

arr[index] = value;

n++;

Time Complexity:

Beginning = O(n)
Middle    = O(n)
End       = O(1) if space is available


===========================================================
11. DELETION FROM ARRAY
===========================================================

Suppose:

arr = {10, 20, 30, 40, 50}

Delete element at index 2.

Before:

10 20 30 40 50

After:

10 20 40 50

Elements after the deleted element are shifted LEFT.

Code:

for(int i = index; i < n - 1; i++)
{
    arr[i] = arr[i + 1];
}

n--;

Time Complexity:

Beginning = O(n)
Middle    = O(n)
End       = O(1)


===========================================================
12. LINEAR SEARCH
===========================================================

Linear search checks every element one by one.

Example:

arr = {10, 20, 30, 40, 50}

Search for 30.

Code:

int target = 30;

for(int i = 0; i < n; i++)
{
    if(arr[i] == target)
    {
        cout << "Found at index " << i;
        break;
    }
}

Time Complexity:

Best Case  = O(1)
Worst Case = O(n)
Average    = O(n)

Space Complexity = O(1)


===========================================================
13. FIND MAXIMUM ELEMENT
===========================================================

Example:

arr = {10, 50, 20, 90, 30}

Maximum = 90

Code:

int maximum = arr[0];

for(int i = 1; i < n; i++)
{
    if(arr[i] > maximum)
    {
        maximum = arr[i];
    }
}

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
14. FIND MINIMUM ELEMENT
===========================================================

int minimum = arr[0];

for(int i = 1; i < n; i++)
{
    if(arr[i] < minimum)
    {
        minimum = arr[i];
    }
}

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
15. SUM OF ARRAY ELEMENTS
===========================================================

int sum = 0;

for(int i = 0; i < n; i++)
{
    sum += arr[i];
}

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
16. AVERAGE OF ARRAY ELEMENTS
===========================================================

int sum = 0;

for(int i = 0; i < n; i++)
{
    sum += arr[i];
}

double average = (double)sum / n;


===========================================================
17. REVERSE AN ARRAY
===========================================================

Example:

Before:

10 20 30 40 50

After:

50 40 30 20 10

Using two pointers:

int left = 0;
int right = n - 1;

while(left < right)
{
    swap(arr[left], arr[right]);

    left++;
    right--;
}

Time Complexity = O(n)
Space Complexity = O(1)

This is called an IN-PLACE operation because we don't
use another array.


===========================================================
18. REVERSE USING EXTRA ARRAY
===========================================================

int temp[n];

for(int i = 0; i < n; i++)
{
    temp[i] = arr[n - 1 - i];
}

Time Complexity = O(n)
Space Complexity = O(n)


===========================================================
19. CHECK IF ARRAY IS SORTED
===========================================================

Example:

10 20 30 40 50

This is sorted.

Code:

bool sorted = true;

for(int i = 1; i < n; i++)
{
    if(arr[i] < arr[i - 1])
    {
        sorted = false;
        break;
    }
}

if(sorted)
    cout << "Sorted";
else
    cout << "Not Sorted";

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
20. COUNT EVEN AND ODD ELEMENTS
===========================================================

int even = 0;
int odd = 0;

for(int i = 0; i < n; i++)
{
    if(arr[i] % 2 == 0)
        even++;
    else
        odd++;
}


===========================================================
21. COUNT POSITIVE, NEGATIVE AND ZERO
===========================================================

int positive = 0;
int negative = 0;
int zero = 0;

for(int i = 0; i < n; i++)
{
    if(arr[i] > 0)
        positive++;
    else if(arr[i] < 0)
        negative++;
    else
        zero++;
}


===========================================================
22. SECOND LARGEST ELEMENT
===========================================================

Example:

10 30 20 50 40

Largest = 50
Second Largest = 40

Basic approach:

sort(arr, arr + n);

Then:

arr[n - 2]

But this changes the array and duplicates can cause
problems.

Better approach:

int largest = INT_MIN;
int secondLargest = INT_MIN;

for(int i = 0; i < n; i++)
{
    if(arr[i] > largest)
    {
        secondLargest = largest;
        largest = arr[i];
    }
    else if(arr[i] > secondLargest && arr[i] != largest)
    {
        secondLargest = arr[i];
    }
}

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
23. REMOVE DUPLICATES FROM SORTED ARRAY
===========================================================

Example:

1 1 2 2 3 3 4

After:

1 2 3 4

Two pointer approach:

int j = 0;

for(int i = 1; i < n; i++)
{
    if(arr[i] != arr[j])
    {
        j++;
        arr[j] = arr[i];
    }
}

New size:

j + 1

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
24. LEFT ROTATION BY ONE
===========================================================

Example:

Before:

1 2 3 4 5

After:

2 3 4 5 1

Code:

int first = arr[0];

for(int i = 0; i < n - 1; i++)
{
    arr[i] = arr[i + 1];
}

arr[n - 1] = first;


===========================================================
25. RIGHT ROTATION BY ONE
===========================================================

Before:

1 2 3 4 5

After:

5 1 2 3 4

Code:

int last = arr[n - 1];

for(int i = n - 1; i > 0; i--)
{
    arr[i] = arr[i - 1];
}

arr[0] = last;


===========================================================
26. LEFT ROTATION BY K
===========================================================

Example:

Array:

1 2 3 4 5

K = 2

Result:

3 4 5 1 2

Important:

k = k % n;

A common optimal approach is the REVERSAL ALGORITHM.

Step 1:
Reverse first k elements.

Step 2:
Reverse remaining elements.

Step 3:
Reverse the complete array.

Example:

1 2 | 3 4 5

Reverse first part:

2 1 | 3 4 5

Reverse second part:

2 1 | 5 4 3

Reverse complete:

3 4 5 1 2

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
27. TWO POINTER TECHNIQUE
===========================================================

Two pointers means using two indexes to solve a problem
efficiently.

Example:

int left = 0;
int right = n - 1;

while(left < right)
{
    // logic

    left++;
    right--;
}

Commonly used for:

- Reversing an array
- Pair sum
- Palindrome
- Sorted array problems
- Removing duplicates
- Partitioning


===========================================================
28. PREFIX SUM
===========================================================

Prefix sum stores the cumulative sum.

Array:

1 2 3 4 5

Prefix:

1 3 6 10 15

Code:

vector<int> prefix(n);

prefix[0] = arr[0];

for(int i = 1; i < n; i++)
{
    prefix[i] = prefix[i - 1] + arr[i];
}

Now sum from index l to r:

if(l == 0)
    sum = prefix[r];
else
    sum = prefix[r] - prefix[l - 1];

Prefix sum is useful when we need to answer many
range-sum queries.

Building prefix array = O(n)

Each range query = O(1)


===========================================================
29. SUBARRAY
===========================================================

A subarray is a CONTIGUOUS part of an array.

Array:

1 2 3

Subarrays:

1
2
3
1 2
2 3
1 2 3

Important:

CONTIGUOUS is the key word.

Number of subarrays of an array of size n:

n * (n + 1) / 2


===========================================================
30. SUBSEQUENCE
===========================================================

A subsequence does NOT have to be contiguous.

Example:

Array:

1 2 3 4

Possible subsequences:

1 3
2 4
1 2 4
1 3 4

The order must remain the same.

Difference:

SUBARRAY = contiguous

SUBSEQUENCE = not necessarily contiguous


===========================================================
31. PAIR SUM / TWO SUM
===========================================================

Problem:

Find two elements whose sum equals target.

Example:

arr = {2, 7, 11, 15}

target = 9

Answer:

2 + 7 = 9

For a sorted array, two pointers can be used:

int left = 0;
int right = n - 1;

while(left < right)
{
    int sum = arr[left] + arr[right];

    if(sum == target)
    {
        cout << "Found";
        break;
    }
    else if(sum < target)
    {
        left++;
    }
    else
    {
        right--;
    }
}

Time Complexity = O(n)

IMPORTANT:
This two-pointer approach requires the array to be
SORTED.


===========================================================
32. KADANE'S ALGORITHM
===========================================================

Used to find the maximum sum subarray.

Example:

arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}

Maximum sum:

6

Subarray:

4 -1 2 1

Code:

int currentSum = arr[0];
int maxSum = arr[0];

for(int i = 1; i < n; i++)
{
    currentSum = max(arr[i], currentSum + arr[i]);

    maxSum = max(maxSum, currentSum);
}

Time Complexity = O(n)
Space Complexity = O(1)


===========================================================
33. SORTING AN ARRAY
===========================================================

Using sort():

sort(arr, arr + n);

Example:

5 2 4 1 3

After sorting:

1 2 3 4 5

For vector:

sort(v.begin(), v.end());

Descending order:

sort(arr, arr + n, greater<int>());

Time Complexity:

O(n log n)


===========================================================
34. BINARY SEARCH
===========================================================

Binary search is used on a SORTED array.

Example:

1 3 5 7 9 11 13

Search = 9

Instead of checking every element, binary search repeatedly
divides the search space into half.

Time Complexity:

O(log n)

Basic code:

int left = 0;
int right = n - 1;

while(left <= right)
{
    int mid = left + (right - left) / 2;

    if(arr[mid] == target)
    {
        cout << "Found";
        break;
    }
    else if(arr[mid] < target)
    {
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}

IMPORTANT:

Binary Search requires a SORTED array.


===========================================================
35. STATIC ARRAY VS DYNAMIC ARRAY
===========================================================

STATIC ARRAY:

int arr[5];

Size is fixed.

DYNAMIC ARRAY:

vector<int> arr;

Size can grow or shrink dynamically.


===========================================================
36. C++ VECTOR
===========================================================

vector is the most commonly used dynamic array in C++.

Include:

#include <vector>

Example:

vector<int> arr = {10, 20, 30};

Add element:

arr.push_back(40);

Remove last element:

arr.pop_back();

Size:

arr.size();

Access:

arr[0];

First element:

arr.front();

Last element:

arr.back();


===========================================================
37. VECTOR EXAMPLE
===========================================================

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


===========================================================
38. VECTOR IMPORTANT FUNCTIONS
===========================================================

vector<int> v;

v.push_back(10);
    Adds element at end.

v.pop_back();
    Removes last element.

v.size();
    Returns number of elements.

v.empty();
    Returns true if vector is empty.

v.front();
    Returns first element.

v.back();
    Returns last element.

v.clear();
    Removes all elements.

v.begin();
    Iterator pointing to first element.

v.end();
    Iterator pointing after last element.


===========================================================
39. ARRAY TIME COMPLEXITIES
===========================================================

Operation              Time Complexity
------------------------------------------------
Access                  O(1)
Update                  O(1)
Search                  O(n)
Insert at beginning     O(n)
Insert in middle        O(n)
Insert at end           O(1)*
Delete beginning        O(n)
Delete middle           O(n)
Delete end              O(1)

*Assuming there is available space.


===========================================================
40. ARRAY SPACE COMPLEXITY
===========================================================

If an array contains n elements:

Space Complexity = O(n)

Example:

int arr[n];

requires memory proportional to n.


===========================================================
41. ADVANTAGES OF ARRAYS
===========================================================

1. Fast random access.
   Access element using index in O(1).

2. Simple data structure.

3. Contiguous memory improves cache performance.

4. Easy to traverse.

5. Useful for implementing other data structures.

6. Low memory overhead compared to linked lists.


===========================================================
42. DISADVANTAGES OF ARRAYS
===========================================================

1. Fixed size for normal arrays.

2. Insertion can be expensive.

3. Deletion can be expensive.

4. Requires contiguous memory.

5. Can waste memory if allocated size is larger
   than required.


===========================================================
43. ARRAY VS LINKED LIST
===========================================================

ARRAY:

- Contiguous memory
- Random access: O(1)
- Search: O(n)
- Insertion: O(n)
- Deletion: O(n)
- Better cache performance
- Fixed size for normal arrays


LINKED LIST:

- Non-contiguous memory
- Random access: O(n)
- Search: O(n)
- Insertion can be O(1) if position/node is known
- Deletion can be O(1) if node/position is known
- Extra memory required for pointers
- Dynamic size


===========================================================
44. IMPORTANT ARRAY PATTERNS FOR DSA
===========================================================

You should learn these patterns:

1. Traversal
2. Linear Search
3. Two Pointers
4. Sliding Window
5. Prefix Sum
6. Binary Search
7. Sorting
8. Kadane's Algorithm
9. Hashing / Frequency Counting
10. Difference Array
11. Subarrays
12. Subsequence
13. Matrix / 2D Arrays
14. Merge Intervals
15. In-place manipulation


===========================================================
45. COMMON ARRAY QUESTIONS
===========================================================

BEGINNER:

1. Find maximum element.
2. Find minimum element.
3. Find sum.
4. Find average.
5. Reverse an array.
6. Search an element.
7. Count even and odd numbers.
8. Count positive and negative numbers.
9. Check if array is sorted.
10. Find second largest element.


INTERMEDIATE:

11. Remove duplicates.
12. Rotate array.
13. Move zeros to end.
14. Find missing number.
15. Find duplicate number.
16. Two Sum.
17. Majority Element.
18. Maximum subarray sum.
19. Stock Buy and Sell.
20. Intersection of two arrays.


ADVANCED:

21. Trapping Rain Water.
22. Product of Array Except Self.
23. Maximum Product Subarray.
24. Longest Consecutive Sequence.
25. 3Sum.
26. 4Sum.
27. Merge Intervals.
28. Next Permutation.
29. Count Inversions.
30. Median of Two Sorted Arrays.


===========================================================
46. MOST IMPORTANT INTERVIEW CONCEPTS
===========================================================

Remember these:

1. Array indexing starts at 0.

2. Last index = n - 1.

3. Random access = O(1).

4. Searching an unsorted array = O(n).

5. Binary search = O(log n), but array must be sorted.

6. Insertion/deletion in the middle = O(n).

7. Array elements are stored in contiguous memory.

8. Normal arrays have fixed size.

9. vector is a dynamic array in C++.

10. Subarray must be contiguous.

11. Subsequence does not have to be contiguous.

12. Two-pointer technique often gives O(n) solutions.

13. Prefix sum can reduce repeated range-sum queries
    from O(n) to O(1) after O(n) preprocessing.

14. Kadane's algorithm finds maximum subarray sum in O(n).


===========================================================
47. QUICK REVISION
===========================================================

ARRAY:

Linear data structure
        ↓
Same data type
        ↓
Contiguous memory
        ↓
Index starts at 0
        ↓
Access = O(1)
        ↓
Search = O(n)
        ↓
Insertion/Deletion = O(n)
        ↓
Fixed size in normal arrays
        ↓
vector = dynamic array


===========================================================
48. BASIC ARRAY PROGRAM
===========================================================

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


===========================================================
49. INTERVIEW FORMULA SHEET
===========================================================

Array size:

n

Last index:

n - 1

Number of subarrays:

n(n + 1) / 2

Access:

O(1)

Linear Search:

O(n)

Binary Search:

O(log n)

Sorting:

O(n log n)

Reverse using two pointers:

O(n)

Prefix Sum:

Build = O(n)
Query = O(1)

Kadane's Algorithm:

O(n)


===========================================================
50. FINAL THING TO REMEMBER
===========================================================

ARRAY =

"CONTIGUOUS MEMORY + INDEX BASED ACCESS"

If you remember only one thing:

Accessing arr[i] is O(1) because the computer can calculate
the memory address directly using the base address and index.

===========================================================
                    END OF ARRAY NOTES
===========================================================
*/