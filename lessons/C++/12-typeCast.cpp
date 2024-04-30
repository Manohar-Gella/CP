#include <iostream>
using namespace std;
// conver one daya type to other desired data type
// when we deal with diffrent data's we essentially need typecasting

/*
    1. Implicit type cast(automatic type casting)
        -> done by c++ compiler it self

    2. Explicit type cast(custom type casting)
        -> where admin specifies to type cast
*/
int main() {
    // int x = 20;
    // float y = 30.5;
    // cout << x+y << endl;
    // return 0;

    // char a = 'a'; // character ascii value get added with +1
    // int x = a+1;
    // cout << x << endl;


    // char a = 'a'; // character ascii value get added with +1
    // char x = a+1; // asci value of a+1 = asci value of another alphabet, at last other alphabet gets print
    // cout << x << endl;


    char name = 'm';
    char intial = 'g';
    cout << int(name)+int(intial) << endl;

    /*
        int/int = int
        int/float = float
        float/int = float
    */
}