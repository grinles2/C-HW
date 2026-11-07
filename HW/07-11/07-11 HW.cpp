#include <iostream>
#include <cstring>

// 1
char* intToBinary(int num) {
    char* binStr = new char[33];
    binStr[32] = '\0';
    for (int i = 31; i >= 0; i--) {
        binStr[31 - i] = ((num >> i) & 1) ? '1' : '0';
    }
    return binStr;
}

// 2
char* intToHex(int num) {
    char* hexStr = new char[9];
    hexStr[8] = '\0';
    char hexDigits[] = "0123456789ABCDEF";
    unsigned int uNum = static_cast<unsigned int>(num);
    for (int i = 7; i >= 0; i--) {
        hexStr[i] = hexDigits[uNum & 0xF];
        uNum >>= 4;
    }
    return hexStr;
}

// 3
int binaryToInt(const char* binStr) {
    int result = 0;
    while (*binStr != '\0') {
        result = result * 2 + (*binStr - '0');
        binStr++;
    }
    return result;
}

// 4
int hexToInt(const char* hexStr) {
    int result = 0;
    while (*hexStr != '\0') {
        char c = *hexStr;
        int value = 0;
        if (c >= '0' && c <= '9') value = c - '0';
        else if (c >= 'A' && c <= 'F') value = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f') value = c - 'a' + 10;

        result = result * 16 + value;
        hexStr++;
    }
    return result;
}


int main() {
    // 1
    /*
    int n = 42;
    char* bin = intToBinary(n);
    std::cout << "Binary: " << bin << std::endl;
    delete[] bin;
    */

    // 2
    /*
    int n = 255;
    char* hex = intToHex(n);
    std::cout << "Hex: " << hex << std::endl;
    delete[] hex;
    */

    // 3
    /*
    const char* binStr = "00000000000000000000000000101010";
    int decFromBin = binaryToInt(binStr);
    std::cout << "Decimal from binary: " << decFromBin << std::endl;
    */

    // 4
    
    const char* hexStr = "000000FF";
    int decFromHex = hexToInt(hexStr);
    std::cout << "Decimal from hex: " << decFromHex << std::endl;
    

    return 0;
}