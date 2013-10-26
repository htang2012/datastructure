#include<iostream>

using namespace std;

class Base {
    public:
       void change(int a);
       void display(void) const;
       int mv;
};

void Base::change( int a)
{
     mv = a;
}

void Base::display(void) const
{
    cout << mv << endl;
}

int main(void)
{
     Base b;
     b.change(1);
     b.display();  
     return 0;
};

