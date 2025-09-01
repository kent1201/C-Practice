#include <iostream>
// #include <cctype>

using namespace std;

const double rate1 = 0.1;
const double rate2 = 0.15;
const double rate3 = 0.2;

int main()
{
    double income = 0.0, tax = 0.0;
    cout << "Please input your income: " << endl;
    while (cin >> income and income >= 0.0){
        if (income <= 5000){
            tax = 0.0;
        }
        else if (income <= 15000){
            tax = (income - 5000) * rate1;
        }
        else if (income <= 35000){
            tax = (income - 5000) * rate1 + (income - 15000) * rate2;
        }
        else{
            tax = (income - 5000) * rate1 + (income - 15000) * rate2 + (income - 35000) * rate3;
        }
        cout << "Income = " << income << ", tax = " << tax << endl;
        cout << "Please input your income: " << endl;
    }
    return 0;
}