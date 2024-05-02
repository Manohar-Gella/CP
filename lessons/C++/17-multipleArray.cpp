#include <iostream>

void mul(int a, int b){
    int multiples[b];
    for(int i = 1, j = 0; i<=b && j<b; i++, j++){
        multiples[j] = a * i;
       
    }
    for(int i = 0; i<b; i++){
        std::cout << multiples[i] << " ";
    }

}

int main() {
    int x, y;
    std::cout << "What table: ";
    std::cin >> x;
    std::cout << "What times: ";
    std::cin >> y;
    mul(x, y);
    
}