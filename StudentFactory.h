// UniversityCpp = StudentFactory.h
#pragma once
#include "Student.h"

class StudentFactory {
public:
    static Student createStudent(string name, string gender, int birthYear, double scholarship, int group, int course)
    {
        return Student(name, gender, birthYear, scholarship, group, course);
    }

    static Student createDefaultStudent() 
    {
        return Student("Default Name", "Unknown", 2000, 0.0, 1, 1);
    }
};