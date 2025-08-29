/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float Daphne_dollar = 100.0;
    float fixed_profit = Daphne_dollar * 0.1;
    float Cleo_dollar = 100.0;
    int year = 0;
    
    while (Cleo_dollar <= Daphne_dollar){
        ++year;
        Daphne_dollar += fixed_profit;
        Cleo_dollar += Cleo_dollar * 0.05;
    }
    
    cout << "After " << year << " Years. " 
         << "Cleo's account is " << Cleo_dollar
         << " while more than the one of Daphne which is " 
         << Daphne_dollar << "." << endl;

    return 0;
}