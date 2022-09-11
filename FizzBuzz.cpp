#include <iostream>

using namespace std;

int main () {

    int counter = 1;
    int end;

    cout << "How far do you want to count?";

    cin >> end;

    while (counter <= end) {

        if (counter % 15 == 0) {
            cout << "fizzbuzz";
        }
        else if (counter % 5 == 0) {
            cout << "buzz";
        }
        else if (counter % 3 == 0) {
            cout << "fizz";
        }
        else {
            cout << counter;
        }
        cout << "\n";
        counter++;
    }

    return 0;
}