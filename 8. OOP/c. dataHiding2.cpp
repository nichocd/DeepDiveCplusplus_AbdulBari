#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

class Rectangle
{
private: //setting data members private
    int length;
    int breadth;

public:

    void setLength(int l) //this is called a Mutator; its needed in order to initialize length
    {
        if(l>0) //this validates that data being inputted is valid
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b) //this is called a Mutator; its needed in order to initialize breadth
    {
        if(b>0) //this validates that data being inputted is valid
            breadth = b;
        else
            breadth = 0;
    }

    int getLength() //this is called an Accessor;
    {
        return length;
    }

    int getBreadth() //this is called an Accessor;
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }
};

int main(){

    Rectangle r1; //object created in stack

    r1.setLength(10);
    r1.setBreadth(5);

    cout<<r1.getLength()<<endl;
    cout<<r1.getBreadth()<<endl;
    cout<<r1.area()<<endl;


    return 0;
}
