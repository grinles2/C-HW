#include <iostream>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define SQUARE(x) ((x) * (x))

#define POWER(base, exp) (pow((base), (exp)))

#define IS_EVEN(n) (((n) % 2) == 0)

#define IS_ODD(n) (((n) % 2) != 0)

int main() {
    // 1
    /*
    int a = 5, b = 8;
    std::cout << "Min: " << MIN(a, b) << std::endl;
    */

    // 2
    /*
    int a = 5, b = 8;
    std::cout << "Max: " << MAX(a, b) << std::endl;
    */

    // 3
    /*
    int num = 4;
    std::cout << "Square: " << SQUARE(num) << std::endl;
    */

    // 4
    /*
    double base = 2.0;
    int exp = 3;
    std::cout << "Power: " << POWER(base, exp) << std::endl;
    */

    // 5
    /*
    int num = 4;
    if (IS_EVEN(num)) {
        std::cout << num << " is even." << std::endl;
    }
    */

    // 6
    
    int num = 5;
    if (IS_ODD(num)) {
        std::cout << num << " is odd." << std::endl;
    }
    

    return 0;
}