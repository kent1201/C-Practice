#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main() {

    string first_name;
    string last_name;
    char grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "Whait is your last name? ";
    getline(cin, last_name);
    cout << "What letter grade did you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << char(int(grade)+1) << endl;
    cout << "Age: " << age << endl;



    return 0;
}