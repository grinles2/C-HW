#pragma once
#include <iostream>
class Student {
private:
    char fullName[100];
    char birthDate[20];
    char phone[20];
    char city[50];
    char country[50];
    char institution[100];
    char instCity[50];
    char instCountry[50];
    char groupName[20];

public:
    Student() {
        fullName[0] = '\0';
        birthDate[0] = '\0';
        phone[0] = '\0';
        city[0] = '\0';
        country[0] = '\0';
        institution[0] = '\0';
        instCity[0] = '\0';
        instCountry[0] = '\0';
        groupName[0] = '\0';
    }
    void inputData() {
        std::cout << "Enter Full Name: ";
        std::cin.ignore();
        std::cin.getline(fullName, 100);
        std::cout << "Enter Birth Date (DD.MM.YYYY): ";
        std::cin.getline(birthDate, 20);
        std::cout << "Enter Phone: ";
        std::cin.getline(phone, 20);
        std::cout << "Enter City: ";
        std::cin.getline(city, 50);
        std::cout << "Enter Country: ";
        std::cin.getline(country, 50);
        std::cout << "Enter Institution Name: ";
        std::cin.getline(institution, 100);
        std::cout << "Enter Institution City: ";
        std::cin.getline(instCity, 50);
        std::cout << "Enter Institution Country: ";
        std::cin.getline(instCountry, 50);
        std::cout << "Enter Group Name: ";
        std::cin.getline(groupName, 20);
    }
    void printData() const {
        std::cout << "--- Student Info ---\n";
        std::cout << "Full Name: " << fullName << "\n";
        std::cout << "Birth Date: " << birthDate << "\n";
        std::cout << "Phone: " << phone << "\n";
        std::cout << "City/Country: " << city << ", " << country << "\n";
        std::cout << "Institution: " << institution << " (" << instCity << ", " << instCountry << ")\n";
        std::cout << "Group Name: " << groupName << "\n";
    }

    void setFullName(const char* name) { strcpy_s(fullName, sizeof(fullName), name); }
    const char* getFullName() const { return fullName; }

    void setBirthDate(const char* date) { strcpy_s(birthDate, sizeof(birthDate), date); }
    const char* getBirthDate() const { return birthDate; }

    void setPhone(const char* p) { strcpy_s(phone, sizeof(phone), p); }
    const char* getPhone() const { return phone; }

    void setCity(const char* c) { strcpy_s(city, sizeof(city), c); }
    const char* getCity() const { return city; }

    void setCountry(const char* c) { strcpy_s(country, sizeof(country), c); }
    const char* getCountry() const { return country; }

    void setInstitution(const char* inst) { strcpy_s(institution, sizeof(institution), inst); }
    const char* getInstitution() const { return institution; }

    void setInstCity(const char* c) { strcpy_s(instCity, sizeof(instCity), c); }
    const char* getInstCity() const { return instCity; }

    void setInstCountry(const char* c) { strcpy_s(instCountry, sizeof(instCountry), c); }
    const char* getInstCountry() const { return instCountry; }

    void setGroupName(const char* group) { strcpy_s(groupName, sizeof(groupName), group); }
    const char* getGroupName() const { return groupName; }
};