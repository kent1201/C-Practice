#include <iostream>
// #include <climits>
#include <cstring>

using namespace std;

int main() {

    char name[60];
    char first_name[40], last_name[40];
    cout << "What is your first name? ";
    cin.get(first_name, 40).get();
    cout << "Whait is your last name? ";
    cin.get(last_name, 40).get();
    strncpy(name, last_name, strlen(last_name));
    strcat(name, ", ");
    strcat(name, first_name);
    cout << "Here's the information in a single string: " << name << endl;


    return 0;
}