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

    candyBar snack[3] = {{"A", 2.3, 350}, {"B", 1.5, 150}, {"C", 4.8, 960}};

    cout << "Brand: " << snack[0].brand << endl;
    cout << "weight: " << snack[0].weight << endl;
    cout << "calory: " << snack[0].calory << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "weight: " << snack[1].weight << endl;
    cout << "calory: " << snack[1].calory << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "weight: " << snack[2].weight << endl;
    cout << "calory: " << snack[2].calory << endl;

    return 0;
}