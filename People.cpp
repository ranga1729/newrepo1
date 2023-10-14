#include "People.h"

People::People(string name, int age)
{
    this -> name = name;
    this -> age = age;
}

People::~People()
{
    this -> name = "";
    this -> age = 0;
}

void People::setName(string name)
{
    this -> name = name;
}

string People::getName()
{
    return name;
}

void People::setAge(int age)
{
    this -> age = age;
}

int People::getAge()
{
    return age;
}

void People::introduce()
{
    cout << "Hi my name is " << People::name << "." << endl;
    cout << "I'm " << People::age << " years old." << endl;
}