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

    pizzaInfo* pizza_ptr = new pizzaInfo;

    cout << "Enter the diameter of pizze: ";
    cin >> pizza_ptr->diameter;

    cout << "Enter the weight of pizza: ";
    cin >> pizza_ptr->weight;

    // Use cin.get() to receive the "\n" left in  cin stream.
    cin.get();

    cout << "Enter the brand of pizza: ";
    getline(cin, pizza_ptr->brand);
    
    

    cout << "Brand: " << pizza_ptr->brand << endl;
    cout << "Dismeter: " << pizza_ptr->diameter << endl;
    cout << "Weight: " << pizza_ptr->weight << endl;

    return 0;
}