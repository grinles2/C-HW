#include <iostream>
#include <cstdlib>
#include <ctime>

// Task 1: Рекурсивный поиск степени числа
/*
double power(double base, int exp) {
    if (exp == 0) return 1;
    if (exp < 0) return 1.0 / power(base, -exp);
    return base * power(base, exp - 1);
}
*/

// Task 2: Рекурсивный вывод N звезд в ряд
/*
void printStars(int n) {
    if (n <= 0) return;
    std::cout << "*";
    printStars(n - 1);
}
*/

// Task 3: Рекурсивная сумма чисел от a до b
/*
int sumRange(int a, int b) {
    if (a > b) return sumRange(b, a);
    if (a == b) return a;
    return a + sumRange(a + 1, b);
}
*/

// Task 4: Рекурсивный поиск позиции 10 элементов с мин суммой в массиве из 100 элементов
/*
int minSum10Pos(int arr[], int idx = 0, int min_idx = 0, int min_sum = 1e9) {
    if (idx > 90) return min_idx;

    int current_sum = 0;
    for (int i = 0; i < 10; i++) {
        current_sum += arr[idx + i];
    }

    if (current_sum < min_sum) {
        min_sum = current_sum;
        min_idx = idx;
    }

    return minSum10Pos(arr, idx + 1, min_idx, min_sum);
}
*/


int main() {
    //  1
    /*
    double base;
    int exp;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exp;
    std::cout << "Result: " << power(base, exp) << std::endl;
    */

    // 2
    /*
    int n;
    std::cout << "Enter number of stars: ";
    std::cin >> n;
    std::cout << "Stars: ";
    printStars(n);
    std::cout << std::endl;
    */

    //  3
    /*
    int a, b;
    std::cout << "Enter a and b: ";
    std::cin >> a >> b;
    std::cout << "Sum: " << sumRange(a, b) << std::endl;
    */

    // 4
    /*
    srand(time(0));
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = rand() % 100;
    }

    int pos = minSum10Pos(arr);
    std::cout << "Min 10-element sequence starts at index: " << pos << std::endl;
    */

    return 0;
}