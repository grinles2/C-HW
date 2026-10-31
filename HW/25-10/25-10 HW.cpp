#include <iostream>
#include <cstring>

// 1
int** addColumn(int** arr, int rows, int& cols, int pos, int* newCol) {
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols + 1];
        for (int j = 0, k = 0; j < cols + 1; j++) {
            if (j == pos) {
                temp[i][j] = newCol[i];
            }
            else {
                temp[i][j] = arr[i][k++];
            }
        }
        delete[] arr[i];
    }
    delete[] arr;
    cols++;
    return temp;
}

// 2
int** removeColumn(int** arr, int rows, int& cols, int pos) {
    if (pos < 0 || pos >= cols) return arr;
    int** temp = new int* [rows];
    for (int i = 0; i < rows; i++) {
        temp[i] = new int[cols - 1];
        for (int j = 0, k = 0; j < cols; j++) {
            if (j == pos) continue;
            temp[i][k++] = arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
    cols--;
    return temp;
}

// 3
void shiftMatrix(int** arr, int rows, int cols, int shifts, int direction) {
    if (direction == 1 || direction == 2) {
        shifts = shifts % cols;
        for (int i = 0; i < rows; i++) {
            int* temp = new int[cols];
            for (int j = 0; j < cols; j++) {
                int new_j = (direction == 1) ? (j - shifts + cols) % cols : (j + shifts) % cols;
                temp[new_j] = arr[i][j];
            }
            for (int j = 0; j < cols; j++) arr[i][j] = temp[j];
            delete[] temp;
        }
    }
    else if (direction == 3 || direction == 4) {
        shifts = shifts % rows;
        int** temp = new int* [rows];
        for (int i = 0; i < rows; i++) temp[i] = new int[cols];
        for (int i = 0; i < rows; i++) {
            int new_i = (direction == 3) ? (i - shifts + rows) % rows : (i + shifts) % rows;
            for (int j = 0; j < cols; j++) {
                temp[new_i][j] = arr[i][j];
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) arr[i][j] = temp[i][j];
            delete[] temp[i];
        }
        delete[] temp;
    }
}

// 4
int** transposeMatrix(int** arr, int rows, int cols, int& newRows, int& newCols) {
    newRows = cols;
    newCols = rows;
    int** temp = new int* [newRows];
    for (int i = 0; i < newRows; i++) {
        temp[i] = new int[newCols];
        for (int j = 0; j < newCols; j++) {
            temp[i][j] = arr[j][i];
        }
    }
    return temp;
}

// 5
void phoneBook() {
    const int SIZE = 5;
    char** names = new char* [SIZE];
    char** phones = new char* [SIZE];
    for (int i = 0; i < SIZE; i++) {
        names[i] = new char[50];
        phones[i] = new char[20];
    }

    for (int i = 0; i < SIZE; i++) {
        std::cout << "Enter name " << i + 1 << ": ";
        std::cin >> names[i];
        std::cout << "Enter phone " << i + 1 << ": ";
        std::cin >> phones[i];
    }

    for (int i = 0; i < SIZE; i++) {
        delete[] names[i];
        delete[] phones[i];
    }
    delete[] names;
    delete[] phones;
}

// 6
void sortSurnames() {
    const int SIZE = 5;
    char surnames[SIZE][50];
    std::cout << "Enter 5 surnames:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> surnames[i];
    }
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (strcmp(surnames[j], surnames[j + 1]) > 0) {
                char temp[50];
                for (int k = 0; k < 50; k++) temp[k] = surnames[j][k];
                for (int k = 0; k < 50; k++) surnames[j][k] = surnames[j + 1][k];
                for (int k = 0; k < 50; k++) surnames[j + 1][k] = temp[k];
            }
        }
    }
    std::cout << "Sorted surnames:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cout << surnames[i] << std::endl;
    }
}

// 7
void analyzeMatrices() {
    // Логика работы с тремя матрицами A, B, C и генерация массивов
}

int main() {
    // 1
    /*
    int rows = 2, cols = 2;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2};
    }
    int newCol[2] = {9, 9};
    arr = addColumn(arr, rows, cols, 1, newCol);
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    */

    // 2
    /*
    int rows = 2, cols = 3;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2, 3};
    }
    arr = removeColumn(arr, rows, cols, 1);
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    */

    // 3
    /*
    int rows = 3, cols = 3;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2, 3};
    }
    shiftMatrix(arr, rows, cols, 1, 2);
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    */

    // 4
    /*
    int rows = 2, cols = 3;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols]{1, 2, 3};
    }
    int newRows, newCols;
    int** transposed = transposeMatrix(arr, rows, cols, newRows, newCols);

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    for (int i = 0; i < newRows; i++) {
        delete[] transposed[i];
    }
    delete[] transposed;
    */

    // 5
    phoneBook();

    // 6
    /*
    sortSurnames();
    */

    // 7
    /*
    analyzeMatrices();
    */

    return 0;
}