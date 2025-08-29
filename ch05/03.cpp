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
    int cur_num = 0;
    int total_sum = 0;
    do{
        cout << "Enter a number: ";
        cin >> cur_num;
        total_sum += cur_num;
        cout << "Tha sum is: " << total_sum << endl;
    }while(cur_num != 0);

    return 0;
}