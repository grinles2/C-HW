#include <iostream>

/*

Комментарий к проекту для вас учитель:

Использывал do в задании в задании 2 чтоб цикл гарантированно получил 1 итерацию
использывал endl вместо '\n' потому что мне авто-форматирование в IDE так захотела и оно работает
Цикл Shaker я нашел в интернете, спасибо Google AI ( да я не сразу заметил что вы вставили ссылку на википедию )


*/














int main() {
    // Завдання 1
    // Обрати два алгоритми сортування (що не реалізовували до цього) та реалізувати
    /*
    const int SIZE = 7;
    int arr1[SIZE] = { 34, 2, -10, 8, 5, 1, 19 };
    int arr2[SIZE] = { 34, 2, -10, 8, 5, 1, 19 };

    int left = 0;
    int right = SIZE - 1;
    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr1[i] > arr1[i + 1]) {
                int temp = arr1[i];
                arr1[i] = arr1[i + 1];
                arr1[i + 1] = temp;
            }
        }
        right--;

        for (int i = right; i > left; i--) {
            if (arr1[i - 1] > arr1[i]) {
                int temp = arr1[i - 1];
                arr1[i - 1] = arr1[i];
                arr1[i] = temp;
            }
        }
        left++;
    }

    std::cout << "Shaker sort: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr1[i] << " ";
    std::cout << std::endl;
    int gap = SIZE;
    bool swapped = true;
    while (gap > 1 || swapped) {
        gap = (gap * 10) / 13;
        if (gap < 1) gap = 1;

        swapped = false;
        for (int i = 0; i < SIZE - gap; i++) {
            if (arr2[i] > arr2[i + gap]) {
                int temp = arr2[i];
                arr2[i] = arr2[i + gap];
                arr2[i + gap] = temp;
                swapped = true;
            }
        }
    }

    std::cout << "Comb sort: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr2[i] << " ";
    std::cout << std::endl;
    */


    // Завдання 2
    // Написати програму "успішність". Користувач вводить 10 оцінок студента. Реалізувати меню:
    // - Виведення оцінок
    // - Перескладання іспиту
    // - Чи виходить стипендія (середній бал >= 10.7)
    /*
    


    int grades[10];
    std::cout << "Enter 10 grades: ";
    for (int i = 0; i < 10; i++) {
        std::cin >> grades[i];
    }

    int choice;
    do {
        std::cout << "\n1. Show grades\n2. Retake exam\n3. Check scholarship\n0. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Grades: ";
            for (int i = 0; i < 10; i++) std::cout << grades[i] << " ";
            std::cout << std::endl;
        }
        else if (choice == 2) {
            int num, new_grade;
            std::cout << "Enter element number (1-10): ";
            std::cin >> num;
            if (num >= 1 && num <= 10) {
                std::cout << "Enter new grade: ";
                std::cin >> new_grade;
                grades[num - 1] = new_grade;
                std::cout << "Done!\n";
            } else {
                std::cout << "Wrong number!\n";
            }
        }
        else if (choice == 3) {
            double sum = 0;
            for (int i = 0; i < 10; i++) sum += grades[i];
            double avg = sum / 10.0;
            std::cout << "Average: " << avg << std::endl;
            if (avg >= 10.7) {
                std::cout << "Scholarship APPROVED!" << std::endl;
            } else {
                std::cout << "No scholarship. Vy loch, moi pozdravlenia" << std::endl;
            }
        }
    } while (choice != 0);
    */


    // Завдання 3
    // Швидке сортування (Quick Sort) без окремої функції (ітеративний спосіб зі стеком вбудованих індексів)
    /*
    const int SIZE = 8;
    int arr[SIZE] = { 12, -5, 7, 0, 15, -2, 4, 9 };

    std::cout << "Before QuickSort: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;

    int stack[SIZE];
    int top = -1;

    stack[++top] = 0;
    stack[++top] = SIZE - 1;

    while (top >= 0) {
        int right = stack[top--];
        int left = stack[top--];

        int pivot = arr[(left + right) / 2];
        int i = left, j = right;

        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;
            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        if (left < j) {
            stack[++top] = left;
            stack[++top] = j;
        }
        if (i < right) {
            stack[++top] = i;
            stack[++top] = right;
        }
    }

    std::cout << "After QuickSort: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    */


    // Завдання 4
    // Відсортувати перші дві третини масиву за зростанням, якщо середнє арифметичне > 0;
    // інакше — першу третину. Іншу частину масиву розташувати у зворотному порядку.
    
    const int SIZE = 9;
    int arr[SIZE] = { 4, -2, 10, 1, -5, 9, 7, 2, 0 };

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    double avg = sum / SIZE;

    int sort_count;
    if (avg > 0) {
        sort_count = (SIZE * 2) / 3; 
    } else {
        sort_count = SIZE / 3;       
    }

    for (int i = 0; i < sort_count - 1; i++) {
        for (int j = 0; j < sort_count - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int left = sort_count;
    int right = SIZE - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    std::cout << "Result: ";
    for (int i = 0; i < SIZE; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}