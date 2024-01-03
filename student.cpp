#include <iostream>
#include <string>
#include "student.h"   
using namespace std;

void Student::display()         
{
    cout << "num£º" << num << endl;
    cout << "name£º" << name << endl;
    cout << "sex£º" << sex << endl;
}

void Student::set_value(int num, const char* name, char sex)
{
    this->num = num;
    strcpy_s(this->name, name);
    this->sex = sex;
}