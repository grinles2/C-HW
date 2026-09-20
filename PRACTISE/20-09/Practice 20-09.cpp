//Завдання 1
//Користувач вводить число.Визначити, чи є воно парним.
//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Type in number: ";
//    cin >> n;
//    if (n % 2 == 0) {
//        cout << "Number is even." << endl;
//    } else {
//        cout << "Number is odd." << endl;
//    }
//    return 0;
//}


//Завдання 2 
//Користувач вводить два числа.Вивести на екран менше з цих чисел

//#include <iostream>
//int main() {
//	int a, b;
//	std::cout << "Type in two numbers: ";
//	std::cin >> a >> b;
//	if (a < b) {
//		std::cout << "The smaller number is: " << a << std::endl;
//	}
//	else if (b < a) {
//		std::cout << "The smaller number is: " << b << std::endl;
//	}
//	else {
//		std::cout << "Both numbers are equal." << std::endl;
//	}
//	return 0;
//}

// Завдання 3 
//Користувач вводить число.Визначити додатне це число, від'ємне чи дорівнює нулю

//#include <iostream>
//int main() {
//	int n;
//	std::cout << "Type in a number: ";
//	std::cin >> n;
//	if (n > 0) {
//		std::cout << "The number is positive." << std::endl;
//	}
//	else if (n < 0) {
//		std::cout << "The number is negative." << std::endl;
//	}
//	else {
//		std::cout << "The number is zero." << std::endl;
//	}
//	return 0;
//}

//Завдання 4 
//Користувач вводить два числа.Визначити, чи рівні ці числа, і якщо ні, вивести їх на екран у порядку зростання.

//#include <iostream>
//int main() {
//	int a, b;
//	std::cout << "Type in two numbers: ";
//	std::cin >> a >> b;
//	if (a == b) {
//		std::cout << "The numbers are equal." << std::endl;
//	}
//	else {
//		if (a < b) {
//			std::cout << "Numbers in ascending order: " << a << ", " << b << std::endl;
//		}
//		else {
//			std::cout << "Numbers in ascending order: " << b << ", " << a << std::endl;
//		}
//	}
//	return 0;
//}

//Завдання 5
// Користувач із клавіатури вводить 5 оцінок студента. Визначити, чи допущено студента до іспиту. Студент отримує допуск, якщо його середній бал 4 бали і вище.

//#include <iostream>
//int main() {
//	int grades[5];
//	int sum = 0;
//	std::cout << "Type in 5 grades: ";
//	for (int i = 0; i < 5; ++i) {
//		std::cin >> grades[i];
//		sum += grades[i];
//	}
//	double average = static_cast<double>(sum) / 5;
//	if (average >= 4.0) {
//		std::cout << "The student is allowed to take the exam." << std::endl;
//	}
//	else {
//		std::cout << "The student is not allowed to take the exam." << std::endl;
//	}
//	return 0;
//}

// Завдання 6
// Користувач вводить із клавіатури число. Якщо воно парне, помножити його на три, інакше — поділити на два. Результат вивести на екран.

//#include <iostream>
//int main() {
//	int n;
//	std::cout << "Type in a number: ";
//	std::cin >> n;
//	if (n % 2 == 0) {
//		n *= 3;
//		std::cout << "The number is even. After multiplying by 3: " << n << std::endl;
//	}
//	else {
//		n /= 2;
//		std::cout << "The number is odd. After dividing by 2: " << n << std::endl;
//	}
//	return 0;
//}

// Завдання 7
//Написати програму-калькулятор. Користувач вводить два числа і вибирає арифметичну дію. Вивести на екран результат.

//#include <iostream>
//int main() {
//	double num1, num2;
//	char operation;
//	std::cout << "Type in two numbers: ";
//	std::cin >> num1 >> num2;
//	std::cout << "Choose an operation (+, -, *, /): ";
//	std::cin >> operation;
//	switch (operation) {
//	case '+':
//		std::cout << "Result: " << num1 + num2 << std::endl;
//		break;
//	case '-':
//		std::cout << "Result: " << num1 - num2 << std::endl;
//		break;
//	case '*':
//		std::cout << "Result: " << num1 * num2 << std::endl;
//		break;
//	case '/':
//		if (num2 != 0) {
//			std::cout << "Result: " << num1 / num2 << std::endl;
//		}
//		else {
//			std::cout << "Error: Division by zero!" << std::endl;
//		}
//		break;
//	default:
//		std::cout << "Invalid operation!" << std::endl;
//	}
//	return 0;
//}

// завдання 8
// Написати програму, яка за вибором користувача зводить введене ним число в ступінь від нульового до сьомого включно.


//#include <iostream>
//int main() {
//	double base;
//	int exponent;
//	std::cout << "Type in a number: ";
//	std::cin >> base;
//	std::cout << "Type in an exponent (0 to 7): ";
//	std::cin >> exponent;
//	if (exponent < 0 || exponent > 7) {
//		std::cout << "Exponent must be between 0 and 7." << std::endl;
//		return 1;
//	}
//	double result = 1.0;
//	for (int i = 0; i < exponent; ++i) {
//		result *= base;
//	}
//	std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;
//	return 0;
//}









