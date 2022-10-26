#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

/*This code does NOT run as meant to show thisPointer*/


class Rectangle
{
private: //setting data members private
    int length;
    int breadth;

public:

    Rectangle(int length, int breadth) //parameterized constructor
    {
        this->length = length;
        //thisPointer is to length object (member of Class) in Private
        this->breadth = breadth;
        //thisPointer is to breadth object (member of Class) in Private
    }
