include<bits/stdc++.h>

using namespace std;
void solve(int arr[], int n) {
  int temp[n];
  for (int i = 1; i < n; i++) {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
  cout << endl;
}
int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
}


//fix this

Executing task: C/C++: gcc build active file 

Starting build...
/usr/bin/gcc -fdiagnostics-color=always -g /home/wiz/code.cpp -o /home/wiz/code
/usr/bin/ld: /tmp/ccd5LHHW.o: warning: relocation against `_ZSt4cout' in read-only section `.text'
/usr/bin/ld: /tmp/ccd5LHHW.o: in function `solve(int*, int)':
/home/wiz/code.cpp:11:(.text+0x12e): undefined reference to `std::cout'
/usr/bin/ld: /home/wiz/code.cpp:11:(.text+0x136): undefined reference to `std::ostream::operator<<(int)'
/usr/bin/ld: /home/wiz/code.cpp:11:(.text+0x14b): undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)'
/usr/bin/ld: /home/wiz/code.cpp:13:(.text+0x15e): undefined reference to `std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)'
/usr/bin/ld: /home/wiz/code.cpp:13:(.text+0x168): undefined reference to `std::cout'
/usr/bin/ld: /home/wiz/code.cpp:13:(.text+0x170): undefined reference to `std::ostream::operator<<(std::ostream& (*)(std::ostream&))'
/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status

Build finished with error(s).

 *  The terminal process terminated with exit code: -1. 
 *  Terminal will be reused by tasks, press any key to close it. 
