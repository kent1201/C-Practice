/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <array>

using namespace std;

const int ar_size = 100;

int main()
{
    array<long double, ar_size> factorials;

    factorials[0] = factorials[1] = 1;
    for (int i = 2; i < ar_size+1; ++i) {

        factorials[i] = i * factorials[i-1];
    }

    for (int i = 0; i < ar_size + 1; ++i) {

        cout << i << "! = " << factorials[i] << "\n";
    }
    cout << endl;

    return 0;
}