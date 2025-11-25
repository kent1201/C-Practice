#include <iostream>
// #include <cctype>

using namespace std;

int main()
{
    char choice;
    bool flag = true;
    cout << "Please enter one of the following choices:" << endl;
    cout << "\t(a) a\t(b) b" << endl;
    cout << "\t(c) c\t(d) d" << endl;

    while (flag){
        cin >> choice;
        switch (choice){
            case 'a': {
                cout << "You choose a!" << endl;
                flag = false;
                break;
            }
            case 'b': {
                cout << "You choose b!" << endl;
                flag = false;
                break;
            }
            case 'c': {
                cout << "You choose c!" << endl;
                flag = false;
                break;
            }
            case 'd': {
                cout << "You choose d!" << endl;
                flag = false;
                break;
            }
            default: {
                cout << "Please enter a, b, c or d!" << endl;
                break;
            }
        }
    }

    return 0;
}