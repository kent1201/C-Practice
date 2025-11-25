#include<iostream>

float convert(float a)
{
    return 1.8 * a + 32.0;
}

int main(){
    using namespace std;
    float a, b;
    a = b = 0.0;
    cout << "Please enter a Celsius value: ";
    cin >> a;
    b = convert(a);
    // cout << a << "degrees Celsius is " << b << " degrees Fahrenheit." << endl;
    printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n", a, b);
    return 0;
}