#include <iostream>
#include <cstring>

// 1
struct Complex {
    double real;
    double imag;
};

Complex addComplex(Complex c1, Complex c2) {
    return { c1.real + c2.real, c1.imag + c2.imag };
}

Complex subComplex(Complex c1, Complex c2) {
    return { c1.real - c2.real, c1.imag - c2.imag };
}

Complex mulComplex(Complex c1, Complex c2) {
    return {
        c1.real * c2.real - c1.imag * c2.imag,
        c1.real * c2.imag + c1.imag * c2.real
    };
}

Complex divComplex(Complex c1, Complex c2) {
    double denom = c2.real * c2.real + c2.imag * c2.imag;
    return {
        (c1.real * c2.real + c1.imag * c2.imag) / denom,
        (c1.imag * c2.real - c1.real * c2.imag) / denom
    };
}

// 2
struct Book {
    char title[50];
    char author[50];
    char publisher[50];
    char genre[30];
};

void editBook(Book& b) {
    std::cout << "Enter new title: ";
    std::cin >> b.title;
    std::cout << "Enter new author: ";
    std::cin >> b.author;
    std::cout << "Enter new publisher: ";
    std::cin >> b.publisher;
    std::cout << "Enter new genre: ";
    std::cin >> b.genre;
}

void printAllBooks(const Book books[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ". Title: " << books[i].title
            << ", Author: " << books[i].author
            << ", Publisher: " << books[i].publisher
            << ", Genre: " << books[i].genre << std::endl;
    }
}

void searchByAuthor(const Book books[], int size, const char* author) {
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].author, author) == 0) {
            std::cout << "Found: " << books[i].title << " by " << books[i].author << std::endl;
        }
    }
}

void searchByTitle(const Book books[], int size, const char* title) {
    for (int i = 0; i < size; i++) {
        if (strcmp(books[i].title, title) == 0) {
            std::cout << "Found: " << books[i].title << " (Publisher: " << books[i].publisher << ")" << std::endl;
        }
    }
}

void sortBooksByTitle(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].title, books[j + 1].title) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void sortBooksByAuthor(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].author, books[j + 1].author) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

void sortBooksByPublisher(Book books[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(books[j].publisher, books[j + 1].publisher) > 0) {
                Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

// 3
union CarNumber {
    int digits;
    char text[9];
};

struct Car {
    char color[30];
    char model[30];
    bool isNumericNumber;
    CarNumber number;
};

void fillCar(Car& c) {
    std::cout << "Enter color: ";
    std::cin >> c.color;
    std::cout << "Enter model: ";
    std::cin >> c.model;
    std::cout << "Is number numeric? (1 - yes, 0 - no): ";
    std::cin >> c.isNumericNumber;
    if (c.isNumericNumber) {
        std::cout << "Enter 5-digit number: ";
        std::cin >> c.number.digits;
    }
    else {
        std::cout << "Enter text number (up to 8 chars): ";
        std::cin >> c.number.text;
    }
}

void printCar(const Car& c) {
    std::cout << "Model: " << c.model << ", Color: " << c.color << ", Number: ";
    if (c.isNumericNumber) {
        std::cout << c.number.digits;
    }
    else {
        std::cout << c.number.text;
    }
    std::cout << std::endl;
}

void printAllCars(const Car cars[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << ". ";
        printCar(cars[i]);
    }
}

void searchCarByNumber(const Car cars[], int size, int numDigits) {
    for (int i = 0; i < size; i++) {
        if (cars[i].isNumericNumber && cars[i].number.digits == numDigits) {
            printCar(cars[i]);
        }
    }
}

void searchCarByNumber(const Car cars[], int size, const char* textNum) {
    for (int i = 0; i < size; i++) {
        if (!cars[i].isNumericNumber && strcmp(cars[i].number.text, textNum) == 0) {
            printCar(cars[i]);
        }
    }
}

// 4
struct Student {
    char surname[50];
    char group[20];
    int grades[5];
};

Student* resizeStudents(Student* arr, int oldSize, int newSize) {
    Student* temp = new Student[newSize];
    int limit = (oldSize < newSize) ? oldSize : newSize;
    for (int i = 0; i < limit; i++) {
        temp[i] = arr[i];
    }
    delete[] arr;
    return temp;
}

void printHonorStudents(const Student students[], int size) {
    std::cout << "Honor students (>75% excellent grades [5]):\n";
    for (int i = 0; i < size; i++) {
        int count5 = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] == 5) count5++;
        }
        if ((double)count5 / 5.0 > 0.75) {
            std::cout << students[i].surname << " (Group: " << students[i].group << ")\n";
        }
    }
}

void printLowAchievers(const Student students[], int size) {
    std::cout << "Low achievers (>50% grades 2 and 3):\n";
    for (int i = 0; i < size; i++) {
        int countBad = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] == 2 || students[i].grades[j] == 3) {
                countBad++;
            }
        }
        if ((double)countBad / 5.0 > 0.5) {
            std::cout << students[i].surname << " (Group: " << students[i].group << ")\n";
        }
    }
}


int main() {
    // 1
    /*
    Complex c1 = {3.0, 2.0};
    Complex c2 = {1.0, 4.0};
    Complex sum = addComplex(c1, c2);
    std::cout << "Sum: " << sum.real << " + " << sum.imag << "i" << std::endl;
    */

    // 2
    /*
    const int BOOK_COUNT = 10;
    Book library[BOOK_COUNT];
    // 
    // printAllBooks(library, BOOK_COUNT);
    */

    // 3
    /*
    const int CAR_COUNT = 10;
    Car cars[CAR_COUNT];
    // 
    // printAllCars(cars, CAR_COUNT);
    */

    // 4
    
    int studentCount = 2;
    Student* students = new Student[studentCount];
    // students = resizeStudents(students, studentCount, 3);
    // studentCount = 3;
    delete[] students;
    

    return 0;
}