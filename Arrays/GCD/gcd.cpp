#include <iostream>
#include <stdlib.h>
using namespace std;

int findGcd( int n, int m){
    int gcd = 1;
    for(int i = 2; i <= min(n,m); i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
        
    }
    return gcd;
};

int main(){
    int n,m;
    cout << "Enter two digits";
    cin >> n >> m;
    cout << "GCD of " << n << " and " << m << ": " << findGcd(n,m) << endl; 
}