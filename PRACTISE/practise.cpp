//Користувач вводить номер року. Необхідно написати програму, яка виведе кількість днів у цьому році.
// Під час написання програми використовувати лінійний алгоритм (конструкції умовного вибору не використовувати).
// Наприклад, користувач ввів рік 2004, програма повідомляє, що в цьому році 366 днів у такій формі:


#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	int days = 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
	cout << "In the year " << year << ", there are " << days << " days." << endl;
	return 0;
}


//Користувач вводить із клавіатури грошову суму в гривнях і копійках (гривні та копійки вводяться в різні змінні).
// Сума може бути введена як правильно (наприклад 19 грн. 90 коп.), так і неправильно (наприклад 22 грн. 978 коп.).
// Написати програму, яка, використовуючи тільки лінійний алгоритм, здійснить коригування введеної грошової суми в правильну форму.

int main() {
	int hryvnias, kopecks;
	cout << "Enter amount in hryvnias and kopecks: ";
	cin >> hryvnias >> kopecks;
	// Correct the amount
	hryvnias += kopecks / 100;
	kopecks = kopecks % 100;
	cout << "Corrected amount: " << hryvnias << " hrn. " << kopecks << " kop." << endl;
	return 0;
}


// Написати програму обчислення об'єму паралелепіпеда. Нижче наведено рекомендований вигляд екрана під час виконання програми.

int main() {
	float length, width, height;
	cout << "Enter the length of the parallelepiped: ";
	cin >> length;
	cout << "Enter the width of the parallelepiped: ";
	cin >> width;
	cout << "Enter the height of the parallelepiped: ";
	cin >> height;
	float volume = length * width * height;
	cout << "The volume of the parallelepiped is: " << volume << endl;
	return 0;
}