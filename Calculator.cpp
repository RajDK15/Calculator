#include <iostream>
using namespace std;

void displayHeading(){
    cout << "Simple Calculation" << endl;
    cout << "------------------" << endl;
}
int sum (int a, int b){
    return a + b;
}
int subtract (int a, int b){
    return a - b;
}
int multiply (int a, int b){
    return a * b;
}
double divide (int a, int b){
    if (b != 0){
        return a / b;
    } else {
        cerr << "Division by zero is not allowed" << endl;
        return 0;
    }
}

int main(){
    int Choice, Number_1, Number_2;

    displayHeading();
    cout << "Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Sutraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1/2/3/4): ";
    cin >> Choice;

    cout << "Enter First number:";
    cin >> Number_1;
    cout << "Enter Second number:";
    cin >> Number_2;

    switch (Choice)
    {
    case 1:
        cout << "Result:" << sum(Number_1, Number_2) <<endl;
        break;
    case 2:
        cout << "Result:" << subtract(Number_1, Number_2) << endl;
        break;
    case 3:
        cout << "Result:" << multiply(Number_1, Number_2) << endl;
        break;
    case 4:
        cout << "Result:" << divide(Number_1, Number_2) << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
    }
    return 0;
}