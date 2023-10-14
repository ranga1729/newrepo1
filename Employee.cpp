#include "Employee.h"

Employee::Employee(string name, int age, string department):People(name, age)
{
    this -> department = department;
}

void Employee::setDepartment(string department)
{
    this -> department = department;
}

string Employee::getDepartment()
{
    return department;
}

void Employee::introduce()
{
    cout << "Hi my name is " << Employee::name << "." << endl;
    cout << "I'm " << Employee::age << " years old." << endl;
    cout << "I work at the " + Employee::department << " department of my company." << endl;
}