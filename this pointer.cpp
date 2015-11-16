using namespace std;
#include<iostream>
#include<conio.h>


class Test 
{
private:
    static int count;
public:
     Test& fun();
     Test& display();
     Test& dis();
};
 
int Test::count = 0;
 
Test& Test::fun() 
{
    count++;
    cout<<count<<" ";
    return *this;
}

Test& Test::display()
{
      cout<<"\tdisplay\t"<<count<<" ";
      return *this;
      }

Test& Test::dis()
{
      cout<<"\tdis\t"<<count<<" ";
      return *this;
      }
 
int main()  
{
    Test t;
    t.fun().display().fun().dis(); //first fun() is printed den display() den fun() at last dis().
    getch();
    return 0;
}
