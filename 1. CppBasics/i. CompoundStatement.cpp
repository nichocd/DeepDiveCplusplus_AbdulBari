#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int hour;
    cout<<"Enter time-in and time-out hours:";
    cin>>hour;

    if(hour>=9 && hour<=18)
        cout<<"Within Core Working Hours";
    else
        cout<<"Non-Core Working Hours";

    return 0;
}
