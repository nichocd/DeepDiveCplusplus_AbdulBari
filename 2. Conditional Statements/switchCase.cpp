#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){

    int day;
    cout<<"Day of Week Numbers:\n";
    cout<<"Monday [1]\nTuesday [2]\nWednesday [3]\nThursday [4]\nFriday [5]\nSaturday [6]\nSunday [7]\n";
    cout<<"Enter day of the week number: ";
    cin>>day;

    switch(day){

        case 1: cout<<"Monday";
            break;
        case 2: cout<<"Tuesday";
            break;
        case 3: cout<<"Wednesday";
            break;
        case 4: cout<<"Thursday";
            break;
        case 5: cout<<"Friday";
            break;
        case 6: cout<<"Saturday";
            break;
        case 7: cout<<"Sunday";
            break;
        default: cout<<"Invalid day";
            break;

    }


    return 0;
}
