#include "People.h"

class Employee:public People
{
    protected:
        string department;

    public:
        Employee(string name, int age, string department):People(name,age) {};
};
