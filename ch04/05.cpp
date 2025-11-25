#include <iostream>
// #include <climits>
#include <string>

using namespace std;

struct candyBar{
    string brand;
    float weight;
    int calory;
};

int main() {

    candyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Brand: " << snack.brand << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "calory: " << snack.calory << endl;

    return 0;
}