# Pattern Printing in C++

This repository contains examples of common pattern printing algorithms implemented in C++. Each example includes the output visualization and the corresponding code.

## 1. Square Pattern

```
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
```

## 2. Right Triangle Pattern

```
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < (i+1); j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
```

## 3. Numbered Right Triangle Pattern

```
 1 
 1  2 
 1  2  3 
 1  2  3  4 
 1  2  3  4  5 
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < (i+1); j++){
            cout << " " << (j+1) << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## 4. Same Numbered Line Right Triangle

```
 1 
 2  2 
 3  3  3 
 4  4  4  4 
 5  5  5  5  5 
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << " " << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## 5. Upside Down Right Triangle Pattern

This section appears to be incomplete in the original content.

## Usage

Simply compile each example with a C++ compiler and run the executable:

```bash
g++ pattern.cpp -o pattern
./pattern
```

## Contributing

Feel free to contribute additional pattern examples by submitting a pull request.

## License

This project is open source and available under the [MIT License](LICENSE).