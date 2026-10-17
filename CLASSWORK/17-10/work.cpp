#include <iostream>

void swap(int* a, int* b) { // передача аргументів за адресою
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << *(arr + i) << ' ';
	}
}

int* returnIntPtr() {
	int number = 10;
	return &number;
}

double* returnDoublePtr() {
	double number = 1000.543;
	return &number;
}

void arrSumMult(const int* const arr, int size, int* sumP, int* multP) {
	int sum = 0;
	int mult = 1;
	for (int i = 0; i < size; ++i) {
		sum += *(arr + i);
		mult *= *(arr + i);
	}
	*sumP = sum;
	*multP = mult;
}

int main()
{
	int number = 10;
	int* const ptr = &number;
	std::cout << *ptr << '\n';
	*ptr = 15;
	int number2 = 90;
	//ptr = &number2;

	//const double PI = 3.14;

	//

	//const double* piPtr = &PI; // покажчик на константу

	//std::cout << *piPtr << '\n';
	////*piPtr = 43.6;
	//double num = 10.5;

	//piPtr = &num;
	//*piPtr = 23.5;

	//int* ptr = nullptr;

	//if (ptr != nullptr)
	//{
	// std::cout << *ptr << '\n';
	//}
	//else {
	// std::cout << "Ptr is empty\n";
	//}

	//int sum, mult;
	//int arr[] = { 2, 4, 10 };
	//arrSumMult(arr, 3, &sum, &mult);

	//std::cout << sum << ' ' << mult;

	//int* ptr = returnIntPtr();
	//double* ptrD = returnDoublePtr();

	//std::cout << *ptr << '\n';

	//int arr[] = { 10, 14 };

	//int* ptr = arr;

	//std::cout << *(ptr - 1) << '\n';

	//printArr(arr, 2);

	//std::cout << ptr[1] << '\n';

	//int a = 10, b = 12;
	//std::cout << a << ' ' << b << '\n';
	//swap(&a, &b);
	//std::cout << a << ' ' << b << '\n';

	//int number = 10;

	//std::cout << &number << '\n';

	//int* ptr = &number;
	//std::cout << ptr << '\n';

	//std::cout << *ptr << '\n';
	//std::cout << &ptr << '\n';
	//std::cout << sizeof(ptr) << '\n';

	//*ptr = 15;

	//std::cout << number << '\n';

	//int arr[] = { 10, 13, 14 };

	//std::cout << arr << '\n';
	//std::cout << main << '\n';
}