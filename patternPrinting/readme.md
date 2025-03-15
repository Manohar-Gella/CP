**Pattern Printing in C++**

1.  Square
    

Output: 

 \*  \*  \*  \*  \* 

 \*  \*  \*  \*  \* 

 \*  \*  \*  \*  \* 

 \*  \*  \*  \*  \* 

 \*  \*  \*  \*  \* 

Code:

#include

using namespace std;

int main(){

for(int i = 0; i<5; i++){

for(int j = 0; j<5; j++){

cout << " \* ";

}

cout << endl;

}

return 0;

}

2.  Right triangle
    

Output:

 \* 

 \*  \* 

 \*  \*  \* 

 \*  \*  \*  \* 

 \*  \*  \*  \*  \* 

Code:

#include

using namespace std;

int main(){

for(int i = 0; i<5; i++){

for(int j = 0; j<(i+1); j++){

cout << " \* ";

}

cout << endl;

}

return 0;

}

3.  Numbered right angle triangle
    

output:

 1 

 1  2 

 1  2  3 

 1  2  3  4 

 1  2  3  4  5 

Code:

#include

using namespace std;

int main(){

for(int i = 0; i<5; i++){

for(int j = 0; j<(i+1);j++){

cout << " " << (j+1) << " ";

}

cout << endl;

}

return 0;

}

3.  Same numbered line right triangle
    

Output:

 1 

 2  2 

 3  3  3 

 4  4  4  4 

 5  5  5  5  5 

Code:

#include

using namespace std;

int main() {

    for (int i = 0; i < 5; i++) {

        for (int j = 0; j <= i; j++) {

            cout << " " << i + 1 << " ";

        }

        cout << endl;

    }

}

4.  Upside down right angle triangle 
    

Output: