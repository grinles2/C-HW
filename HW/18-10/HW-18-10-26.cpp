#include <iostream>
#include <cstdlib>
#include <ctime>

// 1

void allocateMemory(int*& arr, int size) {
    arr = new int[size];
}

void initArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 50;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

void deleteArray(int*& arr) {
    delete[] arr;
    arr = nullptr;
}

int* appendElement(int* arr, int& size, int value) {
    int* newArr = new int[size + 1];
    for (int i = 0; i < size; i++) {
        *(newArr + i) = *(arr + i);
    }
    *(newArr + size) = value;
    delete[] arr;
    size++;
    return newArr;
}

int* insertElement(int* arr, int& size, int index, int value) {
    if (index < 0 || index > size) return arr;
    int* newArr = new int[size + 1];
    for (int i = 0, j = 0; i < size + 1; i++) {
        if (i == index) {
            *(newArr + i) = value;
        } else {
            *(newArr + i) = *(arr + j);
            j++;
        }
    }
    delete[] arr;
    size++;
    return newArr;
}

int* removeElement(int* arr, int& size, int index) {
    if (index < 0 || index >= size) return arr;
    int* newArr = new int[size - 1];
    for (int i = 0, j = 0; i < size; i++) {
        if (i == index) continue;
        *(newArr + j) = *(arr + i);
        j++;
    }
    delete[] arr;
    size--;
    return newArr;
}


//  2

bool isPrimeNumber(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int* removePrimes(int* arr, int size, int& newSize) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!isPrimeNumber(*(arr + i))) {
            count++;
        }
    }

    newSize = count;
    int* newArr = new int[newSize];
    for (int i = 0, j = 0; i < size; i++) {
        if (!isPrimeNumber(*(arr + i))) {
            *(newArr + j) = *(arr + i);
            j++;
        }
    }
    return newArr;
}


//  3

void splitArray(int* staticArr, int size, int*& posArr, int& posSize, int*& negArr, int& negSize, int*& zeroArr, int& zeroSize) {
    posSize = 0;
    negSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; i++) {
        if (*(staticArr + i) > 0) posSize++;
        else if (*(staticArr + i) < 0) negSize++;
        else zeroSize++;
    }

    posArr = new int[posSize];
    negArr = new int[negSize];
    zeroArr = new int[zeroSize];

    int p = 0, n = 0, z = 0;
    for (int i = 0; i < size; i++) {
        if (*(staticArr + i) > 0) *(posArr + p++) = *(staticArr + i);
        else if (*(staticArr + i) < 0) *(negArr + n++) = *(staticArr + i);
        else *(zeroArr + z++) = *(staticArr + i);
    }
}



int main() {
    srand(time(0));

    //  1
    /*
    int size = 5;
    int* arr = nullptr;
    allocateMemory(arr, size);
    initArray(arr, size);

    std::cout << "Original: ";
    printArray(arr, size);

    arr = appendElement(arr, size, 99);
    std::cout << "After append: ";
    printArray(arr, size);

    arr = insertElement(arr, size, 2, 77);
    std::cout << "After insert: ";
    printArray(arr, size);

    arr = removeElement(arr, size, 1);
    std::cout << "After remove: ";
    printArray(arr, size);

    deleteArray(arr);
    */

    //  2
    /*
    int size = 10;
    int* arr = new int[size];
    initArray(arr, size);

    std::cout << "Original array: ";
    printArray(arr, size);

    int newSize = 0;
    int* filtered = removePrimes(arr, size, newSize);

    std::cout << "Without primes: ";
    printArray(filtered, newSize);

    delete[] arr;
    delete[] filtered;
    */

    //  3
    
    const int staticSize = 8;
    int staticArr[staticSize] = { 5, -2, 0, 10, -8, 0, 3, -1 };

    int* posArr = nullptr; int posSize = 0;
    int* negArr = nullptr; int negSize = 0;
    int* zeroArr = nullptr; int zeroSize = 0;

    splitArray(staticArr, staticSize, posArr, posSize, negArr, negSize, zeroArr, zeroSize);

    std::cout << "Positive: "; printArray(posArr, posSize);
    std::cout << "Negative: "; printArray(negArr, negSize);
    std::cout << "Zeros: "; printArray(zeroArr, zeroSize);

    delete[] posArr;
    delete[] negArr;
    delete[] zeroArr;
    

    return 0;
}