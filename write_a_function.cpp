#include <iostream>
using namespace std;


int main(){
    int year;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}


/*
def is_leap(year):
    return ((year % 4 == 0 and year % 100 != 0) or  (year % 400 == 0))
*/

