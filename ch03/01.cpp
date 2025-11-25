#include <iostream>
#include <climits>

using namespace std;
const int FACTOR = 100;

int main() {

    unsigned int input = 0;
    cout << "Enter your height: ____\b\b";
    cin >> input;
    int m_height = input / FACTOR;
    int cm_height = input % FACTOR;
    cout << "Your height is " << m_height << " m " << cm_height << " cm." << endl;

    return 0;
}