#include <iostream>

int main() {
    int arr[2][2]; // first 2 -> no of rows, second 2 -> no of coloumns
    int arr2[2][2] = {
            {0, 1},
            {2, 3},
    };
    std::cout << arr2[1][0] << std::endl;

    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 3, col = 3;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }



} 