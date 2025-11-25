#include<iostream>

int years_to_months(int years)
{
    return years * 12;
}

int main(){
    using namespace std;
    int ages, months;
    ages = months = 0;
    cout << "Please input your ages: ";
    cin >> ages;
    months = years_to_months(ages);
    cout << "Here is your months: " << months << endl;
    return 0;
}