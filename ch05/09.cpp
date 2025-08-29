/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words;
    int count = 0;
    cout << "Enter words (type 'done' to stop): ";
    do{
        
        cin >> words;
        if (words != "done"){
            count ++;
        }
    }while(words != "done");
    
    cout << "You Enter " << count << " words\n";

    return 0;
}