//
// Created by Lapshun Tetiana on 23.06.2025.
//

#ifndef P44_T20_OOP_STUDENT_H
#define P44_T20_OOP_STUDENT_H
#include <iostream>
#include <cstring>
using namespace std;

class Student {
    char name[100];
    int mark;

public:
    Student(); //Конструктор за замовчуванням
    Student(const char* name, int mark); //Конструктор з параметрами
    ~Student(); //Деструктор

    void showInfo();
    void setMark(int user_mark);
    int getMark();
};


#endif //P44_T20_OOP_STUDENT_H
