#include<iostream>
using namespace std;

class baseclass
{
    public:
    virtual void display1()=0;
    virtual void display2()=0;
    void display3(){
     cout<<"\nThis is display3() method of base class";
    }
};

class derivedclass:public baseclass {
    public:
    void display1(){
     cout<<"\nThis is display1() method of derived class";
     }

    void display2(){
     cout<<"\nThis is display2() method of derived class";
     }
};

int main()
{
derivedclass d;
d.display1();
d.display2();
d.display3();
return 0;
}
