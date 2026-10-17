#include <iostream>

//  3

void getSumAndProduct(int* arr, int size, int* sum, long long* prod) {
    *sum = 0;
    *prod = 1;
    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
        *prod *= *(arr + i);
    }
}


// 4

void countElements(int* arr, int size, int* neg, int* pos, int* zero) {
    *neg = 0;
    *pos = 0;
    *zero = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0) (*neg)++;
        else if (*(arr + i) > 0) (*pos)++;
        else (*zero)++;
    }
}


// 5

int* findSubarray(int* A, int sizeA, int* B, int sizeB) {
    if (sizeB > sizeA || sizeB == 0) return nullptr;

    for (int i = 0; i <= sizeA - sizeB; i++) {
        bool match = true;
        for (int j = 0; j < sizeB; j++) {
            if (*(A + i + j) != *(B + j)) {
                match = false;
                break;
            }
        }
        if (match) {
            return A + i;
        }
    }
    return nullptr;
}



int main() {
    //  1
    /*
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    if (*ptrA > *ptrB) {
        std::cout << "Max: " << *ptrA << std::endl;


    } else {
        std::cout << "Max: " << *ptrB << std::endl;
    }
    */

    //  2
    /*
    int x, y;
    std::cout << "Enter x and y: ";
    std::cin >> x >> y;

    int* pX = &x;
    int* pY = &y;

    int temp = *pX;
    *pX = *pY;
    *pY = temp;

    std::cout << "Swapped x: " << x << ", y: " << y << std::endl;
    */

    //  3
    /*
    int arr[5] = { 1, 2, 3, 4, 5 };
    int sum;
    long long prod;

    getSumAndProduct(arr, 5, &sum, &prod);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Product: " << prod << std::endl;
    */

    //  4
    /*
    int arr[6] = { -2, 0, 5, -1, 0, 8 };
    int neg, pos, zero;

    countElements(arr, 6, &neg, &pos, &zero);

    std::cout << "Negative: " << neg << std::endl;
    std::cout << "Positive: " << pos << std::endl;
    std::cout << "Zero: " << zero << std::endl;
    */

    //  5
    
    int A[7] = { 10, 20, 30, 40, 50, 60, 70 };
    int B[3] = { 30, 40, 50 };

    int* ptr = findSubarray(A, 7, B, 3);

    if (ptr != nullptr) {
        std::cout << "Sub-array found at value: " << *ptr << std::endl;  // я очень люблю англ названия 
    } else {
        std::cout << "Sub-array not found." << std::endl;
    }
    

    return 0;
}