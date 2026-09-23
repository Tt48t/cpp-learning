#include <iostream>
using namespace std;

int main() {
    cout << "Leap years from 2000 to 2012 are:\n";

    for (int year = 2000; year <= 2012; year++) {
        if ((year % 400 == 0) || 
            (year % 4 == 0 && year % 100 != 0)) {
            cout << year << endl;
        }
    }

    return 0;
}
