// UniversityCpp - Course.h
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "IUniversity.h"

using namespace std;

class Course : public IUniversity {
private:
    string name;
    int year;
    int semester;
    int lectureHours;
    int labHours;
    string controlForm;

public:
    Course(string name, int year, int semester, int lectureHours, int labHours, string controlForm)
        : name(name), year(year), semester(semester), lectureHours(lectureHours), labHours(labHours), controlForm(controlForm) {}

    string getName() { return name; }
    void setName(string name) { this->name = name; }

    int getYear() { return year; }
    void setYear(int year) { this->year = year; }

    int getSemester() { return semester; }
    void setSemester(int semester) { this->semester = semester; }

    int getLectureHours() { return lectureHours; }
    void setLectureHours(int lectureHours) { this->lectureHours = lectureHours; }

    int getLabHours() { return labHours; }
    void setLabHours(int labHours) { this->labHours = labHours; }

    string getControlForm() { return controlForm; }
    void setControlForm(string controlForm) { this->controlForm = controlForm; }

    void PrintInformation() {
        cout << "-------------------------------------------------------------------------------------" << endl;
        cout << left << setw(20) << name << setw(10) << year << setw(10) << semester << setw(15) << lectureHours << setw(15) << labHours << setw(15) << controlForm << endl;
    }

};
