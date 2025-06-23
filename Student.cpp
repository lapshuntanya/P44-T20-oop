//
// Created by Lapshun Tetiana on 23.06.2025.
//

#include "Student.h"

Student::Student() {
    //strcpy_s(name, 100, "Noname"); VS
    strcpy(name, "Noname");
    mark = 0;
    cout << "Student() " << name << endl;
}

Student::Student(const char *name, int mark) {
    //strcpy_s(this->name, 100, name); VS
    strcpy(this->name, name);
    this->mark = mark;
    cout << "Student(name, mark) " << name << endl;
}

Student::~Student() {
    cout << "~Student() " << name << endl;
}

void Student::showInfo() {
    cout << "Student: " << name << endl;
    cout << "Mark:    " << mark << endl << endl;
}
