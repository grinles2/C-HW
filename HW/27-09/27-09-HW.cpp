#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // ==========================================
    // Завдання 1
    // В одновимірному масиві, заповненому випадковими числами, визначити мінімальний і максимальний елементи.
    // ==========================================
    /*
    srand(time(0));
    const int SIZE = 10;
    int arr[SIZE];

    std::cout << "Array: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 - 50;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    */


    // ==========================================
    // Завдання 2
    // Користувач вводить прибуток фірми за рік (12 місяців). Потім користувач вводить діапазон (наприклад, 3 і 6 — пошук між 3-м і 6-м місяцем). 
    // Необхідно визначити місяць, у якому прибуток був максимальним, і місяць, у якому прибуток був мінімальним, з урахуванням обраного діапазону.
    // ==========================================
    /*
    double profit[12];
    std::cout << "Enter profit for 12 months:\n";
    for (int i = 0; i < 12; i++) {
        std::cout << "Month " << i + 1 << ": ";
        std::cin >> profit[i];
    }

    int start, end;
    std::cout << "Enter range (start and end month 1-12): ";
    std::cin >> start >> end;

    int min_m = start - 1;
    int max_m = start - 1;

    for (int i = start - 1; i < end; i++) {
        if (profit[i] < profit[min_m]) min_m = i;
        if (profit[i] > profit[max_m]) max_m = i;
    }

    std::cout << "In range [" << start << ", " << end << "]:\n";
    std::cout << "Min profit in month " << min_m + 1 << " (" << profit[min_m] << ")\n";
    std::cout << "Max profit in month " << max_m + 1 << " (" << profit[max_m] << ")\n";
    */


    // ==========================================
    // Завдання 3
    // В одновимірному масиві, що складається з N дійсних чисел обчислити:
    // ● Суму від'ємних елементів.
    // ● Добуток елементів, що знаходяться між min і max елементами.
    // ● Добуток елементів з парними номерами.
    // ● Суму елементів, що знаходяться між першим і останнім від'ємними елементами.
    // ==========================================
    /*
    const int N = 10;
    double arr[N] = { 2.5, -3.1, 4.0, -1.2, 5.5, -2.0, 3.0, 1.5, -4.5, 6.0 };

    // 1. Сума від'ємних
    double neg_sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) neg_sum += arr[i];
    }

    // 2. Добуток між min і max
    int min_idx = 0, max_idx = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[min_idx]) min_idx = i;
        if (arr[i] > arr[max_idx]) max_idx = i;
    }
    int left = (min_idx < max_idx) ? min_idx : max_idx;
    int right = (min_idx > max_idx) ? min_idx : max_idx;

    double prod_between_min_max = 1;
    for (int i = left + 1; i < right; i++) {
        prod_between_min_max *= arr[i];
    }

    // 3. Добуток елементів з парними номерами (індекси 0, 2, 4...)
    double prod_even_idx = 1;
    for (int i = 0; i < N; i += 2) {
        prod_even_idx *= arr[i];
    }

    // 4. Сума між першим і останнім від'ємними
    int first_neg = -1, last_neg = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (first_neg == -1) first_neg = i;
            last_neg = i;
        }
    }

    double sum_between_negs = 0;
    if (first_neg != -1 && last_neg != -1 && first_neg < last_neg) {
        for (int i = first_neg + 1; i < last_neg; i++) {
            sum_between_negs += arr[i];
        }
    }

    std::cout << "Sum of negative elements: " << neg_sum << std::endl;
    std::cout << "Prod between min and max: " << prod_between_min_max << std::endl;
    std::cout << "Prod of even indices: " << prod_even_idx << std::endl;
    std::cout << "Sum between first and last negative: " << sum_between_negs << std::endl;
    */


    // ==========================================
    // Завдання 4
    // Написати програму, яка копіює послідовно елементи одного масиву розміром 10 елементів у 2 масиви розміром 5 елементів кожен.
    // ==========================================
    /*
    int source[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arr1[5];
    int arr2[5];

    for (int i = 0; i < 5; i++) {
        arr1[i] = source[i];
        arr2[i] = source[i + 5];
    }

    std::cout << "Array 1: ";
    for (int i = 0; i < 5; i++) std::cout << arr1[i] << " ";
    std::cout << "\nArray 2: ";
    for (int i = 0; i < 5; i++) std::cout << arr2[i] << " ";
    std::cout << std::endl;
    */


    // ==========================================
    // Завдання 5
    // Напишіть програму, яка виконує поелементну суму двох масивів і результат заносить у третій масив.
    // ==========================================
    /*
    int arr1[5] = { 10, 15, 0, -23, 40 };
    int arr2[5] = { 6, 0, -100, 25, -4 };
    int result[5];

    for (int i = 0; i < 5; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    std::cout << "Result: { ";
    for (int i = 0; i < 5; i++) {
        std::cout << result[i] << (i < 4 ? ", " : " ");
    }
    std::cout << "}\n";
    

    return 0;
    */
}