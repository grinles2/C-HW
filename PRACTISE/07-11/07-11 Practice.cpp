#include <iostream>

// 1
void printBits(uint8_t word) {
    for (int i = 7; i >= 0; i--) {
        std::cout << ((word >> i) & 1);
    }
    std::cout << std::endl;
}

// 2
bool isEven(uint8_t word) {
    return (word & 1) == 0;
}

// 3
void clearBit(uint8_t* word, uint8_t n) {
    *word = *word & ~(1u << n);
}

// 4
void setBit(uint8_t* word, uint8_t n) {
    *word = *word | (1u << n);
}

// 5
void toggleBit(uint8_t* word, uint8_t n) {
    *word = *word ^ (1u << n);
}

// 6
void countBits(uint8_t word, int& ones, int& zeros) {
    ones = 0;
    zeros = 0;
    for (int i = 0; i < 8; i++) {
        if ((word >> i) & 1) {
            ones++;
        }
        else {
            zeros++;
        }
    }
}

// 7
bool isPowerOfTwo(uint8_t word) {
    return (word != 0) && ((word & (word - 1)) == 0);
}

// 8
int getLowestSetBitIndex(uint8_t word) {
    if (word == 0) return -1;
    int index = 0;
    while ((word & 1) == 0) {
        word >>= 1;
        index++;
    }
    return index;
}

// 9
void clearLowestSetBit(uint8_t* word) {
    *word = *word & (*word - 1);
}


int main() {
    // 1
    /*
    uint8_t val = 5;
    std::cout << "Bits of " << (int)val << ": ";
    printBits(val);
    */

    // 2
    /*
    
    uint8_t val = 4;
    if (isEven(val)) {
        std::cout << (int)val << " is even\n";
    } else {
        std::cout << (int)val << " is odd\n";
    }
    */

    // 3
    /*
    uint8_t word = 5; // 00000101
    clearBit(&word, 2);
    */

    // 4
    /*
    uint8_t word = 4; // 00000100
    setBit(&word, 0);
    */

    // 5
    /*
    uint8_t word = 4; // 00000100
    toggleBit(&word, 2);
    */

    // 6
    /*
    uint8_t word = 748494; 
    int ones = 0, zeros = 0;
    countBits(word, ones, zeros);
    std::cout << "Ones: " << ones << ", Zeros: " << zeros << std::endl;
    */

    // 7
    /*
    uint8_t word = 64;
    if (isPowerOfTwo(word)) {
        std::cout << (int)word << " is a power of two\n";
    }
    */

    // 8
    /*
    uint8_t word = 12; // 00001100 
    std::cout << "Lowest set bit index: " << getLowestSetBitIndex(word) << std::endl;
    */

    // 9
    
    uint8_t word = 12; // 00001100
    clearLowestSetBit(&word); //00001000
    

    return 0;
}