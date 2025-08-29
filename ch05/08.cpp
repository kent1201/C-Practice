/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char words[500]= {'\0'};
    int count = 0;
    cout << "Enter words (type 'done' to stop): ";
    do{
        
        cin >> words;
        if (strcmp(words, "done") != 0){
            count ++;
        }
    }while(strcmp(words, "done") != 0);
    
    cout << "You Enter " << count << " words\n";

    return 0;
}