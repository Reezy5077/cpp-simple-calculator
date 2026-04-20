#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "=== SIMPLE CALCULATOR ===" << endl;

    cout << "Erste Zahl: ";
    cin >> num1;

    cout << "Operator (+, -, *, /): ";
    cin >> operation;

    cout << "Zweite Zahl: ";
    cin >> num2;

    switch(operation) {
        case '+':
            cout << "Ergebnis: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Ergebnis: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Ergebnis: " << num1 * num2 << endl;
            break;
        case '/':
            if(num2 != 0)
                cout << "Ergebnis: " << num1 / num2 << endl;
            else
                cout << "Fehler: Division durch 0!" << endl;
            break;
        default:
            cout << "Ungültiger Operator!" << endl;
    }

    return 0;
}

// Bruno was here ;)
