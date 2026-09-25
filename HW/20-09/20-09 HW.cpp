// Завдання 1
// Користувач вводить із клавіатури 7 цілих чисел. Напишіть програму, яка визначає максимальне з цих 7 чисел.

//#include <iostream>
//int main() {
//    int max, n;
//    std::cout << "Enter 7 numbers: ";
//    std::cin >> max; 
//    for (int i = 0; i < 6; i++) {
//        std::cin >> n;
//        if (n > max) {
//            max = n;
//        }
//    }
//    std::cout << "Max: " << max << std::endl;
//    return 0;
//}


// Завдання 2
// Вантажний літак повинен пролетіти з вантажем з пункту А в пункт С через пункт В. 

//#include <iostream>
//int main() {
//    double ab, bc, weight;
//    std::cout << "Distance AB: ";
//    std::cin >> ab;
//    std::cout << "Distance BC: ";
//    std::cin >> bc;
//    std::cout << "Cargo weight: ";
//    std::cin >> weight;
//
//    if (weight > 2000) {
//        std::cout << "Error: Too heavy!" << std::endl;
//        return 0;
//    }
//
//    double rate = 0;
//    if (weight <= 500) rate = 1;
//    else if (weight <= 1000) rate = 4;
//    else if (weight <= 1500) rate = 7;
//    else rate = 9;
//
//    double fuelAB = ab * rate;
//    double fuelBC = bc * rate;
//
//    if (fuelAB > 300 || fuelBC > 300) {
//        std::cout << "Flight impossible!" << std::endl;
//        return 0;
//    }
//
//    double need_refill = 0;
//    if (fuelAB < 300) {
//        double left_in_tank = 300 - fuelAB;
//        if (left_in_tank < fuelBC) {
//            need_refill = fuelBC - left_in_tank;
//        }
//    }
//
//    std::cout << "Min fuel to refill in B: " << need_refill << " liters" << std::endl;
//    return 0;
//}


// Завдання 3
// Зарплата менеджера становить 200$ + відсоток від продажів. Визначити зарплату трьох, знайти найкращого та дати премію.

//#include <iostream>
//int main() {
//    double sales[3];
//    double salary[3];
//    int best = 0;
//
//    for (int i = 0; i < 3; i++) {
//        std::cout << "Sales for manager " << i + 1 << ": ";
//        std::cin >> sales[i];
//
//        double percent = 0;
//        if (sales[i] < 500) percent = 0.03;
//        else if (sales[i] <= 1000) percent = 0.05;
//        else percent = 0.08;
//
//        salary[i] = 200 + sales[i] * percent;
//    }
//
//    for (int i = 1; i < 3; i++) {
//        if (salary[i] > salary[best]) {
//            best = i;
//        }
//    }
//
//    salary[best] += 200;
//
//    for (int i = 0; i < 3; i++) {
//        std::cout << "Manager " << i + 1 << " salary: " << salary[i] << "$" << std::endl;
//    }
//    std::cout << "Best manager is #" << best + 1 << " with bonus!" << std::endl;
//    return 0;
//}


// Завдання 4
// Вася отримує 50$ за кожні 100 рядків коду. За кожне третє запізнення - штраф 20$. Реалізувати меню з трьох варіантів.

//#include <iostream>
//int main() {
//    int choice;
//    std::cout << "1. Find lines of code\n2. Find late count\n3. Find salary\nChoice: ";
//    std::cin >> choice;
//
//    if (choice == 1) {
//        double target;
//        int lates;
//        std::cout << "Target money: ";
//        std::cin >> target;
//        std::cout << "Lates: ";
//        std::cin >> lates;
//
//        double fine = (lates / 3) * 20;
//        double needed_money = target + fine;
//        int lines = (needed_money / 50) * 100;
//        std::cout << "Lines needed: " << lines << std::endl;
//    } 
//    else if (choice == 2) {
//        int lines;
//        double target;
//        std::cout << "Lines written: ";
//        std::cin >> lines;
//        std::cout << "Target money: ";
//        std::cin >> target;
//
//        double earned = (lines / 100) * 50;
//        double diff = earned - target;
//        if (diff < 0) {
//            std::cout << "Cannot reach target." << std::endl;
//        } else {
//            int allowed_fines = diff / 20;
//            int allowed_lates = allowed_fines * 3;
//            std::cout << "Max lates allowed: " << allowed_lates << std::endl;
//        }
//    } 
//    else if (choice == 3) {
//        int lines, lates;
//        std::cout << "Lines written: ";
//        std::cin >> lines;
//        std::cout << "Lates: ";
//        std::cin >> lates;
//
//        double earned = (lines / 100) * 50;
//        double fine = (lates / 3) * 20;
//        double total = earned - fine;
//
//        if (total < 0) total = 0;
//        std::cout << "Salary: " << total << "$" << std::endl;
//    }
//    return 0;
//}