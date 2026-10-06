#include <iostream>

int main() {
    // ==========================================
    // Завдання 1
    // Довідник: два масиви (мобільні та домашні номери).
    // Меню для сортування за мобільними, за домашніми та виводу списку.
    // ==========================================
    /*
    const int SIZE = 5;
    long long mobile[SIZE] = { 380971112233, 380639998877, 380505554433, 380672223344, 380931234567 };
    long long home[SIZE]   = { 442223344,    441112233,    445556677,    443334455,    448889900 };

    int choice;
    do {
        std::cout << "\n--- PHONEBOOK MENU ---\n";
        std::cout << "1. Sort by mobile numbers\n";
        std::cout << "2. Sort by home numbers\n";
        std::cout << "3. Print list\n";
        std::cout << "0. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            // Сортування за мобільними номерами (сорт уємо обидва масиви одночасно)
            for (int i = 0; i < SIZE - 1; i++) {
                for (int j = 0; j < SIZE - i - 1; j++) {
                    if (mobile[j] > mobile[j + 1]) {
                        // Міняємо місцями мобільні
                        long long tempM = mobile[j];
                        mobile[j] = mobile[j + 1];
                        mobile[j + 1] = tempM;

                        // Міняємо місцями домашні, щоб зберегти відповідність
                        long long tempH = home[j];
                        home[j] = home[j + 1];
                        home[j + 1] = tempH;
                    }
                }
            }
            std::cout << "Sorted by mobile numbers!\n";
        }
        else if (choice == 2) {
            // Сортування за домашніми номерами
            for (int i = 0; i < SIZE - 1; i++) {
                for (int j = 0; j < SIZE - i - 1; j++) {
                    if (home[j] > home[j + 1]) {
                        // Міняємо місцями домашні
                        long long tempH = home[j];
                        home[j] = home[j + 1];
                        home[j + 1] = tempH;

                        // Міняємо місцями мобільні
                        long long tempM = mobile[j];
                        mobile[j] = mobile[j + 1];
                        mobile[j + 1] = tempM;
                    }
                }
            }
            std::cout << "Sorted by home numbers!\n";
        }
        else if (choice == 3) {
            std::cout << "\n#\tMobile Phone\tHome Phone\n";
            for (int i = 0; i < SIZE; i++) {
                std::cout << i + 1 << "\t+" << mobile[i] << "\t" << home[i] << std::endl;
            }
        }
    } while (choice != 0);
    */


    // ==========================================
    // Завдання 2
    // Удосконалене сортування бульбашкою (з прапором/лічильником перестановок).
    // ==========================================
    /*
    const int SIZE = 8;
    int arr[SIZE] = { 25, 10, 5, 30, 40, 1, 15, 8 };

    std::cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < SIZE - 1; i++) {
        int swaps = 0; // Лічильник перестановок на даному кроці

        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }

        // Якщо перестановок не було, масив уже відсортований
        if (swaps == 0) {
            std::cout << "Array sorted early on step " << i + 1 << std::endl;
            break;
        }
    }

    std::cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    */


    // ==========================================
    // Завдання 3
    // Сортування оладок за радіусом (Pancake Sort) без окремих функцій.
    // Завдання: знизу вгору за зменшенням радіуса (тобто знизу найбільший, зверху найменший -> за зростанням знизу вгору).
    // ==========================================
    /*
    const int SIZE = 6;
    int pancakes[SIZE] = { 3, 6, 1, 4, 2, 5 }; // Радіуси оладок (index 0 - верх, index SIZE-1 - низ)

    std::cout << "Initial stack (top to bottom): ";
    for (int i = 0; i < SIZE; i++) std::cout << pancakes[i] << " ";
    std::cout << std::endl;

    int flips = 0;

    // Сортуємо від низу стопки (SIZE - 1) до верху (1)
    for (int curr_size = SIZE; curr_size > 1; curr_size--) {
        // Знаходимо індекс найбільшої оладки серед перших curr_size
        int max_idx = 0;
        for (int i = 1; i < curr_size; i++) {
            if (pancakes[i] > pancakes[max_idx]) {
                max_idx = i;
            }
        }

        // Якщо найбільша оладка не на своєму місці (не внизу поточного зрізу)
        if (max_idx != curr_size - 1) {
            // 1. Перевертаємо оладки від 0 до max_idx (щоб найбільша опинилася зверху)
            if (max_idx != 0) {
                int l = 0, r = max_idx;
                while (l < r) {
                    int temp = pancakes[l];
                    pancakes[l] = pancakes[r];
                    pancakes[r] = temp;
                    l++;
                    r--;
                }
                flips++;
            }

            // 2. Перевертаємо оладки від 0 до curr_size - 1 (відправляємо найбільшу вниз)
            int l = 0, r = curr_size - 1;
            while (l < r) {
                int temp = pancakes[l];
                pancakes[l] = pancakes[r];
                pancakes[r] = temp;
                l++;
                r--;
            }
            flips++;
        }
    }

    std::cout << "Sorted stack (top to bottom): ";
    for (int i = 0; i < SIZE; i++) std::cout << pancakes[i] << " ";
    std::cout << "\nTotal flip operations: " << flips << std::endl;
    */

    return 0;
}