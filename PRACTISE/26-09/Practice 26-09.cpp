// Завдання 1
// Вивести на екран усі числа від нуля до введеного користувачем числа включно.

//#include <iostream>
//int main() {
//    int n;
//    std::cout << "Enter number: ";
//    std::cin >> n;
//
//    for (int i = 0; i <= n; i++) {
//        std::cout << i << " ";
//    }
//    std::cout << std::endl;
//    return 0;
//}


// Завдання 2
// Користувач вводить дві межі діапазону (у довільному порядку). Вивести всі числа, парні, непарні та кратні семи.

#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two bounds: ";
    std::cin >> a >> b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    std::cout << "All: ";
    for (int i = a; i <= b; i++) std::cout << i << " ";

    std::cout << "\nEven: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0) std::cout << i << " ";
    }

    std::cout << "\nOdd: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) std::cout << i << " ";
    }

    std::cout << "\nMultiple of 7: ";
    for (int i = a; i <= b; i++) {
        if (i % 7 == 0) std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}


// Завдання 3
// Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону.

//#include <iostream>
//int main() {
//    int a, b;
//    std::cout << "Enter two bounds: ";
//    std::cin >> a >> b;
//
//    if (a > b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//
//    int sum = 0;
//    for (int i = a; i <= b; i++) {
//        sum += i;
//    }
//
//    std::cout << "Sum: " << sum << std::endl;
//    return 0;
//}


// Завдання 4
// Користувач із клавіатури вводить числа. Якщо користувач введе 0 - вивести на екран суму цих чисел.

//#include <iostream>
//int main() {
//    int n, sum = 0;
//    std::cout << "Enter numbers (0 to stop): ";
//    do {
//        std::cin >> n;
//        sum += n;
//    } while (n != 0);
//
//    std::cout << "Total sum: " << sum << std::endl;
//    return 0;
//}


// Завдання 5
// Гра "Вгадай число" від 1 до 500. Вихід при введенні 0. Статистика спроб.

//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//int main() {
//    srand(time(0));
//    int secret = rand() % 500 + 1;
//    int guess, attempts = 0;
//
//    std::cout << "Guess number (1-500, 0 to exit): ";
//    while (true) {
//        std::cin >> guess;
//        if (guess == 0) {
//            std::cout << "Game exited." << std::endl;
//            break;
//        }
//        attempts++;
//        if (guess > secret) {
//            std::cout << "Less: ";
//        } else if (guess < secret) {
//            std::cout << "More: ";
//        } else {
//            std::cout << "Won! Attempts: " << attempts << std::endl;
//            break;
//        }
//    }
//    return 0;
//}


// Завдання 6
// Програма-конвертер валют (гривня, долар, євро).

//#include <iostream>
//int main() {
//    int choice;
//    double amount;
//    double usd = 41.5;
//    double eur = 45.0;
//
//    std::cout << "1. UAH to USD/EUR\n2. USD/EUR to UAH\nChoice: ";
//    std::cin >> choice;
//
//    if (choice == 1) {
//        std::cout << "Enter UAH: ";
//        std::cin >> amount;
//        std::cout << "USD: " << amount / usd << std::endl;
//        std::cout << "EUR: " << amount / eur << std::endl;
//    } else if (choice == 2) {
//        int type;
//        std::cout << "Enter amount and type (1-USD, 2-EUR): ";
//        std::cin >> amount >> type;
//        if (type == 1) {
//            std::cout << "UAH: " << amount * usd << std::endl;
//        } else if (type == 2) {
//            std::cout << "UAH: " << amount * eur << std::endl;
//        }
//    }
//    return 0;
//}