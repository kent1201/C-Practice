#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char ch;

    do {
        cout << "Enter a character, Enter '@' to end.\n";
        ch = cin.get();
        if(isdigit(ch)){
            continue;
        }
        else if (islower(ch)){
            ch = toupper(ch);
        }
        else if (isupper(ch)){
            ch = tolower(ch);
        }
        cout << ch << endl;
        cin.get();

    } while (ch != '@');

    cout << "** done **" << endl;

    return 0;
}