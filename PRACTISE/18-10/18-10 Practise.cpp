#include <iostream>
#include <cstdlib>
#include <ctime>

//  1-4 

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = rand() % 100;
    }
}


//  2

int* mergeArrays(int* A, int M, int* B, int N) {
    int* C = new int[M + N];
    for (int i = 0; i < M; i++) {
        *(C + i) = *(A + i);
    }
    for (int i = 0; i < N; i++) {
        *(C + M + i) = *(B + i);
    }
    return C;
}


//  3

int* getCommonElements(int* A, int M, int* B, int N, int* resultSize) {
    int maxPossible = (M < N) ? M : N;
    int* temp = new int[maxPossible];
    int count = 0;

    for (int i = 0; i < M; i++) {
        bool inB = false;
        for (int j = 0; j < N; j++) {
            if (*(A + i) == *(B + j)) {
                inB = true;
                break;
            }
        }

        if (inB) {
            bool alreadyInTemp = false;
            for (int k = 0; k < count; k++) {
                if (*(temp + k) == *(A + i)) {
                    alreadyInTemp = true;
                    break;
                }
            }

            if (!alreadyInTemp) {
                *(temp + count) = *(A + i);
                count++;
            }
        }
    }

    *resultSize = count;
    int* C = new int[count];
    for (int i = 0; i < count; i++) {
        *(C + i) = *(temp + i);
    }
    delete[] temp;

    return C;
}


//  4

int* removeElements(int* A, int size, int choice, int* newSize) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (choice == 1 && *(A + i) % 2 == 0) continue; 
        if (choice == 2 && *(A + i) % 2 != 0) continue; 
        count++;
    }

    *newSize = count;
    int* result = new int[count];
    int idx = 0;

    for (int i = 0; i < size; i++) {
        if (choice == 1 && *(A + i) % 2 == 0) continue;
        if (choice == 2 && *(A + i) % 2 != 0) continue;
        *(result + idx) = *(A + i);
        idx++;
    }

    return result;
}



int main() {
    srand(time(0));

    //  1
    /*
    int size = 5;
    int* arr = new int[size];

    fillArray(arr, size);

    std::cout << "Random array: ";
    for (int i = 0; i < size; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    */

    //  2
    /*
    int M, N;
    std::cout << "Enter size M and N: ";
    std::cin >> M >> N;

    int* A = new int[M];
    int* B = new int[N];

    fillArray(A, M);
    fillArray(B, N);

    int* C = mergeArrays(A, M, B, N);

    std::cout << "Merged array: ";
    for (int i = 0; i < M + N; i++) {
        std::cout << *(C + i) << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;
    delete[] C;
    */

    //  3
    /*
    int M, N;
    std::cout << "Enter size M and N: ";
    std::cin >> M >> N;

    int* A = new int[M];
    int* B = new int[N];

    fillArray(A, M);
    fillArray(B, N);

    std::cout << "Array A: ";
    for (int i = 0; i < M; i++) std::cout << *(A + i) << " ";
    std::cout << "\nArray B: ";
    for (int i = 0; i < N; i++) std::cout << *(B + i) << " ";
    std::cout << std::endl;

    int resultSize = 0;
    int* C = getCommonElements(A, M, B, N, &resultSize);

    std::cout << "Common elements: ";
    for (int i = 0; i < resultSize; i++) {
        std::cout << *(C + i) << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;
    delete[] C;
    */

    //  4
    
    int M;
    std::cout << "Enter size M: ";
    std::cin >> M;

    int* A = new int[M];
    fillArray(A, M);

    std::cout << "Original array: ";
    for (int i = 0; i < M; i++) std::cout << *(A + i) << " ";
    std::cout << std::endl;

    int choice;
    std::cout << "1. Remove even numbers\n2. Remove odd numbers\nChoice: ";
    std::cin >> choice;

    int newSize = 0;
    int* filtered = removeElements(A, M, choice, &newSize);

    std::cout << "Result array: ";
    for (int i = 0; i < newSize; i++) {
        std::cout << *(filtered + i) << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] filtered;
    

    return 0;
}