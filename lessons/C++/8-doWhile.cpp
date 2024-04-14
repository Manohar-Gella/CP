// structure of do while in C++
//  do {
//         code to execute until
//         runs code one despite of the condition
//  }while(condition);

#include <iostream>
using namespace std;
int main() {
   int i = 1;
   char name[50];
   do{
       cout << "Enter your name: ";
       cin.getline(name, 50);
       cout << "Hello " << name << endl;
       cout << i << endl;
       i++;
   }while(i<=5);
    return 0;
}
// end