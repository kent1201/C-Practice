#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fn;
    ifstream in_file_handle;
    
    unsigned int count = 0;
    char ch;

    cout << "Enter a file name: ";
    getline(cin, fn);

    in_file_handle.open(fn.c_str());

    in_file_handle >> ch;
    while (in_file_handle.good()){
        if (in_file_handle.eof()){
            break;
        }
        ++count;
        in_file_handle >> ch;
    }
    in_file_handle.close();
    cout << "There are " << count << " characters in " << fn << " file." << endl;

    return 0;
}