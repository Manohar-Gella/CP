#include <iostream>

/*
    intilize array with zero to make it null

        int nums[5] = {0} -> after traversing output would be
        0 0 0 0 0

    ->after declaring array gabage vlue would be stored

    -> after inserting one eliment the emty ones gets 0 value

        int arr[5] = {5} // after traverse
        5 0 0 0 0
*/


void reverse(int nums[5]){
    
    int reversed[5];
    for(int i = 0, j = 4; i < 5; i++, j--){
        reversed[j] = nums[i];
    }

    for(int i = 0; i<5; i++){
        std::cout << reversed[i] << " ";
    }
    std::cout << std::endl;


}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    reverse(nums);

    return 0;
}
