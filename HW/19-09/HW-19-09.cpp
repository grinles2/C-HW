// Завдання 1
// Користувач вводить час у секундах. Необхідно написати програму, яка переведе введені користувачем секунди в години, хвилини, секунди і виведе їх на екран.

//#include <iostream>
//int main()
//{
//    int seconds;
//    std::cout << "Seconds: ";
//    std::cin >> seconds;
//
//    int hours = seconds / 3600;
//    seconds %= 3600;
//    int minutes = seconds / 60;
//    seconds %= 60;
//    
//    std::cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << std::endl;
//    return 0;
//}


// Завдання 2
// Написати програму, яка перетворює введене з клавіатури дробове число в грошовий формат. Наприклад, число 12,5 має бути перетворено до вигляду 12 грн. 50 шагів.

//#include <iostream>
//int main() {
//    double n;
//    std::cout << "Enter number: ";
//    std::cin >> n;
//
//    int grn = (int)n;
//    int kop = (int)((n - grn) * 100);
//
//    std::cout << grn << " грн. " << kop << " шагів." << std::endl;
//    return 0;
//}


// Завдання 3
// Написати програму, що обчислює, з якою швидкістю бігун пробіг дистанцію.

//#include <iostream>
//int main() {
//    double dist, time;
//    std::cout << "Distance (m): ";
//    std::cin >> dist;
//    std::cout << "Time (min.sec): ";
//    std::cin >> time;
//
//    int min = (int)time;
//    int sec = (int)((time - min) * 100);
//    int total_sec = min * 60 + sec;
//
//    double speed = (dist / 1000.0) / (total_sec / 3600.0);
//
//    std::cout << "Dist: " << dist << " m" << std::endl;
//    std::cout << "Time: " << min << " min " << sec << " sec = " << total_sec << " sec" << std::endl;
//    std::cout << "Speed: " << speed << " km/h" << std::endl;
//    return 0;
//}


// Завдання 4
// Написати програму, яка перетворює введене користувачем кількість днів на кількість повних тижнів і днів, що залишилися.

//#include <iostream>
//int main() {
//    int days;
//    std::cout << "Enter days: ";
//    std::cin >> days;
//
//    int weeks = days / 7;
//    int rem_days = days % 7;
//
//    std::cout << weeks << " weeks and " << rem_days << " days" << std::endl;
//    return 0;
//}


// Завдання 5
// Користувач вводить відстань до аеропорту та час, за який потрібно доїхати. Обчислити швидкість, з якою йому потрібно їхати.

//#include <iostream>
//int main() {
//    double dist, time;
//    std::cout << "Distance: ";
//    std::cin >> dist;
//    std::cout << "Time: ";
//    std::cin >> time;
//
//    double speed = dist / time;
//    std::cout << "Speed: " << speed << std::endl;
//    return 0;
//}


// Завдання 6
// Користувач вводить відстань, витрату бензину на 100 км і вартість трьох видів бензину. Вивести на екран порівняльну таблицю з вартістю поїздки на різних видах бензину.

//#include <iostream>
//int main() {
//    double dist, расход, p1, p2, p3;
//    std::cout << "Distance: ";
//    std::cin >> dist;
//    std::cout << "Cons per 100km: ";
//    std::cin >> расход;
//    std::cout << "Price 1: ";
//    std::cin >> p1;
//    std::cout << "Price 2: ";
//    std::cin >> p2;
//    std::cout << "Price 3: ";
//    std::cin >> p3;
//
//    double benzin = (dist * расход) / 100;
//
//    std::cout << "Cost 1: " << benzin * p1 << std::endl;
//    std::cout << "Cost 2: " << benzin * p2 << std::endl;
//    std::cout << "Cost 3: " << benzin * p3 << std::endl;
//    return 0;
//}


// Завдання 7
// Користувач вводить час у секундах, що минув від початку дня. Вивести на екран поточний час у годинах, хвилинах і секундах. Порахувати скільки годин, хвилин і секунд залишилося до опівночі.

//#include <iostream>
//int main() {
//    int sec;
//    std::cout << "Seconds from start: ";
//    std::cin >> sec;
//
//    int h = (sec / 3600) % 24;
//    int m = (sec % 3600) / 60;
//    int s = sec % 60;
//    std::cout << "Time: " << h << ":" << m << ":" << s << std::endl;
//
//    int left = 86400 - (sec % 86400);
//    int lh = left / 3600;
//    int lm = (left % 3600) / 60;
//    int ls = left % 60;
//    std::cout << "Left: " << lh << ":" << lm << ":" << ls << std::endl;
//    return 0;
//}


// Завдання 8
// Користувач вводить час у секундах, що минув від початку робочого дня. Порахувати скільки цілих годин йому залишилося сидіти на роботі, якщо робочий день - 8 годин.

//#include <iostream>
//int main() {
//    int sec;
//    std::cout << "Seconds: ";
//    std::cin >> sec;
//
//    int work_sec = 8 * 3600;
//    int left = work_sec - sec;
//    int hours = left / 3600;
//
//    std::cout << "Hours left: " << hours << std::endl;
//    return 0;
//}