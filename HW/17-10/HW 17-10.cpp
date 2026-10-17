#include <iostream>

//  1

void copyArray(int* src, int* dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(src + i);
    }
}


//  2

void reverseArray(int* arr, int size) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}



int main() {
    //  1
    /*
    const int SIZE = 5;
    int source[SIZE] = { 10, 20, 30, 40, 50 };
    int destination[SIZE];

    int* ptrSrc = source;
    int* ptrDest = destination;

    copyArray(ptrSrc, ptrDest, SIZE);

    std::cout << "Copied array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << *(ptrDest + i) << " ";
    }
    std::cout << std::endl;
    */

    //  2
    
    const int SIZE = 6;
    int arr[SIZE] = { 1, 2, 3, 4, 5, 6 };

    int* ptrArr = arr;

    std::cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << *(ptrArr + i) << " ";
    }
    std::cout << std::endl;

    reverseArray(ptrArr, SIZE);

    std::cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << *(ptrArr + i) << " ";
    }
    std::cout << std::endl;
    

    return 0;
}