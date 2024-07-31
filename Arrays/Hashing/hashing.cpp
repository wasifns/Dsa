#include <iostream>
using namespace std;
//interget input
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

int hash[9] = {0};
for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;

}

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num];

    }

}

//String input
string s;
cin >> s;
int hash[26] = {0};
for(int i=0; i<s.size(); i++){
    hash[s[i] - 'a']++; 
}

int q;
cin >> q;
while (q--){
    int c;
    cin >> c;
    cout << hash[c - 'a'] << endl;
}

