#include <iostream>

// 1
int** addRowEnd(int** arr, int& rows, int cols, int* newRow) {
    int** temp = new int* [rows + 1];
    for (int i = 0; i < rows; i++) {
        temp[i] = arr[i];
    }
    temp[rows] = newRow;
    delete[] arr;
    rows++;
    return temp;
}

// 2
int** addRowBegin(int** arr, int& rows, int cols, int* newRow) {
    int** temp = new int* [rows + 1];
    temp[0] = newRow;
    for (int i = 0; i < rows; i++) {
        temp[i + 1] = arr[i];
    }
    delete[] arr;
    rows++;
    return temp;
}

// 3
int** addRowAt(int** arr, int& rows, int cols, int pos, int* newRow) {
    if (pos < 0 || pos > rows) return arr;
    int** temp = new int* [rows + 1];
    for (int i = 0, j = 0; i < rows + 1; i++) {
        if (i == pos) {
            temp[i] = newRow;
        }
        else {
            temp[i] = arr[j++];
        }
    }
    delete[] arr;
    rows++;
    return temp;
}

// 4
int** removeRowsWithZero(int** arr, int& rows, int cols, int& newRows) {
    int count = 0;
    for (int i = 0; i < rows; i++) {
        bool hasZero = false;
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) count++;
    }

    int** temp = new int* [count];
    int idx = 0;
    for (int i = 0; i < rows; i++) {
        bool hasZero = false;
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if (!hasZero) {
            temp[idx++] = arr[i];
        }
        else {
            delete[] arr[i];
        }
    }
    delete[] arr;
    newRows = count;
    return temp;
}

// 5
int** sumMatrices(int** A, int** B, int rows, int cols) {
    int** C = new int* [rows];
    for (int i = 0; i < rows; i++) {
        C[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

// 6
int** multiplyMatrices(int** A, int M, int N, int** B, int K) {
    int** C = new int* [M];
    for (int i = 0; i < M; i++) {
        C[i] = new int[K];
        for (int j = 0; j < K; j++) {
            C[i][j] = 0;
            for (int l = 0; l < N; l++) {
                C[i][j] += A[i][l] * B[l][j];
            }
        }
    }
    return C;
}

// 7
int** convert1DTo2D(int* arr, int size, int rows, int cols, int& actualRows, int& actualCols) {
    if (rows * cols != size) return nullptr;
    actualRows = rows;
    actualCols = cols;
    int** C = new int* [rows];
    for (int i = 0; i < rows; i++) {
        C[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            C[i][j] = arr[i * cols + j];
        }
    }
    return C;
}

// 8
void findLongestSurname() {
    const int count = 5;
    char* surnames[count];
    for (int i = 0; i < count; i++) {
        surnames[i] = new char[50];
        std::cout << "Enter surname " << i + 1 << ": ";
        std::cin >> surnames[i];
    }
    int maxLen = 0;
    int maxIdx = 0;
    for (int i = 0; i < count; i++) {
        int len = 0;
        while (surnames[i][len] != '\0') len++;
        if (len > maxLen) {
            maxLen = len;
            maxIdx = i;
        }
    }
    std::cout << "Longest surname: " << surnames[maxIdx] << std::endl;
    for (int i = 0; i < count; i++) {
        delete[] surnames[i];
    }
}


int main() {
    // 1
    /*
    int rows = 2, cols = 2;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2};
    }
    int* newRow = new int[cols]{9, 9};
    arr = addRowEnd(arr, rows, cols, newRow);
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;
    */

    // 2
    /*
    int rows = 2, cols = 2;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2};
    }
    int* newRow = new int[cols]{9, 9};
    arr = addRowBegin(arr, rows, cols, newRow);
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;
    */

    // 3
    /*
    int rows = 2, cols = 2;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2};
    }
    int* newRow = new int[cols]{9, 9};
    arr = addRowAt(arr, rows, cols, 1, newRow);
    for (int i = 0; i < rows; i++) delete[] arr[i];
    delete[] arr;
    */

    // 4
    /*
    int rows = 3, cols = 2, newRows = 0;
    int** arr = new int*[rows];
    arr[0] = new int[cols]{1, 2};
    arr[1] = new int[cols]{0, 4};
    arr[2] = new int[cols]{5, 6};
    arr = removeRowsWithZero(arr, rows, cols, newRows);
    for (int i = 0; i < newRows; i++) delete[] arr[i];
    delete[] arr;
    */

    // 5
    /*
    int rows = 2, cols = 2;
    int** A = new int*[rows];
    int** B = new int*[rows];
    for (int i = 0; i < rows; i++) {
        A[i] = new int[cols]{1, 2};
        B[i] = new int[cols]{3, 4};
    }
    int** C = sumMatrices(A, B, rows, cols);
    for (int i = 0; i < rows; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
    */

    // 6
    /*
    int M = 2, N = 2, K = 2;
    int** A = new int* [M];
    int** B = new int* [N];
    for (int i = 0; i < M; i++) A[i] = new int [N]{1, 2};
    for (int i = 0; i < N; i++) B[i] = new int [K]{3, 4};
    int** C = multiplyMatrices(A, M, N, B, K);
    for (int i = 0; i < M; i++) delete[] A[i];
    for (int i = 0; i < N; i++) delete[] B[i];
    for (int i = 0; i < M; i++) delete[] C[i];
    delete[] A;
    delete[] B;
    delete[] C;
    */

    // 7
    /*
    int size = 6;
    int* arr = new int[size]{1, 2, 3, 4, 5, 6};
    int actRows = 0, actCols = 0;
    int** C = convert1DTo2D(arr, size, 2, 3, actRows, actCols);
    delete[] arr;
    for (int i = 0; i < actRows; i++) delete[] C[i];
    delete[] C;
    */

    // 8
    /*
    findLongestSurname();
    */

    return 0;
}