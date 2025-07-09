// UniversityCpp - Tasks.h
#pragma once
#include "ITask.h"
#include "DatabaseContext.h"

class ShowStudentsTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask1();
    }
};

class ShowTeachersTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask2();
    }
};

class ShowCoursesTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask3();
    }
};

class ShowFacultiesTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask4();
    }
};

class ShowDepartmentsTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask5();
    }
};

class ShowDeaneriesTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask6();
    }
};

class ShowRulesTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask7();
    }
};

class AddRuleTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask8();
    }
};

class DeleteRuleTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask9();
    }
};

class SwitchModeTask : public ITask {
public:
    void execute() override {
        DatabaseContext::getInstance()->ExecuteTask10();
    }
};
