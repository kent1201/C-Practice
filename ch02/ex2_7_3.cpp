#include<iostream>

void define_one(){
    using namespace std;
    cout << "Three blind mice" << endl;
}

void define_two()
{
    using namespace std;
    cout << "See how they run" << endl;
}

int main(){
    define_one();
    define_one();
    define_two();
    define_two();
    return 0;
}