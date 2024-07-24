#include <iostream>
#include <stdlib.h>
using namespace std;

//BRUTE FORCE APPROACH
int findGcd( int n, int m){
    int gcd = 1;
    for(int i = 2; i <= min(n,m); i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
        
    }
    return gcd;
};

//BETTER APPROACH
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int findGcd(int n, int m){
    int small, large;
    int gcd = 0;
    while (n != 0 && m !=0){
        small = min(n,m);
        large = max(n,m);
        n = large - small;
        m = small;
        if( n == 0) gcd = m;
        else gcd = n;
    }
    return gcd;
}




int main(){
    int n,m;
    cout << "Enter two digits";
    cin >> n >> m;
    cout << "GCD of " << n << " and " << m << ": " << findGcd(n,m) << endl; 
}
