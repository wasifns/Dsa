#include <iostream>
#include <vector>
using namespace std;

//creating vector
void vectorInitialise(std::vector<int> &vec, int x){
    for (int i = 0; i < vec.size(); i++){
        std::cin >> vec[i]; 
    }
    
}

//swapping alternates
void swapAlternate(std::vector<int> &vec){
    //I used (i+2) which does not modify i, so instead use i+=2.
    for(int i = 0; i < vec.size()-1; i+=2){ 
        std::swap(vec[i], vec[i+1]);
        
    
    }
//printing swapped vector
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << " ";
        

    }
}

int main(){
    int x;
    cout << "Enter size of array\n";
    cin >> x;
    std::vector<int> vec(x);
    vectorInitialise(vec, x);
    swapAlternate(vec);
    return 0;
}

/*ISSUES I FACED

    1-vector passing
        solution:use '&' and pass by reference
    2-iteration error 
        solution: i+=2
    3-last element handling
        solution: i < vec.size() - 1; which makes pairs to swap!! 


*/