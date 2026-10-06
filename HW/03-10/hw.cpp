#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // ==========================================
    // Завдання 1
    // Двовимірний масив, де кожен наступний елемент — це попередній * 2
    // ==========================================
    /*
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];

    int num;
    std::cout << "Enter starting number: ";
    std::cin >> num;

    int current = num;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = current;
            current *= 2;
        }
    }

    std::cout << "\nResult Array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    */


    // ==========================================
    // Завдання 2
    // Двовимірний масив, де кожен наступний елемент — це попередній + 1
    // ==========================================
    /*
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];

    int num;
    std::cout << "Enter starting number: ";
    std::cin >> num;

    int current = num;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = current;
            current += 1;
        }
    }

    std::cout << "\nResult Array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    */


    // ==========================================
    // Завдання 3
    // Циклічний зсув двовимірного масиву (ліворуч, праворуч, вгору, вниз)
    // ==========================================
    /*
    srand(time(0));
    const int ROWS = 2;
    const int COLS = 6;
    int arr[ROWS][COLS];
    int temp[ROWS][COLS];

    std::cout << "Original Array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int shifts, direction;
    std::cout << "\nEnter number of shifts: ";
    std::cin >> shifts;
    std::cout << "Choose direction (1 - Left, 2 - Right, 3 - Up, 4 - Down): ";
    std::cin >> direction;

    if (direction == 1) { // Ліворуч
        shifts = shifts % COLS;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                int new_j = (j - shifts + COLS) % COLS;
                temp[i][new_j] = arr[i][j];
            }
        }
    } 
    else if (direction == 2) { // Праворуч
        shifts = shifts % COLS;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                int new_j = (j + shifts) % COLS;
                temp[i][new_j] = arr[i][j];
            }
        }
    } 
    else if (direction == 3) { // Вгору
        shifts = shifts % ROWS;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                int new_i = (i - shifts + ROWS) % ROWS;
                temp[new_i][j] = arr[i][j];
            }
        }
    } 
    else if (direction == 4) { // Вниз
        shifts = shifts % ROWS;
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLS; j++) {
                int new_i = (i + shifts) % ROWS;
                temp[new_i][j] = arr[i][j];
            }
        }
    }

    std::cout << "\nShifted Array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << temp[i][j] << " ";
        }
        std::cout << std::endl;
    }
    */

    return 0;
}