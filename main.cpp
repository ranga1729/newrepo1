#include "People.h"
#include "Employee.h"

int main()
{
    People people1("John Doe", 25);
    cout << "Base class constructor added data" << endl;
    cout << people1.getName()<< " " << people1.getAge() << endl;

    cout << endl;
    people1.introduce();
    cout << endl;

    people1.setName("Peter Parker");
    people1.setAge(21);
    cout << "Base class object's data has been changed by  using setters" << endl;
    cout << people1.getName() << " " << people1.getAge() << endl;

    cout << endl;
    people1.introduce();
    cout << endl;

    cout << endl;
    cout << endl;

    Employee emp1("Tony Stark", 30, "Mechanical");
    cout << "Child class constructor added data" << endl;
    cout << emp1.getName() << " " << emp1.getAge() << " " << emp1.getDepartment() << endl;

    cout << endl;
    emp1.introduce();
    cout << endl;

    emp1.setName("Steve Rogers");
    emp1.setAge(100);
    emp1.setDepartment("HR");
    cout << "Child class object's data has been changed by using setters" << endl;
    cout << emp1.getName() << " " << emp1.getAge() << " " << emp1.getDepartment() << endl;

    cout << endl;
    emp1.introduce();
    cout << endl;
}
