#include "libraries.h"

class People
{
    protected:
        string name;
        int age;

    public:
        //parameterized constructor
        People(string name, int age);
        //destructor
        ~People();

        //setter,getter for name
        void setName(string name);
        string getName();

        //setter, getter for age
        void setAge(int age);
        int getAge();
};