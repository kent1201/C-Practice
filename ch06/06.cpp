#include <iostream>
#include <string>

using namespace std;

struct Donation{
    string name;
    double number;
};

int main()
{
    int num_donator = 0;
    cout << "How many people donate?" << endl;
    cin >> num_donator;
    cin.get();
    Donation donation[num_donator];
    for (int i = 0; i < num_donator; i++){
        cout << "Enter number " << i+1 << " donator" << endl;
        cout << "Name: ";
        getline(cin, donation[i].name);
        cout << "Number of Donator: ";
        cin >> donation[i].number;
        cin.get();
    }

    unsigned int grand_amount_n = 0;
    cout << "\nGrand patron: " << endl;
    for (int i = 0; i < num_donator; i++) {

        if (donation[i].number > 10000) {
            cout << "Contributor name: " << donation[i].name << "\n"
                 << "Contributor amount: " << donation[i].number << endl;
            ++grand_amount_n;
        }
    }
    if (grand_amount_n == 0) {
        cout << "None" << endl;
    }
    bool is_empty = true;
    cout << "\nPatrons: " << endl;
    for (int i=0; i < num_donator; i++) {
        cout << "Contributor name: " << donation[i].name << "\n"
             << "Contributor amount: " << donation[i].number << endl;

        is_empty = false;
    }

    if (is_empty) {
        cout << "** None **" << endl;
    }

    return 0;
}