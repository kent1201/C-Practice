#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {

    char first_name[40];
    char last_name[40];
    char grade;
    int age;
    cout << "What is your first name? ";
    cin.get(first_name, 40).get();
    cout << "Whait is your last name? ";
    cin.get(last_name, 40).get();
    cout << "What letter grade did you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(int(grade)+1) << endl;
    cout << "Age: " << age << endl;



    return 0;
}