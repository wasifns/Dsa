//BRUTEFORCE
#include <iostream>
using namespace std;
//Function to print array
void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}
//Function to reverse array using an auxiliary array
void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}




//RECURSIVE APPROACH
#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &arr, int &n){  
    cout << "Enter the number of elements in an array:\n";
    cin >> n;
    arr.resize(n);
    cout << "Enter the elements of the array:\n ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void printArray(const vector<int> &arr){
    for(const int &elem : arr){
        cout << elem << " ";
    }
    cout << endl;
    
}

void reverse(vector<int> &arr, int start, int end){
    if(start >= end){
        return;  
    }
        
    swap(arr[start] , arr[end]);
    reverse(arr, start+1, end-1);     
}

int main(){
    int n;
    vector<int> arr;
    input(arr , n);
    cout << "Input array: ";
    printArray(arr);
    reverse(arr, 0, arr.size()-1);
    cout << "Reversed array: ";
    printArray(arr);
     
    return 0;
    

}
