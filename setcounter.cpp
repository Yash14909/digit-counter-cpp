// Pgm 6: 1-digit Counter Class with User Input

#include <iostream>
using namespace std;

class Counter {
    int c;

public:
    void setCounter(int v) {
        if (v >= 0 && v <= 9)
            c = v;
        else {
            cout << "\n\tInvalid input! Setting counter to 0 by default.\n";
            c = 0;
        }
    }

    void display() {
        cout << "\n\tCounter value: " << c << endl;
    }

    void increment() {
        if (c < 9)
            c++;
        else
            cout << "\n\tCounter is already at maximum (9)." << endl;
    }

    void decrement() {
        if (c > 0)
            c--;
        else
            cout << "\n\tCounter is already at minimum (0)." << endl;
    }
};

int main() {
    Counter c1;
    int input;

    cout << "\n\tEnter an initial value for the counter (0–9): ";
    cin >> input;

    c1.setCounter(input);

    cout << "\n\tAfter initialization";
    c1.display();

    c1.increment();
    cout << "\n\tAfter incrementing";
    c1.display();

    c1.decrement();
    cout << "\n\tAfter decrementing";
    c1.display();

    return 0;
}
