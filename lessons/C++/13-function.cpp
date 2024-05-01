/*
    Functions in C++

    Functions are used to elimate reusage of code

    -> a function can ve voind and non void 
    -> function name should be short, accurate and understandable
    -> functions take input parameters

    -> int functions can only work with and return int data
    -> void functions can not have return statements

    -> ordering of functions is very important
    -> for excepion we can declare the function at the top and can define the function any where in traditional and raw way


    -> can use return on void but not with any value, what's the need of return then??
        the code below the return statement will not get executed


    -> types of functions
        1. char -> returns only cahr
        2. int -> returns only int
        3. float -> returns only float
        5. void -> can not return any value
*/


#include <iostream>
using namespace std;

// int calSum(int x, int y);

char capital(char n){
    char answer = toupper(n);
    // or char answer = n-'a'+'A'
    return answer;
}

int main() {
    char name = 'm';
    char res = capital(name);
    cout << res << endl;
}




// int calSum(int x, int y){
//     return x+y;
// }