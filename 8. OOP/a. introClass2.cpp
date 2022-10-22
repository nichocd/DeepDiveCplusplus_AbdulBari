#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;


class Rectangle
{
public:
    int length; //data member
    int breadth; //data member

    int area() //member function
    {
        return length * breadth;
    }

    int perimeter() //member function
    {
        return 2 * (length+breadth);
    }
};

int main(){

    Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;

    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"Perimeter is: "<<r1.perimeter()<<endl;

    return 0;
}
