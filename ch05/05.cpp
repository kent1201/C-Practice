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
    string months[12] = {"Jan", "Feb", "Mar", "Apr", 
                         "May", "Jun", "Jul", "Aug", 
                         "Sep", "Oct", "Nov", "Dec"};
    int sell[12];
    int total_sales = 0;

    cout << "Enter the sales of book <<C++ for Fools>> each month." << endl;
    for (int i=0; i < 12; ++i) {

        cout << months[i] << ":";
        cin >> sell[i];

        total_sales += sell[i];
    }

    cout << "\nThe total sales is " << total_sales << endl;
    for (int i=0; i < 12; ++i) {

        cout << months[i] << ": " << sell[i] << endl;
    }

    return 0;
}