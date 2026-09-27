#include <iostream>

int main() {
    // Завдання 1
    // Користувач вводить прибуток фірми за кожен місяць. Розрахувати загальний прибуток фірми за рік, місяць з максимальним та мінімальним прибутком,
    // середній прибуток на місяць. Вивести всю інформацію в консоль.
    /*
    double profit[12];
    double total = 0;
    double max_p, min_p;
    int max_m = 0, min_m = 0;

    std::cout << "Enter profit for 12 months:\n";
    for (int i = 0; i < 12; i++) {
        std::cout << "Month " << i + 1 << ": ";
        std::cin >> profit[i];
        total += profit[i];

        if (i == 0) {
            max_p = profit[i];
            min_p = profit[i];
        } else {
            if (profit[i] > max_p) {
                max_p = profit[i];
                max_m = i;
            }
            if (profit[i] < min_p) {
                min_p = profit[i];
                min_m = i;
            }
        }
    }

    double avg = total / 12.0;

    std::cout << "\nTotal profit: " << total << std::endl;
    std::cout << "Average profit: " << avg << std::endl;
    std::cout << "Max profit in month " << max_m + 1 << " (" << max_p << ")" << std::endl;
    std::cout << "Min profit in month " << min_m + 1 << " (" << min_p << ")" << std::endl;
    */


    // Завдання 2
    // Створити масив довільного типу на 10 елементів. Заповнити масив довільними значеннями. 
    // Написати програму, яка виводить елементи масиву в зворотному порядку.
    /*
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    std::cout << "Array in reverse order: ";
    for (int i = 9; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    */


    // Завдання 3
    // Користувач вводить довжину сторін п'ятикутника, кожна сторона заноситься в масив.
    // Необхідно обчислити периметр п'ятикутника (периметр — сума всіх сторін).
    /*
    double sides[5];
    double perimeter = 0;

    std::cout << "Enter lengths of 5 sides:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Side " << i + 1 << ": ";
        std::cin >> sides[i];
        perimeter += sides[i];
    }

    std::cout << "Perimeter of pentagon: " << perimeter << std::endl;
    */


    // Завдання 4
    // Стиснути (зсунути елементи) масиву, видаливши з нього всі 0, і заповнити елементи, що звільнилися праворуч, значеннями -1.
    /*
    int arr[9] = { 0, -11, 0, 12, 54, 0, 0, -40, 11 };
    int size = 9;
    int write_index = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[write_index] = arr[i];
            write_index++;
        }
    }

    for (int i = write_index; i < size; i++) {
        arr[i] = -1;
    }

    std::cout << "Compressed array: { ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    std::cout << "}\n";
    */


    // Завдання 5
    // Написати програму, що копіює елементи 2-х масивів розміром 5 елементів кожен в один масив розміром 10 елементів таким чином: спочатку >0, потім ==0, потім <0.
    /*
    int arr1[5] = { 10, 0, 52, -10, -44 };
    int arr2[5] = { 54, 0, -100, 12, 4 };
    int combined[10];
    int idx = 0;

    for (int i = 0; i < 5; i++) {
        if (arr1[i] > 0) combined[idx++] = arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr2[i] > 0) combined[idx++] = arr2[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr1[i] == 0) combined[idx++] = arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr2[i] == 0) combined[idx++] = arr2[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr1[i] < 0) combined[idx++] = arr1[i];
    }
    for (int i = 0; i < 5; i++) {
        if (arr2[i] < 0) combined[idx++] = arr2[i];
    }

    std::cout << "Result: { ";
    for (int i = 0; i < 10; i++) {
        std::cout << combined[i] << (i < 9 ? ", " : " ");
    }
    std::cout << "}\n";
    */

    // return 0;
}