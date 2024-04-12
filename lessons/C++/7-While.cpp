// while loop in c++

// structire of wihile loop
// while(conditon){
//     codto execute until the condtion gets satisfies
// }


#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i<=10)
    {
        cout << i << endl;
        i++;
    }
    
    return 0;
}


// end

// multiplication table using while loop

#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int x;
    int t;
    cout << "Which table do you want: ";
    cin >> x;
    cout << "What times: ";
    cin >> t;
    while(i<=t){
        cout << x << " * " << i << " = " << x*i << endl;
        i++;
    }
    
    return 0;
}

