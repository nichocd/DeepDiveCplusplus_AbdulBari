#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

//return by reference

int & func(int &x){

    return x;
}
int main(){

    int a = 10;
    func(a) = 25; //make function L-value by help of return by reference
    cout<<a<<endl;

    return 0;
}
