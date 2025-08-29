/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

struct car{
    string company;
    int year;
};

int main()
{
    int car_num = 0;
    cout << "How many car do you have?" << endl;
    cin >> car_num;
    car* cars = new car[car_num];
    for (int i = 0; i < car_num;i++){
        cout << "Enter each car's informations: " << endl;
        cout << "[" << i+1 << "] " << "company: ";
        cin >> (cars+i)->company;
        cout << "[" << i+1 << "] " << "year: ";
        cin >> (cars+i)->year;
    }
    cout << "Here are your cars' infomations:" << endl;
    for (int i = 0; i < car_num; i++){
        cout << "Car[" << i+1 << "] " << "company: " << (cars+i)->company << endl;
        cout << "Car[" << i+1 << "] " << "year: " << (cars+i)->year << endl;
    }

    return 0;
}