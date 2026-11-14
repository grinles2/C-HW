#include <iostream>
#include <cstring>
#include <cctype>

// 1
void compareFiles(const char* file1, const char* file2) {
    FILE* f1 = nullptr;
    FILE* f2 = nullptr;
    fopen_s(&f1, file1, "r");
    fopen_s(&f2, file2, "r");

    if (!f1 || !f2) {
        std::cout << "Error opening files." << std::endl;
        if (f1) fclose(f1);
        if (f2) fclose(f2);
        return;
    }

    char buf1[256];
    char buf2[256];
    int lineNum = 1;
    bool identical = true;

    while (true) {
        char* res1 = fgets(buf1, sizeof(buf1), f1);
        char* res2 = fgets(buf2, sizeof(buf2), f2);

        if (!res1 && !res2) break; 

        if (!res1 || !res2 || strcmp(buf1, buf2) != 0) {
            identical = false;
            std::cout << "Mismatch found at line " << lineNum << ":\n";
            std::cout << "File 1: " << (res1 ? res1 : "[EOF]\n");
            std::cout << "File 2: " << (res2 ? res2 : "[EOF]\n");
            break;
        }
        lineNum++;
    }

    if (identical) {
        std::cout << "Files are identical." << std::endl;
    }

    if (f1) fclose(f1);
    if (f2) fclose(f2);
}

// 2
void generateFileStatistics(const char* inFile, const char* outFile) {
    FILE* fin = nullptr;
    FILE* fout = nullptr;
    fopen_s(&fin, inFile, "r");
    fopen_s(&fout, outFile, "w");

    if (!fin || !fout) {
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return;
    }

    long long charCount = 0;
    long long lineCount = 0;
    long long vowelCount = 0;
    long long consonantCount = 0;
    long long digitCount = 0;

    const char vowels[] = "aeiouyAEIOUYаеєиіїоуюяАЕЄИІЇОУЮЯ";

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        charCount++;
        if (ch == '\n') {
            lineCount++;
        }

        if (isdigit(ch)) {
            digitCount++;
        }
        else if (isalpha(ch)) {
            bool isVowel = false;
            for (int i = 0; vowels[i] != '\0'; i++) {
                if (ch == vowels[i]) {
                    isVowel = true;
                    break;
                }
            }
            if (isVowel) {
                vowelCount++;
            }
            else {
                consonantCount++;
            }
        }
    }
    if (charCount > 0 && lineCount == 0) {
        lineCount = 1;
    }

    fprintf_s(fout, "Character count: %lld\n", charCount);
    fprintf_s(fout, "Line count: %lld\n", lineCount);
    fprintf_s(fout, "Vowel count: %lld\n", vowelCount);
    fprintf_s(fout, "Consonant count: %lld\n", consonantCount);
    fprintf_s(fout, "Digit count: %lld\n", digitCount);

    fclose(fin);
    fclose(fout);
}

// 3
void caesarCipher(const char* inFile, const char* outFile, int shift) {
    FILE* fin = nullptr;
    FILE* fout = nullptr;
    fopen_s(&fin, inFile, "r");
    fopen_s(&fout, outFile, "w");

    if (!fin || !fout) {
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' + shift) % 26;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + shift) % 26;
        }
        else if (ch >= 'а' && ch <= 'я') {
            ch = 'а' + (ch - 'а' + shift) % 32;
        }
        else if (ch >= 'А' && ch <= 'Я') {
            ch = 'А' + (ch - 'А' + shift) % 32;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
}


int main() {
    // 1
    /*
    compareFiles("file1.txt", "file2.txt");
    */

    // 2
    /*
    generateFileStatistics("input.txt", "stats.txt");
    */

    // 3
    
    caesarCipher("text.txt", "encrypted.txt", 3);
    

    return 0;
}