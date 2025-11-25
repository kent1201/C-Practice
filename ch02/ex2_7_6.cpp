#include<iostream>

double convert(double a)
{
    return a * 63240;
}

int main(){
    using namespace std;
    double a, b;
    a = b = 0.0;
    cout << "Enter the number of light years: ";
    cin >> a;
    b = convert(a);
    // cout << a << "degrees Celsius is " << b << " degrees Fahrenheit." << endl;
    printf("%.2f light years = %.2f astronomical units.\n", a, b);
    return 0;
}