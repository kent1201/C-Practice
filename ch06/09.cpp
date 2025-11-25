#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Donation{
    string name;
    double number;
};

int main()
{
    int num_donator = 0;
    // cout << "How many people donate?" << endl;
    // cin >> num_donator;
    // cin.get();
    // for (int i = 0; i < num_donator; i++){
    //     cout << "Enter number " << i+1 << " donator" << endl;
    //     cout << "Name: ";
    //     getline(cin, donation[i].name);
    //     cout << "Number of Donator: ";
    //     cin >> donation[i].number;
    //     cin.get();
    // }

    // Read and open file
    ifstream inFile;
    string fn = "D:\\Users\\KentTsai\\Documents\\Projects\\C++Practice\\C++ Primer PLus Practices\\Ch06\\09.txt";
    inFile.open(fn.c_str());


    // Read first line (number of donators)
    inFile >> num_donator;
    // Read blank and \n
    inFile.get();
    // cout << "There are " << num_donator << " donators." << endl;
    
    Donation donation[num_donator];

    // Read each line and submit the informations. 
    for (int i = 0; i < num_donator; i++){
        if (inFile.eof()){
            break;
        }
        else if (inFile.fail()){
            break;
        }
        else if (inFile.good()){
            getline(inFile, donation[i].name);
            inFile >> donation[i].number;
            inFile.get();
            // cout << "\tRead: " << donation[i].name << endl;
            // cout << "\tRead: " << donation[i].number << endl;
        }
    }
    inFile.close();

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