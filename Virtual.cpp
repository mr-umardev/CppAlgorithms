//Virtual Functions 
//Virtual Functions Rules
//Virtual Functions must be members of some class
//They cannot be static members
//They are accessed by using object pointers
//A virtual Function can be a friend of another class
//a virtual function in a base class must be defined even though it may not be used
//The prototype of the base class version of the virtual function & all the derived class versions must be identical
//They cannot have virtual constructors but we can have virtual destructors
//We cannot use a pointer of a derived class to access an object of base type
//When a base pointer points to a derived class incrementing or decrementing it will not make it to point to the next object of derived class


#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "display in base" << endl;
    }
    virtual void show()
    {
        cout << "show in base" << endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "display in derived" << endl;
    }
    void show()
    {
        cout << "show in derived" << endl;
    }
};
int main()
{
    base b;
    derived d;
    base *bptr;
    bptr = &b;
    bptr->display();
    bptr->show();
    bptr = &d;
    bptr->display();
    bptr->show(); // this will call the show() from derived class as the base class show() is virtual
    return 0;
}
