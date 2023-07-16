
#include <iostream>
#include <string>
# include <bits/stdc++.h>
using namespace std;

// this file includes the main gothourgh doc of competititve programming notese

int main() {
    cout << "Manohar Gella" << endl;
    cout << "Compitetive programming notese" << endl;
    cout << "random change" << endl;
    cout << "otehr change" << endl;
    cout << "lets do icpc" << endl;
    std::string name;
    int age;
    std::string email;

    // Form input
    std::cout << "Please fill in the form:\n";
    std::cout << "Name: ";
    std::getline(std::cin, name);

    std::cout << "Age: ";
    std::cin >> age;
    std::cin.ignore(); // Ignore the newline character in the input buffer

    std::cout << "Email: ";
    std::getline(std::cin, email);

    // Form submission
    std::cout << "\nForm submitted successfully!\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Email: " << email << "\n";
    return 0;
}