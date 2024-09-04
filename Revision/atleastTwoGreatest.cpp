#include <iostream>
#include <limits.h>
#include "vectorInput.h"
using namespace std;

void atleastTwoGreatest(std::vector<int> &vec){

    int max1 = INT_MIN;
    int max2 = INT_MIN;    
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] > max1 ){
    //updating max2 before max1 because, max1 will become second largest if found a bigger number,
    //so by doing this, previous value of max1 will be updated to max2 first 
            max2 = max1; 
            max1 = vec[i];
        }
    //if above condition fails, check for max2 also max2 should be equal to max1
        else if( vec[i] > max2 && vec[i] != max1){
            max2 = vec[i];
        }
    }
    
    std::cout << "The two greatest elements: " << max1 << " " << max2 << endl;    
}


/*      ISSUES           SOLUTIONS
    1-logic building: >using single for loop
                      >simulteneously assigning values to max1 and max2 as the loop iteratres
                      
*/
