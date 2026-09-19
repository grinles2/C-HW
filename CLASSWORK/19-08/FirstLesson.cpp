// FirstLesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

enum Status {
    Online, Offline
};

int main()
{
    const float PI = 3.14f;
    //PI = 2.45;


    int Online = 10;
    Status userStatus = Status::Online;
    //userStatus = Waiting;

    cout << userStatus << '\n';

    //MY_NAMESPACE::main();

    cout << "Hello World!\n";
    cout << "My name is Vova\n";

    // Змінна - іменована область пам'яті, 
    // яка дозволяє зберігати дані певного типу
    // та змінювати значення протягом виконання 
    // програми.

    // Статична та явна типізація 
    int number = 0;

    cout << number << '\n' << "My name is Vova\n";

    /*
    Арифметичні оператори
    1) + - * / %
    2)
      ++ - інкремент
      -- - декремент
    */

    number = 10;
    // постфіксна форма
    //number++; // інкремент
    //number--; // декремент
    // префіксна форма
    //++number;
    //--number;
    cout << ++number << '\n';
    //cout << number << '\n';

    // str, int, float, bool

    // Фундаментальні типи
    /*
      1. Цілочисельні типи даних
      - short: 2 bytes 0000 0000 0000 0000
      - int: minimum 2 byte or 4 bytes
      - long: minimum 4 bytes
      - long long: 8 bytes
      unsigned: беззнаковий тип
      2. Числа з точкою що плаває (дробові числа)
      - float: 4 bytes
      - double: 8 bytes
      3. Символьний тип
      - char: 1 byte
      4. Логічний тип
      - bool: 1 byte (true або false)
    */

    char symbol = 'l';
    symbol = 134;

    cout << symbol << '\n';

    float fNumber = 76.54f;
    double dNumber = 4.345252524534;

    unsigned short shortNumber = 65000;
    cout << shortNumber << '\n';

    cout << sizeof(int) << '\n' << sizeof(long);

    // Переделка типов

	int number = (int)'t'; // явне перетворення типів
    cout << (char)153 << '\n';

    int num = 3.45;
	cout << num << '\n';
}






