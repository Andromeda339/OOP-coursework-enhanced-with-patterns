// UniversityCpp - DatabaseContext.h
#pragma once
#include "Student.h"
#include "Faculty.h"
#include "Department.h"
#include "Teacher.h"
#include "Deanery.h"
#include "Course.h"
#include "StudentFactory.h"
#include "TeacherFactory.h"

using namespace std;

class DatabaseContext {
private:
    DatabaseContext(); // Singleton pattern

    static DatabaseContext* instance; // Singleton pattern

    static vector<Student> students;
    static vector<Faculty> faculties;
    static vector<Department> departments;
    static vector<Teacher> teachers;
    static vector<Deanery> deaneries;
    static vector<Course> courses;

    static vector<string> rules;

    static string mode;
public:
	static DatabaseContext* getInstance(); // Singleton pattern
    static void initialize();

    static string getMode();

    static void ExecuteTask1();
    static void ExecuteTask2();
    static void ExecuteTask3();
    static void ExecuteTask4();
    static void ExecuteTask5();
    static void ExecuteTask6();
    static void ExecuteTask7();
    static void ExecuteTask8();
    static void ExecuteTask9();
    static void ExecuteTask10();
};