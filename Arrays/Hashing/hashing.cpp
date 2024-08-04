#include <iostream>
using namespace std;
//hash map for integer input
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
//pre-compute
int hash[9] = {0};
for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;

}
//fetch
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num];

    }

}

//Hash map for String input
string s;
cin >> s;
int hash[26] = {0};
for(int i=0; i<s.size(); i++){
    hash[s[i] - 'a']++; //pre-compute 
}

//fetch
int q;
cin >> q;
while (q--){
    int c;
    cin >> c;
    cout << hash[c - 'a'] << endl;
}

