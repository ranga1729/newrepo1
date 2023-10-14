#include "People.h"
#pragma once

class Employee:public People
{
    protected:
        string department;

    public:
        Employee(string name, int age, string department);

        void setDepartment(string department);
        string getDepartment();

        void introduce();
};
