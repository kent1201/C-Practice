/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void check_num(int *num1, int *num2){
    if (*num1 > *num2) {
        int tmp = *num1;
        *num1 = *num2;
        *num2 = tmp;
    }
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    check_num(&num1, &num2);
    int total_sum = 0;
    
    for (int i = num1; i <= num2; i++)
        total_sum += i;
    
    cout << "The sum from " << num1 << " to " << num2 << " is " << total_sum << endl;

    return 0;
}