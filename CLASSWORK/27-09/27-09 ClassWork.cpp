// 27-09 ClassWork.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int numbers[5] = { 1, 2, 3, 4, 5 };

	numbers[2] = 10;

	std::cout << numbers[2];

	std::cout << numbers << '\n'; // Адрес массива

	for (int i = 0; i < 5; i++)
	{
		std::cout << numbers[i] << ' ';   // Адрес в массиве = Адресс + ( индекс * размер )
	}
}
