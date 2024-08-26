#include <iostream>
#include <vector>
#include "vectorInput.h"
using namespace std;

void arrayIntersection(vector<int> &vec, int size){
    for (int i = 0 ; i < vec.size(); i++){
        int element == vec[i];
            for ( int j = 0; j < size; j++){
                
            }

    }
}#include <iostream>
#include <vector>
#include <limits.h>
#include "vectorInput.h"
using namespace std;

int arrayIntersection(vector<int> &vec1, vector<int> &vec2){
    std::vector<int> ans;
    for (int i = 0 ; i < vec1.size(); i++){
        int element = vec1[i]; //element selected from array1 selected for equality check
            for(int j = 0; j < vec2.size(); j++){
                if(element == vec2[j]){ //consecutive equality checks
                    ans.push_back(element); 
                    vec2[j] == INT_MIN; //updating the already mapped elements to prevent remapping
                    break;
                }
            }

    }
    
}


int main(){ 
    std::cout << "Enter size of array 1 and array 2: \n" ;
    int size1 , size2;
    cin >> size1 >> size2;
    vector<int> vec1(size1);
    vector<int> vec2(size2);
    initialiseVector(vec1 , vec2);
    arrayIntersection(vec1,vec2);

}

int main(){
    std::cout << "size?" ;
    int size;
    cin >> size;
    vector<int> vec(size);
    initialiseVector(vec);

}
