#include <iostream>

// Task 1: Вывод прямоугольника N x K символом S
/*
void printRectangle(int n, int k, char s) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << s;
        }
        std::cout << std::endl;
    }
}
*/

// Task 2: Факториал числа
/*
long long factorial(int num) {
    if (num < 0) return 0;
    long long res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}
*/

// Task 3: Проверка числа на простоту
/*
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
*/

// Task 4: Куб числа
/*
double cube(double num) {
    return num * num * num;
}
*/

// Task 5: Максимум из двух чисел
/*
double maxOfTwo(double a, double b) {
    if (a > b) return a;
    return b;
}
*/

// Task 6: Проверка положительное ли число
/*
bool isPositive(double num) {
    return num >= 0;
}
*/

// Task 7: Поиск мин и макс в массиве
/*
void printMinMax(int arr[], int size) {
    if (size <= 0) return;

    int min_val = arr[0], min_idx = 0;
    int max_val = arr[0], max_idx = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }

    std::cout << "Min: " << min_val << " index: " << min_idx << std::endl;
    std::cout << "Max: " << max_val << " index: " << max_idx << std::endl;
}
*/

// Task 8: Переворот массива
/*
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
*/

// Task 9: Кол-во простых чисел в массиве
/*
int countPrimesInArray(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}
*/


int main() {
    // Task 1
    /*
    int n, k;
    char s;
    std::cout << "Enter height, width, symbol: ";
    std::cin >> n >> k >> s;
    printRectangle(n, k, s);
    */

    // Task 2
    /*
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    std::cout << "Factorial: " << factorial(num) << std::endl;
    */

    // Task 3
    /*
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    if (isPrime(num)) std::cout << "Prime" << std::endl;
    else std::cout << "Not prime" << std::endl;
    */

    // Task 4
    /*
    double num;
    std::cout << "Enter number: ";
    std::cin >> num;
    std::cout << "Cube: " << cube(num) << std::endl;
    */

    // Task 5
    /*
    double a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Max: " << maxOfTwo(a, b) << std::endl;
    */

    // Task 6
    /*
    double num;
    std::cout << "Enter number: ";
    std::cin >> num;
    if (isPositive(num)) std::cout << "True" << std::endl;
    else std::cout << "False" << std::endl;
    */

    // Task 7
    /*
    int arr[6] = { 15, -3, 42, 8, 0, -10 };
    printMinMax(arr, 6);
    */

    // Task 8
    /*
    int arr[5] = { 1, 2, 3, 4, 5 };
    reverseArray(arr, 5);
    for (int i = 0; i < 5; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    */

    // Task 9
    /*
    int arr[7] = { 2, 4, 7, 10, 13, 15, 17 };
    std::cout << "Primes count: " << countPrimesInArray(arr, 7) << std::endl;
    */

    return 0;
}