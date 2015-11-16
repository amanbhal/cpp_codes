#include<iostream>
using namespace std;
 
class Base 
{
public:
    int fun()      { cout << "Base::fun() called"; }
    int fun(int i) { cout << "Base::fun(int i) called"; }
};
 
class Derived: public Base 
{
public:
    int fun(char x)   { cout << "Derived::fun(char ) called"; }
};
 
int main() 
{
    Derived d;
    d.fun();
    return 0;
}
Output: Compiler Error.
In the above program, fun() of base class is not accessible in the derived class.
 If a derived class creates a member method with name same as one of the methods in base class,
 then all the base class methods with this name become hidden in derived class.
 
 
 
 -------------------------------------------------------------------------------
 
 
 
 #include<iostream>
using namespace std;
class Base 
{
   protected:
      int x;
   public:
      Base (int i){ x = i;}
};
 
class Derived : public Base 
{
   public:
      Derived (int i):x(i) { }
      void print() { cout << x ; }
};
 
int main()
{
    Derived d(10);
    d.print();
}
Output: Compiler Error
In the above program, x is protected, so it is accessible in derived class.
 Derived class constructor tries to use initializer list to directly initialize x, which is not allowed even if x is accessible.
  The members of base class can only be initialized through a constructor call of base class. Following is the corrected program.

#include<iostream>
using namespace std;
class Base {
   protected:
      int x;
   public:
      Base (int i){ x = i;}
};
 
class Derived : public Base {
   public:
      Derived (int i):Base(i) { }
      void print() { cout << x; }
};
 
int main()
{
    Derived d(10);
    d.print();
}
Output:

 10 
