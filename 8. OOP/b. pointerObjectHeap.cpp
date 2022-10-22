#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
};

int main(){

    Rectangle r1; //object created in stack
    //Rectangle *p; //pointer created in stack
    Rectangle *p = new Rectangle(); //object created in heap with pointer to it

    r1.length = 10;
    r1.breadth = 5;
    cout<<r1.area()<<endl;

    p = &r1;
    p->length=15;
    p->breadth=10;
    cout<<p->area()<<endl;


    return 0;
}
