// UniversityCpp.cpp : Defines the entry point for the console application.
#include "Tasks.h"
#include "Document.h"

bool menu()
{
	string mode = "light mode";
	cout << "=====================================" << endl;
	cout << "     University Management System    " << endl;
	cout << "=====================================" << endl;
	cout << ".0.Exit.............................." << endl;
	cout << "-1-Show list of students-------------" << endl;
	cout << "-2-Show list of teachers-------------" << endl;
	cout << "-3-Show list of courses--------------" << endl;
	cout << "-4-Show list of faculties------------" << endl;
	cout << "-5-Show list of departments----------" << endl;
	cout << "-6-Show list of deaneries------------" << endl;
	cout << "-7-Show rules of the university------" << endl;
	cout << "-8-Add new rule----------------------" << endl;
	cout << "-9-Delete a rule---------------------" << endl;
	cout << "-10-Switch to " + DatabaseContext::getInstance()->getMode() + "-------------" << endl;
	cout << "-------------------------------------" << endl;
	cout << "---------------Choose a task to do: ";

	int cases = -1;
	cout << "";
	cin >> cases;
	system("cls");
	ITask* task = nullptr;

	switch (cases)
	{
		case 1: task = new ShowStudentsTask(); break;
		case 2: task = new ShowTeachersTask(); break;
		case 3: task = new ShowCoursesTask(); break;
		case 4: task = new ShowFacultiesTask(); break;
		case 5: task = new ShowDepartmentsTask(); break;
		case 6: task = new ShowDeaneriesTask(); break;
		case 7: task = new ShowRulesTask(); break;
		case 8: task = new AddRuleTask(); break;
		case 9: task = new DeleteRuleTask(); break;
		case 10: task = new SwitchModeTask(); break;
	}

	if (task) {
		task->execute();
		system("pause");
		delete task;
	}

	system("cls");
	return true;
}

void PrintLogo()
{
	fstream logo;
	string text;
	logo.open("logo.txt");
	cout << "\n\n\n\n\n";
	while (getline(logo, text))
	{
		cout << text << endl;
		Sleep(100);
	}
	system("pause");
	system("cls");
}

int main()
{
	DatabaseContext::getInstance()->initialize();
	PrintLogo();
	Document doc(new DraftState());

	doc.publish();
	Sleep(1000);
	system("pause");
	doc.setState(new ModerationState());
	doc.publish();
	Sleep(1000);
	system("pause");
	doc.setState(new PublishedState());
	doc.publish();
	Sleep(1000);
	system("pause");
	while (menu());
}