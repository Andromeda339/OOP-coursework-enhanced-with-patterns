// UniversityCpp - DatabaseContext.cpp
#include "DatabaseContext.h"

vector<Student> DatabaseContext::students;
vector<Faculty> DatabaseContext::faculties;
vector<Department> DatabaseContext::departments;
vector<Teacher> DatabaseContext::teachers;
vector<Deanery> DatabaseContext::deaneries;
vector<Course> DatabaseContext::courses;

vector<string> DatabaseContext::rules = {
			"1. Attend all classes and be punctual.",
			"2. Complete and submit assignments on time.",
			"3. Respect faculty, staff, and fellow students.",
			"4. Maintain academic integrity and honesty.",
			"5. Adhere to the university's code of conduct.",
			"6. Participate actively in university activities.",
			"7. Utilize university resources responsibly.",
			"8. Abide by the university's health and safety guidelines."
};

string DatabaseContext::mode = "light mode";

DatabaseContext* DatabaseContext::instance = nullptr;

DatabaseContext* DatabaseContext::getInstance() 
{
	if (instance == nullptr) {
		instance = new DatabaseContext();
	}
	return instance;
}

DatabaseContext::DatabaseContext() 
{
}

void DatabaseContext::initialize() {
	// Додавання студентів
	students.push_back(StudentFactory::createStudent("John Doe", "Male", 2000, 1000, 1, 1));
	students.push_back(StudentFactory::createStudent("Jane Smith", "Female", 2001, 1200, 2, 2));
	students.push_back(StudentFactory::createStudent("Alice Johnson", "Female", 1999, 1100, 3, 3));
	students.push_back(StudentFactory::createStudent("Robert Brown", "Male", 1998, 1300, 4, 4));
	students.push_back(StudentFactory::createStudent("Emily Davis", "Female", 2000, 1000, 1, 1));
	students.push_back(StudentFactory::createStudent("Michael Miller", "Male", 2002, 900, 2, 2));
	students.push_back(StudentFactory::createStudent("Sarah Wilson", "Female", 2001, 1200, 3, 3));
	students.push_back(StudentFactory::createStudent("David Martinez", "Male", 1999, 1150, 4, 4));



	// Додавання викладачів
	teachers.push_back(TeacherFactory::createTeacher("Dr. Brown", "Male", 1975, true, 5000, "Professor", false, true, true));
	teachers.push_back(TeacherFactory::createTeacher("Ms. Green", "Female", 1980, false, 4000, "Associate Professor", false, true, false));
	teachers.push_back(TeacherFactory::createTeacher("Mr. White", "Male", 1985, true, 3500, "Lecturer", true, false, false));
	teachers.push_back(TeacherFactory::createTeacher("Dr. Black", "Male", 1970, true, 5500, "Professor", false, true, true));
	teachers.push_back(TeacherFactory::createTeacher("Ms. Blue", "Female", 1983, false, 4200, "Assistant Professor", true, false, false));
	teachers.push_back(TeacherFactory::createTeacher("Mr. Red", "Male", 1978, true, 4600, "Senior Lecturer", false, true, true));
	teachers.push_back(TeacherFactory::createTeacher("Dr. Yellow", "Female", 1982, false, 4800, "Associate Professor", false, true, true));

	// Додавання факультетів
	Faculty scienceFaculty("Science");
	scienceFaculty.addStudent(students[0]);
	scienceFaculty.addStudent(students[1]);
	scienceFaculty.addTeacher(teachers[0]);
	scienceFaculty.addTeacher(teachers[1]);
	faculties.push_back(scienceFaculty);

	Faculty artsFaculty("Arts");
	artsFaculty.addStudent(students[2]);
	artsFaculty.addStudent(students[3]);
	artsFaculty.addTeacher(teachers[2]);
	artsFaculty.addTeacher(teachers[3]);
	faculties.push_back(artsFaculty);

	Faculty engineeringFaculty("Engineering");
	engineeringFaculty.addStudent(students[4]);
	engineeringFaculty.addStudent(students[5]);
	engineeringFaculty.addTeacher(teachers[4]);
	engineeringFaculty.addTeacher(teachers[5]);
	faculties.push_back(engineeringFaculty);

	Faculty medicineFaculty("Medicine");
	medicineFaculty.addStudent(students[6]);
	medicineFaculty.addStudent(students[7]);
	medicineFaculty.addTeacher(teachers[6]);
	faculties.push_back(medicineFaculty);

	// Додавання кафедр
	Department csDepartment("Computer Science");
	csDepartment.addTeacher(teachers[0]);
	csDepartment.addTeacher(teachers[2]);
	departments.push_back(csDepartment);

	Department historyDepartment("History");
	historyDepartment.addTeacher(teachers[1]);
	departments.push_back(historyDepartment);

	Department engineeringDepartment("Mechanical Engineering");
	engineeringDepartment.addTeacher(teachers[3]);
	engineeringDepartment.addTeacher(teachers[4]);
	departments.push_back(engineeringDepartment);

	Department medicineDepartment("Internal Medicine");
	medicineDepartment.addTeacher(teachers[5]);
	medicineDepartment.addTeacher(teachers[6]);
	departments.push_back(medicineDepartment);

	// Додавання деканатів
	Deanery mainDeanery("Main Deanery");
	mainDeanery.addFaculty(scienceFaculty);
	mainDeanery.addFaculty(artsFaculty);
	mainDeanery.addFaculty(engineeringFaculty);
	mainDeanery.addFaculty(medicineFaculty);
	deaneries.push_back(mainDeanery);

	// Додавання курсів
	courses.push_back(Course("Mathematics", 1, 1, 30, 10, "Exam"));
	courses.push_back(Course("History", 2, 2, 25, 15, "Offset"));
	courses.push_back(Course("Physics", 1, 1, 35, 25, "Offset"));
	courses.push_back(Course("Chemistry", 2, 1, 32, 22, "Offset"));
	courses.push_back(Course("Biology", 3, 2, 28, 18, "Offset"));
	courses.push_back(Course("Engineering", 4, 1, 40, 30, "Exam"));
	courses.push_back(Course("Internal Medicine", 4, 2, 38, 28, "Offset"));
}

string DatabaseContext::getMode()
{
	return mode;
}


void DatabaseContext::ExecuteTask1()
{
	cout << "_________________________________________________________________________________________________________________" << endl;
	cout << left << setw(20) << "Name" << setw(20) << "Gender" << setw(20) << "Birth year" << setw(15) << "Scholarship" << setw(20) << "Group" << setw(10) << "Course" << endl;

	for (Student student : students)
	{
		student.PrintInformation();
	}

	cout << "_________________________________________________________________________________________________________________" << endl;
}

void DatabaseContext::ExecuteTask2()
{
	cout << "_________________________________________________________________________________________________________________" << endl;
	cout << left << setw(20) << "Name" << setw(20) << "Gender" << setw(20) << "Birth year" << setw(20) << "Has children?" << setw(15) << "Salary" << setw(10) << "Category" << endl;

	for (Teacher teacher : teachers)
	{
		teacher.PrintInformation();
	}

	cout << "_________________________________________________________________________________________________________________" << endl;
}

void DatabaseContext::ExecuteTask3()
{
	cout << "_____________________________________________________________________________________" << endl;
	cout << left << setw(20) << "Name" << setw(10) << "Year" << setw(10) << "Semester" << setw(15) << "Lecture hours" << setw(15) << "Lab hours" << setw(15) << "Control form" << endl;

	for (Course course : courses)
	{
		course.PrintInformation();
	}

	cout << "_____________________________________________________________________________________" << endl;
}

void DatabaseContext::ExecuteTask4()
{
	for (Faculty faculty : faculties)
	{
		faculty.PrintInformation();
		cout << "\n\n\n" << endl;
	}
	cout << "_________________________________________________________________________________________________________________" << endl;

}

void DatabaseContext::ExecuteTask5()
{
	for (Department departmnent : departments)
	{
		departmnent.PrintInformation();
		cout << endl;
	}
	cout << "_________________________________________________________________________________________________________________" << endl;

}

void DatabaseContext::ExecuteTask6()
{
	for (Deanery deanery : deaneries)
	{
		deanery.PrintInformation();
	}
	cout << "_________________________________________________________________________________________________________________" << endl;
}

void DatabaseContext::ExecuteTask7()
{
	cout << "University Rules:" << endl;
	cout << "=====================================================================================" << endl;
	for (string rule : rules) {
		cout << rule << endl;
	}
	cout << "=====================================================================================" << endl;
}

void DatabaseContext::ExecuteTask8()
{
	ExecuteTask7();
	cin.ignore();
	string newRule;
	cout << "Write down a new rule to add: ";
	getline(cin, newRule);
	rules.push_back(to_string(rules.size() + 1) + ". " + newRule);
}

void DatabaseContext::ExecuteTask9()
{
	ExecuteTask7();
	int index = -1;
	cout << "Write down an index of rule: ";
	cin >> index;
	if (index >= 1 && index <= rules.size()) {
		rules.erase(rules.begin() + index - 1);
		for (int i = 0; i < rules.size(); ++i) {
			rules[i] = to_string(i + 1) + ". " + rules[i].substr(rules[i].find(' ') + 1);
		}
	}
	else {
		cout << "Wrong rule index." << endl;
	}
}

void DatabaseContext::ExecuteTask10()
{
	if (mode == "light mode")
	{
		system("color 70");
		mode = "dark mode-";
	}
	else
	{
		system("color 07");
		mode = "light mode";
	}
}

