#include <iostream>
using namespace std;

// different kinds of operators in c++
// to perform mathematical logics in the program

/*
    1. Unary OP
        1. ++
        2. --

    2. Binary OP
        1. Arithmetic OP
            1. +
            2. -
            3. *
            4. /
            5. %

        2. Relational OP
            1. >
            2. <
            3. >=
            4. <=
            5. ==
            6. != 

        3. Logiacl OP
            1. &&
            2. ||
            3. !
        
        4. Assignment OP
            1. =
            2. +=
            3. -=
            4. *=
            5. /=
            6. %=
        
        5. Bitwise OP
            1. &
            2. |
            3. ~ flops the bit vlues
            4. << shifts bits to left side
            5. >> shifts bits to right side
            6. ^ 
        
    3. Terinary OP

*/


void preIncrement() {
    int a = 10;
    // pre incrementing the value of the variable
    cout << "Pre Increment" << endl;
    cout << (++a) << endl;
    cout << a << endl;
}

void postIncrement() {
    int a = 10;
    // pre incrementing the value of the variable
        cout << "Post Increment" << endl;
    cout << (a++) << endl;
    cout << a << endl;

    // ++ pre incremnet op and 'a - variable' is the operand
}

void preDecrement() {
    int a = 10;
    // pre incrementing the value of the variable
    cout << "Pre Decrement" << endl;
    cout << (--a) << endl;
    cout << a << endl;
}

void postDecrement() {
    int a = 10;
    // pre incrementing the value of the variable
        cout << "Post Decrement" << endl;
    cout << (a--) << endl;
    cout << a << endl;

    // ++ pre incremnet op and 'a - variable' is the operand
}



int main() {
    // preIncrement();
    // cout << "____________________________" << endl;
    // postIncrement();
    // cout << "____________________________" << endl;
    // preDecrement();
    // cout << "____________________________" << endl;
    // postDecrement();

    
   cout << (5 >> 1) << endl;



}