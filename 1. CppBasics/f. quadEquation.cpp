#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//Program to perform Quadratic formula calculation on Quadratic Equation


int main(){

    int r1,r2,a,b,c;
    cout<<"Enter coefficients a,b,c: ";
    cin>>a>>b>>c;

    r1 = (b+sqrt(b*b+4*a*c))/(2*a);
    r2 = (b-sqrt(b*b+4*a*c))/(2*a);

    cout<<"Roots are: "<<r1<<" "<<r2<<endl;

    return 0;
}
//
