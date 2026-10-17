#include <iostream>
#include <cmath>

// Завдання 1: Обчислення степеня числа
/*
double power(double base, int exp) {
    double res = 1.0;
    int p = abs(exp);
    for (int i = 0; i < p; i++) {
        res *= base;
    }
    if (exp < 0) return 1.0 / res;
    return res;
}
*/

// Завдання 2: Сума чисел у діапазоні
/*
int sumRange(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    return sum;
}
*/

// Завдання 3: Пошук досконалих чисел у діапазоні
/*
void findPerfectNumbers(int start, int end) {
    std::cout << "Perfect numbers in range [" << start << ", " << end << "]: ";
    for (int num = start; num <= end; num++) {
        if (num <= 1) continue;
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}
*/

// Завдання 4: Вивід гральної карти
/*
void printCard(int rank, int suit) {
    // rank: 2-10, 11 (J), 12 (Q), 13 (K), 14 (A)
    // suit: 1 (Hearts), 2 (Diamonds), 3 (Clubs), 4 (Spades)
    std::cout << "Card: ";
    if (rank >= 2 && rank <= 10) std::cout << rank;
    else if (rank == 11) std::cout << "Jack";
    else if (rank == 12) std::cout << "Queen";
    else if (rank == 13) std::cout << "King";
    else if (rank == 14) std::cout << "Ace";

    std::cout << " of ";

    if (suit == 1) std::cout << "Hearts";
    else if (suit == 2) std::cout << "Diamonds";
    else if (suit == 3) std::cout << "Clubs";
    else if (suit == 4) std::cout << "Spades";

    std::cout << std::endl;
}
*/

// Завдання 5: Перевірка на "щасливе" 6-значне число
/*
bool isLuckyNumber(int num) {
    if (num < 100000 || num > 999999) return false;

    int d6 = num % 10; num /= 10;
    int d5 = num % 10; num /= 10;
    int d4 = num % 10; num /= 10;
    int d3 = num % 10; num /= 10;
    int d2 = num % 10; num /= 10;
    int d1 = num % 10;

    return (d1 + d2 + d3) == (d4 + d5 + d6);
}
*/

// Завдання 6: Лінійний пошук у масиві
/*
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Повертаємо індекс
        }
    }
    return -1; // Не знайдено
}
*/

// Завдання 7: Бінарний пошук у відсортованому масиві
/*
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
*/

// Завдання 8: Переведення з двійкового в десяткове
/*
int binaryToDecimal(long long bin) {
    int dec = 0;
    int base = 1;
    while (bin > 0) {
        int last_digit = bin % 10;
        bin /= 10;
        dec += last_digit * base;
        base *= 2;
    }
    return dec;
}
*/

// Завдання 9: Середнє арифметичне елементів масиву
/*
double getAverage(int arr[], int size) {
    if (size <= 0) return 0;
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
*/


int main() {

    // Завдання 1
    // Написати функцію, яка приймає два параметри: основу та показник степеня.
    /*
    double base;
    int exp;
    std::cout << "Enter base and exponent: ";
    std::cin >> base >> exp;
    std::cout << "Result: " << power(base, exp) << std::endl;
    */



    // Завдання 2
    // Написати функцію, яка повертає суму чисел з діапазону між ними.

    /*
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Sum in range: " << sumRange(a, b) << std::endl;
    */



    // Завдання 3
    // Пошук досконалих чисел у введеному інтервалі.

    /*
    int start, end;
    std::cout << "Enter interval bounds: ";
    std::cin >> start >> end;
    findPerfectNumbers(start, end);
    */



    // Завдання 4
    // Функція, що виводить на екран передану їй гральну карту.

    /*
    int rank, suit;
    std::cout << "Enter rank (2-14, where 11=J, 14=A) and suit (1-Hearts, 2-Diamonds, 3-Clubs, 4-Spades): ";
    std::cin >> rank >> suit;
    printCard(rank, suit);
    */



    // Завдання 5
    // Визначення, чи є 6-значне число "щасливим".

    /*
    int num;
    std::cout << "Enter 6-digit number: ";
    std::cin >> num;
    if (isLuckyNumber(num)) {
        std::cout << "Lucky number!" << std::endl;
    } else {
        std::cout << "Not a lucky number." << std::endl;
    }
    */



    // Завдання 6
    // Лінійний пошук ключа в одновимірному масиві.

    /*
    int arr[6] = { 10, 4, 8, 15, 23, 42 };
    int key;
    std::cout << "Enter number to search: ";
    std::cin >> key;
    int idx = linearSearch(arr, 6, key);
    if (idx != -1) std::cout << "Found at index: " << idx << std::endl;
    else std::cout << "Not found!" << std::endl;
    */



    // Завдання 7
    // Бінарний пошук ключа в одновимірному масиві.

    /*
    int sorted_arr[7] = { 2, 5, 8, 12, 16, 23, 38 };
    int key;
    std::cout << "Enter number to search (binary): ";
    std::cin >> key;
    int idx = binarySearch(sorted_arr, 7, key);
    if (idx != -1) std::cout << "Found at index: " << idx << std::endl;
    else std::cout << "Not found!" << std::endl;
    */



    // Завдання 8
    // Переведення з двійкового у десяткове подання.

    /*
    long long bin;
    std::cout << "Enter binary number (e.g. 10110): ";
    std::cin >> bin;
    std::cout << "Decimal: " << binaryToDecimal(bin) << std::endl;
    */



    // Завдання 9
    // Середнє арифметичне елементів переданого масиву.

    /*
    int arr[5] = { 10, 20, 30, 40, 50 };
    std::cout << "Average: " << getAverage(arr, 5) << std::endl;
    */

    return 0;
}