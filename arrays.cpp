arrays
Problem statement
Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

Example:

We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
based indexing so the subarray {5, 6} will be reversed and our 
output array will be {1, 2, 3, 4, 6, 5}.
  
Sample Input 1:
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
Sample Output 1:
1 2 3 4 6 5
10 9 8 6 7
Explanation 1:
For the first test case, 
Considering 0-based indexing we have M = 3 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {1, 2, 3, 4, 6, 5}.

For the second test case, 
Considering 0-based indexing we have M = 2 so the 
subarray[M+1 … N-1] has to be reversed.
Therefore the required output will be {10, 9, 8, 6, 7}.

Sample Input 2:
2
7 3
1 4 5 6 6 7 7 
9 3
10 4 5 2 3 6 1 3 6
Sample Output 2:
 1 4 5 6 7 7 6
 10 4 5 2 6 3 1 6 3 

  Problem statement
You are given an array “ARR” of size N. Your task is to find out the sum of maximum and minimum elements in the array.

Follow Up:
Can you do the above task in a minimum number of comparisons?

Sample Input 1:
2
7
1 2 4 5 6 6 6 
6
-1 -4 5 8 9 3
Sample Output 1:
7
5
Explanation For Sample Input 1:
For the first test case, the maximum element in the array is 6 and the minimum element in the array is 1.

For the second test case, the maximum element in the array is 9 and the minimum element in the array is -4.

  Sample Input 2:
2
5
3 3 3 3 3 
1
-1
Sample Output 2:
6
-2
  Find the largest three distinct elements in an array
Last Updated : 07 Mar, 2024
Given an array with all distinct elements, find the largest three elements.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1). 

Examples :

Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23


Input: arr[] = { 6, 8, 1, 9, 2, 1, 10, 10}
Output: 10, 10, 9

Approach:

  Given an array arr[] of N elements, sort the array according to the following relations:  

arr[i] >= arr[i – 1], if i is even, ∀ 1 <= i < N
arr[i] <= arr[i – 1], if i is odd, ∀ 1 <= i < N
Print the resultant array.

Examples:  

Input: N = 4, arr[] = {1, 2, 2, 1}
Output: 2 1 2 1
Explanation:


For i = 1, arr[1] <= arr[0]. So, 1 <= 2.
For i = 2, arr[2] >= arr[1]. So, 2 >= 1.
For i = 3, arr[3] <= arr[2]. So, 1 <= 2.
Input: arr[] = {1, 3, 2}
Output: 3 1 2
Explanation:

For i = 1, arr[1] <= arr[0]. So, 1 <= 3.
For i = 2, arr[2] >= arr[1]. So, 2 >= 1.

Given an integer array, print all distinct elements in an array. The given array may contain duplicates and the output should print every element only once. The given array is not sorted.

Examples: 

Input: arr[] = {12, 10, 9, 45, 2, 10, 10, 45}
Output: 12, 10, 9, 45, 2

Input: arr[] = {1, 2, 3, 4, 5}
Output: 1, 2, 3, 4, 5


Input: arr[] = {1, 1, 1, 1, 1}
Output: 1

