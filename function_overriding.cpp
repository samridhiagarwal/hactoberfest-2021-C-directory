#include<iostream>
using namespace std;
class Base
{
    public:
    void Display()
    {cout<<"display of base";}
};
class Derived:public Base
{
    public:
    void Display()
    {cout<<"display of derived";}
};
int main()
{
    Derived d;
    d.Display();
    //functional overrriding as displayed only of derived
}
