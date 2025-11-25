#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string ch;
    char temp;
    int a_count = 0, non_a_count = 0, other = 0; 

    cout << "Enter words (q to quit): " << endl;

    while (cin >> ch and ch != "q"){
        if (isalpha(ch[0])){
            temp = tolower(ch[0]);
            switch (temp){
                case 'a':{
                    ++a_count;
                    break;
                }
                case 'e':{
                    ++a_count;
                    break;
                }
                case 'i':{
                    ++a_count;
                    break;
                }
                case 'o':{
                    ++a_count;
                    break;
                }
                case 'u':{
                    ++a_count;
                    break;
                }
                default:{
                    ++non_a_count;
                    break;
                }
            }
        }
        else{
            ++other;
        }
    }
    cout << a_count << " words beginning with vowels.\n"
         << non_a_count << " words beginning with consonants.\n"
         << other << " words beginning with other letter." << endl;
    return 0;
}