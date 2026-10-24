#include <iostream>

// 1
int myStrcmp(const char* str1, const char* str2) {
    int i = 0;
    while (*(str1 + i) != '\0' || *(str2 + i) != '\0') {
        if (*(str1 + i) != *(str2 + i)) {
            return *(str1 + i) - *(str2 + i);
        }
        i++;
    }
    return 0;
}

// 2
bool isPalindrome(const char* str) {
    int length = 0;
    while (*(str + length) != '\0') {
        length++;
    }
    int left = 0;
    int right = length - 1;
    while (left < right) {
        if (*(str + left) != *(str + right)) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// 3
int countWords(const char* str) {
    int count = 0;
    bool inWord = false;
    int i = 0;
    while (*(str + i) != '\0') {
        char ch = *(str + i);
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            if (!inWord) {
                inWord = true;
                count++;
            }
        }
        else {
            inWord = false;
        }
        i++;
    }
    return count;
}

int main() {
    // 1
    /*
    const char* s1 = "Hello";
    const char* s2 = "World";
    int result = myStrcmp(s1, s2);
    std::cout << "strcmp result: " << result << std::endl;
    */

    // 2
    /*
    const int SIZE = 100;
    char str[SIZE];
    std::cout << "Enter a string for palindrome check: ";
    std::cin.getline(str, SIZE);
    if (isPalindrome(str)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    */

    // 3
    
    const int SIZE = 100;
    char str[SIZE];
    std::cout << "Enter a string to count words: ";
    std::cin.getline(str, SIZE);
    int words = countWords(str);
    std::cout << "Words count: " << words << std::endl;
    

    return 0;
}