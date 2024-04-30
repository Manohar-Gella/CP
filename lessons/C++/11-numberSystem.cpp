#include <iostream>
using namespace std;

/*
    HOW TO CONVERT DECIMAL NUMBER TO BINARY NUMBER?

    first take the number divide it with two and get the remnider
    do divide with quotient until the ans gets 0
    now read the remnider value from top to bottom
*/

/*
    HOW TO CONVERT BINARY NUMBER TO DECIMAL NUMBER?

    multiply each number of the binary with it's place vaue
    ex: 345, 3*10^2 + 4*10^1 + 5*10^0
*/

void decimalToBinary(int n) {
    while(n>0){
        int bit = n%2;
        cout << bit << " ";
        n/=2;
    }
}

int main() {
   while (1==1)
   {    

         int n;
        cout << "Enter any number: ";
        cin >> n;
        decimalToBinary(n);
        cout << endl;

   }
    

}