#include <iostream>
#include <cmath>
#include <cstring>

// 1
struct Point {
    double x;
    double y;
};

double calculateDistance(Point p1, Point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

// 2
struct Fraction {
    int num;
    int den;
};

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a < 0 ? -a : a;
}

Fraction simplify(Fraction f) {
    if (f.den == 0) return f;
    int common = gcd(f.num, f.den);
    f.num /= common;
    f.den /= common;
    if (f.den < 0) {
        f.num = -f.num;
        f.den = -f.den;
    }
    return f;
}

Fraction addFractions(Fraction f1, Fraction f2) {
    Fraction res;
    res.num = f1.num * f2.den + f2.num * f1.den;
    res.den = f1.den * f2.den;
    return simplify(res);
}

Fraction subFractions(Fraction f1, Fraction f2) {
    Fraction res;
    res.num = f1.num * f2.den - f2.num * f1.den;
    res.den = f1.den * f2.den;
    return simplify(res);
}

Fraction mulFractions(Fraction f1, Fraction f2) {
    Fraction res;
    res.num = f1.num * f2.num;
    res.den = f1.den * f2.den;
    return simplify(res);
}

Fraction divFractions(Fraction f1, Fraction f2) {
    Fraction res;
    res.num = f1.num * f2.den;
    res.den = f1.den * f2.num;
    return simplify(res);
}

// 3
struct WashingMachine {
    char brand[50];
    char color[30];
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    int heatingTemp;
};

// 4
struct Animal {
    char name[50];
    char species[50];
    char nickname[50];
};

void fillAnimal(Animal& a) {
    std::cout << "Enter animal name: ";
    std::cin >> a.name;
    std::cout << "Enter species: ";
    std::cin >> a.species;
    std::cout << "Enter nickname: ";
    std::cin >> a.nickname;
}

void printAnimal(const Animal& a) {
    std::cout << "Name: " << a.name << ", Species: " << a.species << ", Nickname: " << a.nickname << std::endl;
}

void animalVoice(const Animal& a) {
    std::cout << a.nickname << " says: ";
    if (strcmp(a.species, "dog") == 0 || strcmp(a.species, "Dog") == 0) {
        std::cout << "Woof" << std::endl;
    } else if (strcmp(a.species, "cat") == 0 || strcmp(a.species, "Cat") == 0) {
        std::cout << "Meow" << std::endl;
    } else {
        std::cout << "HTML is a programming language🤔" << std::endl; // Ну вы поняли? Типо те кто говорят что HTMl - язык программирования они животные неизвестные :) 
    }
}

// 5
union DualInt {
    signed int signedVal;
    unsigned int unsignedVal;
};

// 6
struct StudentGrades {
    char fullName[100];
    unsigned int g1 : 1;
    unsigned int g2 : 1;
    unsigned int g3 : 1;
    unsigned int g4 : 1;
    unsigned int g5 : 1;
    unsigned int g6 : 1;
    unsigned int g7 : 1;
    unsigned int g8 : 1;
    unsigned int g9 : 1;
    unsigned int g10 : 1;
};

int main() {
    // 1
    /*
    Point p1 = {0.0, 0.0};
    Point p2 = {3.0, 4.0};
    double dist = calculateDistance(p1, p2);
    std::cout << "Distance: " << dist << std::endl;
    */

    // 2
    /*
    Fraction f1 = {1, 2};
    Fraction f2 = {1, 3};
    Fraction sum = addFractions(f1, f2);
    std::cout << "Sum: " << sum.num << "/" << sum.den << std::endl;
    */

    // 3
    /*
    WashingMachine wm = {"Bosch", "White", 60.0, 55.0, 85.0, 2000, 1200, 90};
    std::cout << "Washing machine brand: " << wm.brand << std::endl;
    */

    // 4
    /*
    Animal myAnimal;
    fillAnimal(myAnimal);
    printAnimal(myAnimal);
    animalVoice(myAnimal);
    */

    // 5
    /*
    DualInt d;
    d.signedVal = -10;
    std::cout << "Signed: " << d.signedVal << ", Unsigned: " << d.unsignedVal << std::endl;
    */

    // 6
    /*
    StudentGrades student = {"Ivanov Ivan", 1, 1, 0, 1, 1, 1, 0, 1, 1, 1};
    std::cout << "Student: " << student.fullName << std::endl;
    */

    return 0;
}
