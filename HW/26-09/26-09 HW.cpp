// Завдання 1
// Напишіть програму, яка обчислює суму цілих чисел від а до 500 (значення a вводиться з клавіатури).

//#include <iostream>
//int main() {
//    int a;
//    std::cout << "Enter a (<= 500): ";
//    std::cin >> a;
//
//    int sum = 0;
//    for (int i = a; i <= 500; i++) {
//        sum += i;
//    }
//    std::cout << "Sum: " << sum << std::endl;
//    return 0;
//}


// Завдання 2
// Напишіть програму, яка запитує два цілих числа x і y, після чого обчислює і виводить значення x у степені y.

//#include <iostream>
//int main() {
//    int x, y;
//    std::cout << "Enter x and y: ";
//    std::cin >> x >> y;
//
//    long long res = 1;
//    for (int i = 0; i < y; i++) {
//        res *= x;
//    }
//    std::cout << "Result: " << res << std::endl;
//    return 0;
//}


// Завдання 3
// Знайти середнє арифметичне всіх цілих чисел від 1 до 1000.

//#include <iostream>
//int main() {
//    double sum = 0;
//    int count = 1000;
//
//    for (int i = 1; i <= 1000; i++) {
//        sum += i;
//    }
//
//    double avg = sum / count;
//    std::cout << "Average: " << avg << std::endl;
//    return 0;
//}


// Завдання 4
// Знайти добуток усіх цілих чисел від a до 20 (значення a вводиться з клавіатури: 1 <= a <= 20).

//#include <iostream>
//int main() {
//    int a;
//    std::cout << "Enter a (1-20): ";
//    std::cin >> a;
//
//    long long prod = 1;
//    for (int i = a; i <= 20; i++) {
//        prod *= i;
//    }
//    std::cout << "Product: " << prod << std::endl;
//    return 0;
//}


// Завдання 5
// Написати програму, яка виводить на екран таблицю множення на k, де k - вводиться з клавіатури.

//#include <iostream>
//int main() {
//    int k;
//    std::cout << "Enter k: ";
//    std::cin >> k;
//
//    for (int i = 1; i <= 10; i++) {
//        std::cout << k << " * " << i << " = " << k * i << std::endl;
//    }
//    return 0;
//}


// Завдання 6
// Користувач вводить довільне ціле число А. Необхідно вивести всі цілі числа В, для яких А ділитися без залишку на В*В і не ділитися без залишку на В*В*В.

//#include <iostream>
//int main() {
//    int a;
//    std::cout << "Enter A: ";
//    std::cin >> a;
//
//    std::cout << "Numbers B: ";
//    for (int b = 1; b <= a; b++) {
//        if (a % (b * b) == 0 && a % (b * b * b) != 0) {
//            std::cout << b << " ";
//        }
//    }
//    std::cout << std::endl;
//    return 0;
//}


// Завдання 7
// Користувач вводить ціле число. Необхідно вивести всі цілі числа, на які задане число ділиться без залишку.

//#include <iostream>
//int main() {
//    int n;
//    std::cout << "Enter number: ";
//    std::cin >> n;
//
//    std::cout << "Dividers: ";
//    for (int i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            std::cout << i << " ";
//        }
//    }
//    std::cout << std::endl;
//    return 0;
//}


// Завдання 8
// Користувач вводить два цілих числа. Необхідно вивести всі цілі числа, на які обидва введених числа діляться без залишку.

//#include <iostream>
//int main() {
//    int a, b;
//    std::cout << "Enter two numbers: ";
//    std::cin >> a >> b;
//
//    int limit = (a < b) ? a : b;
//    if (limit < 0) limit = -limit;
//
//    std::cout << "Common dividers: ";
//    for (int i = 1; i <= limit; i++) {
//        if (a % i == 0 && b % i == 0) {
//            std::cout << i << " ";
//        }
//    }
//    std::cout << std::endl;
//    return 0;
//}


// Завдання 9
// Вивести на екран фігури заповнені символом (квадрат, прямокутник, трикутник).

//#include <iostream>
//int main() {
//    char sym;
//    int choice;
//    std::cout << "Enter symbol: ";
//    std::cin >> sym;
//    std::cout << "Choose figure (1-Square, 2-Rectangle, 3-Triangle): ";
//    std::cin >> choice;
//
//    if (choice == 1) {
//        int side;
//        std::cout << "Side size: ";
//        std::cin >> side;
//        for (int i = 0; i < side; i++) {
//            for (int j = 0; j < side; j++) {
//                std::cout << sym << " ";
//            }
//            std::cout << std::endl;
//        }
//    } 
//    else if (choice == 2) {
//        int h, w;
//        std::cout << "Height and width: ";
//        std::cin >> h >> w;
//        for (int i = 0; i < h; i++) {
//            for (int j = 0; j < w; j++) {
//                std::cout << sym << " ";
//            }
//            std::cout << std::endl;
//        }
//    } 
//    else if (choice == 3) {
//        int h;
//        std::cout << "Height: ";
//        std::cin >> h;
//        for (int i = 1; i <= h; i++) {
//            for (int j = 0; j < i; j++) {
//                std::cout << sym << " ";
//            }
//            std::cout << std::endl;
//        }
//    }
//    return 0;
//}