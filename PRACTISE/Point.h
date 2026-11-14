#pragma once
#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double xCoord = 0.0, double yCoord = 0.0, double zCoord = 0.0) {
        x = xCoord;
        y = yCoord;
        z = zCoord;
    }

    void inputData() {
        std::cout << "Enter X, Y, Z coordinates: ";
        std::cin >> x >> y >> z;
    }

    void printData() const {
        std::cout << "Point(" << x << ", " << y << ", " << z << ")\n";
    }

    void setX(double val) { x = val; }
    double getX() const { return x; }

    void setY(double val) { y = val; }
    double getY() const { return y; }

    void setZ(double val) { z = val; }
    double getZ() const { return z; }

    void saveToFile(const char* filename) const {
        FILE* f = nullptr;
        fopen_s(&f, filename, "w");
        if (f) {
            fprintf_s(f, "%lf %lf %lf\n", x, y, z);
            fclose(f);
            std::cout << "Point saved to file successfully.\n";
        }
        else {
            std::cout << "Error opening file for writing.\n";
        }
    }

    void loadFromFile(const char* filename) {
        FILE* f = nullptr;
        fopen_s(&f, filename, "r");
        if (f) {
            fscanf_s(f, "%lf %lf %lf", &x, &y, &z);
            fclose(f);
            std::cout << "Point loaded from file successfully.\n";
        }
        else {
            std::cout << "Error opening file for reading.\n";
        }
    }
};
