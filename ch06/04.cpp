#include <iostream>
// #include <cctype>

using namespace std;

const int strsize = 100;

// Benevolent order of programmers strcture
struct Bop {
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

const int b_size = 5;
const Bop bops[b_size] = {
    {"Wimp Macho", "bbb", "c", 0},
    {"Raki Rhodes", "2XXXX", "3XXXXX", 1},
    {"Celia Laiter", "2AAAA", "3AAAAA", 2},
    {"Hoppy Hipman", "2BBBB", "3BBBBB", 0},
    {"Pat Hand", "4CCCC", "3CCCCC", 1}
};


int main()
{
    
    cout << "Benevolent order of Programmers report." << endl;
    cout << "a. display by name     b. display by title\n"
         << "c. display by bopname  d. display by preference\n"
         << "q. quit" << endl;
    char choice;
    do{
        choice = cin.get();
        switch (choice){
            case 'a': {
                for (int i = 0; i < b_size; i++){
                    cout << bops[i].fullname << endl;
                }
                cin.get();
                cout << "Next choice: ";
                break;
            }
            case 'b': {
                for (int i = 0; i < b_size; i++){
                    cout << bops[i].title << endl;
                }
                cin.get();
                cout << "Next choice: ";
                break;
            }
            case 'c': {
                for (int i = 0; i < b_size; i++){
                    cout << bops[i].bopname << endl;
                }
                cin.get();
                cout << "Next choice: ";
                break;
            }
            case 'd': {
                for (int i = 0; i < b_size; i++){
                    if (bops[i].preference == 0){
                        cout << bops[i].fullname << endl;
                    }
                    else if(bops[i].preference == 1) {
                        cout << bops[i].title << endl;
                    }
                    else{
                        cout << bops[i].bopname << endl;
                    }
                }
                cout << "Next choice: ";
                cin.get();
                break;
            }
            case 'q': {
                break;
            }
            default: {
                cout << "Please input a, b, c, d or enter q to quit." << endl;
                cin.get();
                break;
            }
        }
    }while(choice != 'q');

    return 0;
}