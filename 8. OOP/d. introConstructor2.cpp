#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

/*This code does NOT run as meant to show following Constructors*/
//Default Constructor -- Compiler controlled, "built-in" constructor
//Non-parameterized Constructor -- sometimes called "default" constructor
//Parameterized Constructor
//Copy Constructor


class Rectangle
{
private: //setting data members private
    int length;
    int breadth;

public:

    Rectangle() //non-parameterized or default constructor
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) //parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(int l=0, int b=0) //non-parameterized AND parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &rect) //copy constructor or 'shallow' copy constructor
    //Make sure if creating deep cop constructor (with pointer to a new array) that each has its
    //own array created on the heap. See Section 12.168
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setLength(int l) //this is called a Mutator function; its needed in order to initialize length
    {
        if(l>0) //this validates that data being inputted is valid
            length = l;
        else
            length = 0;
    }

    void setBreadth(int b) //this is called a Mutator function; its needed in order to initialize breadth
    {
        if(b>0) //this validates that data being inputted is valid
            breadth = b;
        else
            breadth = 0;
    }

    int getLength() //this is called an Accessor function;
    {
        return length;
    }

    int getBreadth() //this is called an Accessor function;
    {
        return breadth;
    }

    int area() //this is called Facilitator function
    {
        return length*breadth;
    }

        int perimeter() //this is called Facilitator function
    {
        return 2 * (length+breadth);
    }

    int isSquare() //this is called an Inspector or Enquiry function to check if object is squared
    {
        return 0;
    }

    ~Rectangle() //this is called a Destructor function
    {
        return 0;
    }
};

int main(){

    Rectangle r1; //object created in stack; default constructor
    Rectangle(); //object created using non-parameterized or default constructor above
    Rectangle(10,5); //object created using parameterized constructor above
    Rectange r2(r1); //object created using 'shallow' copy constructor above
    //Make sure if creating deep cop constructor (with pointer to a new array) that each has its
    //own array created on the heap. See Section 12.168

    r1.setLength(10);
    r1.setBreadth(5);

    cout<<r1.getLength()<<endl;
    cout<<r1.getBreadth()<<endl;
    cout<<r1.area()<<endl;


    return 0;
}
