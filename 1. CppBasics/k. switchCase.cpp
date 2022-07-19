#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){

    int day;
    cout<<"Day of Week Number are: Monday[1], Tuesday[2], Wednesday[3], Thursday[4], Friday[5], Saturday[6], Sunday[7]"<<endl;
    cout<<"Enter day of the week umber: ";
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
