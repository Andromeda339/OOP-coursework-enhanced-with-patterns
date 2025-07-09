// UniversityCpp - State.h
#pragma once
#include <iostream>

using namespace std;

class IState {
public:
    virtual void handle() = 0;
};

class DraftState : public IState {
public:
    void handle() override {
        cout << "The document is in draft form. Sending for moderation..." << endl;
    }
};

class ModerationState : public IState {
public:
    void handle() override {
        cout << "Document is under moderation. Administrator can publish it." << endl;
    }
};

class PublishedState : public IState {
public:
    void handle() override {
        cout << "Document is already published!" << endl;
    }
};
