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

void countChars(const char* str) {
    int letters = 0;
    int digits = 0;
    int others = 0;

    int i = 0;
    while (*(str + i) != '\0') {
        char ch = *(str + i);
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            letters++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            others++;
        }
        i++;
    }

    std::cout << "Letters: " << letters << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Others: " << others << std::endl;
}



int main() {
    //1
    /*
    const char* s1 = "Hello";
    const char* s2 = "World";

    int result = myStrcmp(s1, s2);
    std::cout << "strcmp result: " << result << std::endl;
    */

    //2
    
    const int SIZE = 100;
    char str[SIZE];
    std::cout << "Enter a string: ";
    std::cin.getline(str, SIZE);

    countChars(str);
    

    return 0;
}