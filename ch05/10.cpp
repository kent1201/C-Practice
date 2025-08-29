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
    int layer = 0;
    cout << "Enter Layer of stars you want: ";
    cin >> layer;
    for (int i = 1; i < layer+1; i++){
        for (int j = 0; j < layer - i; j++){
            cout << ".";
        }
        for (int a = 0; a < i;a++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}