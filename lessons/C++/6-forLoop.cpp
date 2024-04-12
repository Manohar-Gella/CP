// for loops


// structure of the program

/*
    for(initialization; condition; updation){
        program to run in loop
    }


*/

// example program
#include <iostream>
using namespace std;
int main() {
    for(int i = 1; i<=10; i++){
        cout << i << endl;
    }
    return 0;
}



// break example

#include <iostream>
using namespace std;
int main() {
    
    for(int i = 0; i<=10; i++){
        cout << i << endl;
        if(i == 5){
            break;
        }
    }
    
    
    return 0;
}

// continue - skipps the element in the loop - example


#include <iostream>
using namespace std;
int main() {
    
    for(int i = 0; i<=10; i++){
        if(i == 5){
            continue;
        }
        cout << i << endl;
        
    }
    
    
    return 0;
}

// end