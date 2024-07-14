#include <iostream>
using namespace std;

int main() {
    int a, b, c = 1, no, pil = 1; 
    float f, k; 

    while (true) {
        cout << "=================================== \n";
        cout << "========== SIMPLE CALCULATOR ====== \n";
        cout << "1) Addition \n";
        cout << "2) Subtraction \n";
        cout << "3) Multiplication \n";
        cout << "4) Division \n";
        cout << "5) Modulus \n";
        cout << "6) Exponentiation \n";
        // cout << "7) Exit \n";
        cout << "Choose an option: ";
        cin >> no;

        switch (no) {
            case 1:
                system("cls");
                cout << "====== ADDITION ======\n";
                cout << "Enter values a and b: "; cin >> a >> b;
                c = a + b;
                cout << "The result is " << c << endl;
                break;

            case 2:
                system("cls");
                cout << "====== SUBTRACTION ======\n";
                cout << "Enter values a and b: "; cin >> a >> b;
                c = a - b;
                cout << "The result is " << c << endl;
                break;

            case 3:
                system("cls");
                cout << "====== MULTIPLICATION ======\n";
                cout << "Enter values a and b: "; cin >> a >> b;
                c = a * b;
                cout << "The result is " << c << endl;
                break;

            case 4:
                system("cls");
                cout << "====== DIVISION ======\n";
                cout << "Enter values a and b: "; cin >> a >> b;
                if (b != 0) {
                    c = a / b;
                    cout << "The result is " << c << endl;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                }
                break;

            case 5:
                system("cls");
                cout << "====== MODULUS ======\n";
                cout << "Enter values a and b: "; cin >> a >> b;
                c = a % b;
                cout << "The result is " << c << endl;
                break;

            case 6:
                system("cls");
                cout << "====== EXPONENTIATION ======\n";
                cout << "Enter value a: "; cin >> a;
                cout << "Enter value b: "; cin >> b;
                c = 1;
                for (int i = 0; i < b; i++) {
                    c *= a;
                }
                cout << "The result of " << a << " raised to the power of " << b << " is " << c << endl;
                break;

            /* case 7:
                system("cls");
                cout << "Press any key to exit";
                break; */

            default:
                system("cls");
                cout << "Sorry, you selected an invalid option." << endl;
        }

        cout << "Do you want to continue?\n";
        cout << "1. Yes\n";
        cout << "2. No\n";
        cin >> pil;

        if (pil == 1) {
            continue;
        } else {
            break;
        }
    }

    return 0;
}
