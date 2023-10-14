#include "Employee.h"

Employee::Employee(string name, int age, string department):People(name, age)
{
    this -> department = department;
}