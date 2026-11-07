#include "function.h"


void FillArrayInt(int* arr, int size, int minVal, int maxVal) {
    for (int i = 0; i < size; ++i) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

void ShowArrayInt(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int MinElementInt(const int* arr, int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int MaxElementInt(const int* arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayInt(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditArrayInt(int* arr, int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}



void FillArrayDouble(double* arr, int size, double minVal, double maxVal) {
    for (int i = 0; i < size; ++i) {
        arr[i] = minVal + (double)rand() / RAND_MAX * (maxVal - minVal);
    }
}

void ShowArrayDouble(const double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

double MinElementDouble(const double* arr, int size) {
    double min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

double MaxElementDouble(const double* arr, int size) {
    double max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayDouble(double* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditArrayDouble(double* arr, int size, int index, double newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}



void FillArrayChar(char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 'a' + rand() % 26; 
    }
}

void ShowArrayChar(const char* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

char MinElementChar(const char* arr, int size) {
    char min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

char MaxElementChar(const char* arr, int size) {
    char max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void SortArrayChar(char* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void EditArrayChar(char* arr, int size, int index, char newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}