#include <iostream>
#include <vector>
using namespace std;

//creating vector
void initialiseVector(std::vector<int> &vec){
    std::cout << "Enter " << vec.size() << " elements\n";
    for(int i = 0; i < vec.size(); i++){
        std::cin >> vec[i];
    }
    
}

//swapping alternates
void swapAlternate(std::vector<int> &vec){
    //I used (i+2) which does not modify i, so instead use i+=2.
    for(int i = 0; i + 1 < vec.size(); i+=2){ 
        std::swap(vec[i], vec[i+1]);
        
    
    }
}

//printing swapped vector
void printVector(const std::vector<int> vec){
    for(const int& element: vec){
        std::cout << element << " ";
    }
}

int main(){
    int size;

    cout << "Enter size of array\n";
    cin >> size;

    std::vector<int> vec(size);
    initialiseVector(vec);
    swapAlternate(vec);

    std::cout << "Vector after swapping alternate elements:\n";
    printVector(vec);

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