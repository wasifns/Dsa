#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    // Create a min-heap (priority queue with greater<int>)
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // Process the first K elements
    for (int i = 0; i < k; ++i) {
        minHeap.push(nums[i]);
    }

    // Process the remaining elements
    for (int i = k; i < nums.size(); ++i) {
        if (nums[i] > minHeap.top()) {
            minHeap.pop();         // Remove the smallest element in the heap
            minHeap.push(nums[i]); // Add the current element to the heap
        }
    }

    // The root of the heap is the Kth largest element
    return minHeap.top();
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    int k = 2;
    cout << "The " << k << "th largest element is " << findKthLargest(arr, k) << endl;
    return 0;
}
