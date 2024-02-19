#include <iostream>
#include <cctype>

bool isPalindrome(const std::string& str) {
    // Remove spaces and convert to lowercase
    std::string cleanedStr;
    for (char ch : str) {
        if (!std::isspace(ch)) {
            cleanedStr += std::tolower(ch);
        }
    }

    // Check if the cleaned string is a palindrome
    int left = 0;
    int right = cleanedStr.length() - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    // Test the function
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
