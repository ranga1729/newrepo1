#include <iostream>
using namespace std;

class Animal
{
    public:
        virtual void speak()
        {
            cout << "This is base." << endl;
        }
};

class Dog:public Animal
{
    public:
        void speak()
        {
            cout << "Woof!" << endl;
        }
};

int main()
{
    Animal *a;
    Dog d;
    a = &d;
    a -> speak();
    
    return 0;
}