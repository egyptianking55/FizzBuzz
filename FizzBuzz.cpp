#include <iostream>
#include <string>

using namespace std;

int main () {
//initialized variables.  start count at one, 0 false positive
    int counter = 1;
    int end;
    string fizz, buzz;

    cout << "How far do you want to count?";

//determine end of count
    cin >> end;

    cout << "What is your fizz? ";
    cin >> fizz;

    cout << "\nWhat is your buzz? ";
    cin >> buzz;
    cout << "\n";

//standard fizzbuzz logic loop
    while (counter <= end) {

        if (counter % 15 == 0) {
            cout << fizz << buzz;
        }
        else if (counter % 5 == 0) {
            cout << buzz;
        }
        else if (counter % 3 == 0) {
            cout << fizz;
        }
        else {
            cout << counter;
        }
        cout << "\n";
        counter++;
    }

    return 0;
}