#include <iostream>

enum Status {
    Online, Offline, Unknown
};

int main()
{
    Status userStatus = Status::Online;

    switch (userStatus) {
    case Online: std::cout << "User is online!\n";break;
    case Offline: std::cout << "User is offline!\n";break;
    case Unknown: std::cout << "User status is unknown!\n";break;
    }

    //int num1, num2;

    //std::cin >> num1 >> num2;

    //if (num1 == num2) {
    //    std::cout << "Numbers are equal\n";
    //}
    //else if (num1 > num2) {
    //    std::cout << "First number is bigger\n";
    //}
    //else {
    //    std::cout << "Second number is bigger\n";
    //}

    // Оператори порівняння:
    // ==, !=
    // <, >
    // <=, >=

    //int age = 0;
    //std::cout << "Enter your age: ";
    //std::cin >> age;

    //std::cout << (age >= 18 ? "You can vote!" : "You can't vote!") << '\n';

    //int weekDay = 0;
    //std::cout << "Enter week day number: ";
    //std::cin >> weekDay;

    //switch (weekDay) {
    //case 1: 
    //    std::cout << "MON\n";
    //    break;
    //case 2: 
    //    std::cout << "TUE\n"; break;
    //case 3: 
    //    std::cout << "WED\n"; break;
    //case 4: 
    //    std::cout << "THU\n"; break;
    //case 5: 
    //    std::cout << "FRI\n"; break;
    //case 6: 
    //    std::cout << "SAT\n"; break;
    //case 7: 
    //    std::cout << "SUN\n"; break;
    //default: std::cout << "Incorrect week day number!\n";
    //}

    double num1, num2;
    char action;

    std::cin >> num1 >> num2 >> action;

    switch (action) {
    case '+':std::cout << num1 + num2 << '\n'; break;
    case '-':std::cout << num1 - num2 << '\n'; break;
    case '*':std::cout << num1 * num2 << '\n'; break;
    case '/':std::cout << num1 / num2 << '\n'; break;
    default:std::cout << "Incorrect operation!\n";
    }
}