#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int x = 10;
    int &y = x;

    cout<<x<<endl;
    cout<<y<<endl;
    y++;
    cout<<y<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;

    return 0;
}
