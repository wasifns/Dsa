// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

// Example 1:

// Input:
// n=5
// Output:
// 225
// Explanation:
// 13+23+33+43+53=225
class Solution {
  public:
    long long sumOfSeries(long long n) {
        
       int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i;
    }
    return sum;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}