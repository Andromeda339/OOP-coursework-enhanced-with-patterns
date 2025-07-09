// // UniversityCpp - Deanery.h
#pragma once
#include "Faculty.h"

using namespace std;

class Deanery : public IUniversity {
private:
    string name;
    vector<Faculty> faculties;

public:
    Deanery(string name) : name(name) {}

    string getName() { return name; }
    void setName(string name) { this->name = name; }

    vector<Faculty> getFaculties() { return faculties; }
    void addFaculty(Faculty& faculty) { faculties.push_back(faculty); }

    void PrintInformation() override
    {
        cout << "\t\t\t\tDeanery Name: " << name << endl;
        cout << "=================================================================================================================" << endl;

        for (Faculty faculty : faculties) {
            faculty.PrintInformation();
            cout << "\n\n" << endl;
        }

        cout << "=================================================================================================================" << endl;

    }
};
