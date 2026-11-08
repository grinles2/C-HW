#include <iostream>
#include <cstring>

// 1
void filterLongWords(const char* inFile, const char* outFile) {
    FILE* fin = nullptr;
    FILE* fout = nullptr;
    fopen_s(&fin, inFile, "r");
    fopen_s(&fout, outFile, "w");
    if (!fin || !fout) {
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return;
    }
    char word[256];
    while (fscanf_s(fin, "%s", word, (unsigned int)sizeof(word)) == 1) {
        if (strlen(word) >= 7) {
            fprintf_s(fout, "%s\n", word);
        }
    }
    if (fin) fclose(fin);
    if (fout) fclose(fout);
}

// 2
void copyLines(const char* inFile, const char* outFile) {
    FILE* fin = nullptr;
    FILE* fout = nullptr;
    fopen_s(&fin, inFile, "r");
    fopen_s(&fout, outFile, "w");
    if (!fin || !fout) {
        if (fin) fclose(fin);
        if (fout) fclose(fout);
        return;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fin)) {
        fputs(buffer, fout);
    }
    if (fin) fclose(fin);
    if (fout) fclose(fout);
}

// 3
void reverseLines(const char* inFile, const char* outFile) {
    FILE* fin = nullptr;
    fopen_s(&fin, inFile, "r");
    if (!fin) return;

    int capacity = 10;
    int count = 0;
    char** lines = new char* [capacity];
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fin)) {
        if (count >= capacity) {
            capacity *= 2;
            char** temp = new char* [capacity];
            for (int i = 0; i < count; i++) temp[i] = lines[i];
            delete[] lines;
            lines = temp;
        }
        int len = strlen(buffer);
        lines[count] = new char[len + 1];
        strcpy_s(lines[count], len + 1, buffer);
        count++;
    }
    fclose(fin);

    FILE* fout = nullptr;
    fopen_s(&fout, outFile, "w");
    if (fout) {
        for (int i = count - 1; i >= 0; i--) {
            fputs(lines[i], fout);
        }
        fclose(fout);
    }

    for (int i = 0; i < count; i++) {
        delete[] lines[i];
    }
    delete[] lines;
}

// 4
void processDashes(const char* inFile, const char* outFile) {
    FILE* fin = nullptr;
    fopen_s(&fin, inFile, "r");
    if (!fin) return;

    int capacity = 10;
    int count = 0;
    char** lines = new char* [capacity];
    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fin)) {
        if (count >= capacity) {
            capacity *= 2;
            char** temp = new char* [capacity];
            for (int i = 0; i < count; i++) temp[i] = lines[i];
            delete[] lines;
            lines = temp;
        }
        int len = strlen(buffer);
        lines[count] = new char[len + 1];
        strcpy_s(lines[count], len + 1, buffer);
        count++;
    }
    fclose(fin);

    int lastNoSpaceIdx = -1;
    for (int i = 0; i < count; i++) {
        bool hasSpace = false;
        for (int j = 0; lines[i][j] != '\0'; j++) {
            if (lines[i][j] == ' ' || lines[i][j] == '\t') {
                hasSpace = true;
                break;
            }
        }
        if (!hasSpace) {
            int len = strlen(lines[i]);
            if (len > 0 && lines[i][0] != '\n' && lines[i][0] != '\r') {
                lastNoSpaceIdx = i;
            }
        }
    }

    FILE* fout = nullptr;
    fopen_s(&fout, outFile, "w");
    if (fout) {
        for (int i = 0; i < count; i++) {
            fputs(lines[i], fout);
            if (i == lastNoSpaceIdx) {
                fprintf_s(fout, "------------\n");
            }
        }
        if (lastNoSpaceIdx == -1) {
            fprintf_s(fout, "------------\n");
        }
        fclose(fout);
    }

    for (int i = 0; i < count; i++) {
        delete[] lines[i];
    }
    delete[] lines;
}

int main() {
    // 1
    /*
    filterLongWords("1.txt", "output1.txt");
    */

    // 2
    /*
    copyLines("2.txt", "output2.txt");
    */

    // 3
    /*
    reverseLines("3.txt", "output3.txt");
    */

    // 4
    
    processDashes("4.txt", "output4.txt");
    

    return 0;
}