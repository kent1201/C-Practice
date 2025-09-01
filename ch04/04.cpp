#include <iostream>
// #include <climits>
#include <string>

using namespace std;

int main() {

    string name;
    string first_name, last_name;
    cout << "What is your first name? ";
    getline(cin, first_name);
    cout << "Whait is your last name? ";
    getline(cin, last_name);
    name = first_name + ", " + last_name;
    cout << "Here's the information in a single string: " << name << endl;


    return 0;
}