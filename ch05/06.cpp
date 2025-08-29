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
    string months[12] = {"Jan", "Feb", "Mar", "Apr", 
                         "May", "Jun", "Jul", "Aug", 
                         "Sep", "Oct", "Nov", "Dec"};
    int sells[3][12];
    int total_sales[3] = {0, 0, 0};

    for (int i=0; i<3; ++i) {

        cout << "Enter " << i+1 << " year(s) sales of book <<C++ for Fools>> each month." << endl;
        for (int j=0; j<12; ++j) {
            cout << months[j] << ": ";
            cin >> sells[i][j];

            total_sales[i] += sells[i][j];

        }
    }

    for (int i=0; i<3; ++i) {
        cout << i+1 << " year(s) total sales is " 
             << total_sales[i] << endl;
    }

    cout << "There years total sales is " 
         << total_sales[0] + total_sales[1] + total_sales[2] << endl;

    return 0;
}