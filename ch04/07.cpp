#include <iostream>
// #include <climits>
#include <string>

using namespace std;

struct pizzaInfo{
    string brand;
    float diameter;
    float weight;
};

int main() {

    pizzaInfo pizza_info;

    cout << "Enter the brand of pizza: ";
    getline(cin, pizza_info.brand);
    cout << "Enter the diameter of pizze: ";
    cin >> pizza_info.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> pizza_info.weight;

    cout << "Brand: " << pizza_info.brand << endl;
    cout << "Dismeter: " << pizza_info.diameter << endl;
    cout << "Weight: " << pizza_info.weight << endl;

    return 0;
}