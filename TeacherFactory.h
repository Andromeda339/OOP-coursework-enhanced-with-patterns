// UniversityCpp - TeacherFactory.h
#pragma once
#include "Teacher.h"

class TeacherFactory {
public:
    static Teacher createTeacher(string name, string gender, int birthYear, bool hasChildren, double salary, string category, bool isPhDStudent, bool hasPhDCandidate, bool hasDoctorate) {
        return Teacher(name, gender, birthYear, hasChildren, salary, category, isPhDStudent, hasPhDCandidate, hasDoctorate);
    }

    static Teacher createDefaultTeacher() {
        return Teacher("Default Name", "Unknown", 2000, false, 0.0, "Unknown", false, false, false);
    }
};