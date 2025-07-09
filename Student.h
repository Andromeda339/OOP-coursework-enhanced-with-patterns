// UniversityCpp - Student.h
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
#include <Windows.h>
#include "IUniversity.h"

using namespace std;

class Student : public IUniversity {
private:
    string name;
    string gender;
    int birthYear;
    double scholarship;
    int group;
    int course;
    vector<int> grades;

public:
    Student(string name, string gender, int birthYear, double scholarship, int group, int course)
        : name(name), gender(gender), birthYear(birthYear), scholarship(scholarship), group(group), course(course) {}

    string getName()  { return name; }
    void setName(string name) { this->name = name; }

    string getGender()  { return gender; }
    void setGender(string gender) { this->gender = gender; }

    int getBirthYear()  { return birthYear; }
    void setBirthYear(int birthYear) { this->birthYear = birthYear; }

    double getScholarship()  { return scholarship; }
    void setScholarship(double scholarship) { this->scholarship = scholarship; }

    int getGroup()  { return group; }
    void setGroup(int group) { this->group = group; }

    int getCourse()  { return course; }
    void setCourse(int course) { this->course = course; }

    vector<int> getGrades()  { return grades; }
    void setGrades(vector<int>& grades) { this->grades = grades; }

    void PrintInformation() override
    {
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        cout << left << setw(20) << name << setw(20) << gender << setw(20) << birthYear << setw(15) << scholarship << setw(20) << group << setw(20) << course << endl;
    }
};
