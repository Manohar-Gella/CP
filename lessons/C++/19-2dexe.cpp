#include <iostream>
using namespace std;

void display(int array[3][3], int row, int col) {
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << array[i][j];
        }
        cout << endl;
    }
}



void intake(int array[3][3], int row, int col){
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout << "Enter value of ["<<i+1<<"]"<<"["<<j+1<<"] :";
            cin >> array[i][j];
        }
        cout << endl;
    }
    display(array, row, col);
}



int main() {
    // intialzing an 2d array and taking inputs and display

    int array[3][3];
    int row = 3, col = 3;
    intake(array, row, col);


}