// UniversityCpp - Document.h
#pragma once
#include "State.h"

class Document {
private:
    IState* state;

public:
    Document(IState* initialState) : state(initialState) {}

    void setState(IState* newState) {
        state = newState;
    }

    void publish() {
        state->handle();
    }
};
