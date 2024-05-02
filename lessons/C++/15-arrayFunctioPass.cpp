/*

passing array in an function

*/

#include <iostream>


int function(int nums[10]){
    int sum = 0;
    for(int i = 0; i<10; i++){
        sum += nums[i];
    }
    return sum;
}

int traverse(int x[5], int size){
    for(int i = 0; i<size; i++){
        std::cout << x[i] << " ";
    }
    return 0;
}

int main(){
    // int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int result = function(nums); // Pass the array 'nums' itself
    
    // std::cout << "Sum: " << result << std::endl;
    
    int x[5] = {1, 2, 3, 4, 5};
    int size = sizeof(x)/sizeof(x[0]);

    int res = traverse(x, size);


    return 0;
}
