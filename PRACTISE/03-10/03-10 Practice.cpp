#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // ==========================================
    // Завдання 1
    // У двовимірному масиві цілих чисел порахувати:
    // Суму всіх елементів масиву;
    // 1)Середнє арифметичне всіх елементів масиву;
    // 2Мінімальний елемент;
    // 3)Максимальний елемент.
    // ==========================================
    /*
    srand(time(0));
    const int ROWS = 3;
    const int COLS = 4;
    int arr1[ROWS][COLS];

    std::cout << "Array 1:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr1[i][j] = rand() % 50;
            std::cout << arr1[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int sum = 0;
    int min_val = arr1[0][0];
    int max_val = arr1[0][0];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr1[i][j];
            if (arr1[i][j] < min_val) min_val = arr1[i][j];
            if (arr1[i][j] > max_val) max_val = arr1[i][j];
        }
    }

    double avg = static_cast<double>(sum) / (ROWS * COLS);

    std::cout << "\nSum: " << sum << std::endl;
    std::cout << "Average: " << avg << std::endl;
    std::cout << "Min: " << min_val << std::endl;
    std::cout << "Max: " << max_val << std::endl;
    */


    /* ==========================================
    // Завдання 2
    // У двовимірному масиві цілих чисел порахувати суму елементів:
    // 1)У кожному рядку;
    // 2)У кожному стовпчику;
    // 3)Одночасно по всіх рядках і всіх стовпцях.
    // Оформити у вигляді таблиці із сумами.
    // ==========================================
    
    int matrix[3][4] = {
        {3, 5, 6, 7},
        {12, 1, 1, 1},
        {0, 7, 12, 1}
    };

    int row_sums[3] = {0};
    int col_sums[4] = {0};
    int total_sum = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            row_sums[i] += matrix[i][j];
            col_sums[j] += matrix[i][j];
            total_sum += matrix[i][j];
        }
    }

    // Вивід таблиці
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << "|\t" << row_sums[i] << std::endl;
    }

    std::cout << "-------------------------------------------\n";

    for (int j = 0; j < 4; j++) {
        std::cout << col_sums[j] << "\t";
    }
    std::cout << "|\t" << total_sum << std::endl;

    */
    


    // ==========================================
    // Завдання 3
    // Оголошується масив розміром 5x10 і масив розміром 5x5.
    // Перший масив заповнюється випадковими числами (0..50).
    // Другий масив заповнюється так: перший елемент = сума 1-го і 2-го елемента першого масиву,
    // другий елемент = сума 3-го і 4-го елемента першого масиву і т.д.
    // ==========================================
    
    srand(time(0));
    int arr5x10[5][10];
    int arr5x5[5][5];

    std::cout << "Array 5x10:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            arr5x10[i][j] = rand() % 51;
            std::cout << arr5x10[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // Заповнення 5x5
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr5x5[i][j] = arr5x10[i][j * 2] + arr5x10[i][j * 2 + 1];
        }
    }

    std::cout << "\nArray 5x5:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << arr5x5[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    

    return 0;
}

