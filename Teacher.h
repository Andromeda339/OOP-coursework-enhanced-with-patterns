// UniversityCpp - Teacher
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "IUniversity.h"

using namespace std;

class Teacher : public IUniversity {
private:
    string name;
    string gender;
    int birthYear;
    bool hasChildren;
    double salary;
    string category;

public:
    Teacher(string name, string gender, int birthYear, bool hasChildren, double salary, string category, bool isPhDStudent, bool hasPhDCandidate, bool hasDoctorate)
        : name(name), gender(gender), birthYear(birthYear), hasChildren(hasChildren), salary(salary), category(category) {}

    string getName() { return name; }
    void setName(string name) { this->name = name; }

    string getGender() { return gender; }
    void setGender(string gender) { this->gender = gender; }

    int getBirthYear() { return birthYear; }
    void setBirthYear(int birthYear) { this->birthYear = birthYear; }

    bool getHasChildren() { return hasChildren; }
    void setHasChildren(bool hasChildren) { this->hasChildren = hasChildren; }

    double getSalary() { return salary; }
    void setSalary(double salary) { this->salary = salary; }

    string getCategory() { return category; }
    void setCategory(string category) { this->category = category; }

    void PrintInformation() override
    {
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(20) << name << setw(20) << gender << setw(20) << birthYear << setw(20) << (hasChildren ? "Yes" : "No") << setw(15) << salary << setw(20) << category << endl;
    }

};
