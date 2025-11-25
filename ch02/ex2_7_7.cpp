#include<iostream>

void print_time(int hour, int min)
{
    using namespace std;
    cout << "Time: " << hour << ":" << min << endl;
}

int main(){
    using namespace std;
    int a, b;
    a = b;
    cout << "Enter the number of hours: ";
    cin >> a;
    cout << "Enter the number of minutes: ";
    cin >> b;
    print_time(a, b);
    return 0;
}