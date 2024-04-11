#include <iostream>
using namespace std;
int main() {
    int x = 2;
    int y = 3;
    char op = '-';
    switch(op){
        case '+':
            cout << x+y;
            break;
        case '-':
            cout << x-y;
            break;
        case '*':
            cout << x*y;
            break;
        case '/':
            cout << x/y;
            break;
        default:
            cout<< "Something is wrong";
            break;
    }
    return 0;
}