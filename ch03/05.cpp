
#include <iostream>

int main() {

    using namespace std;
    long long global_population = 0;
    long long American_population = 0;
    
    cout << "Enter the world's population: ";
    cin >> global_population;
    cout << "Enter the population of US: ";
    cin >> American_population;

    double ratio = double(American_population) / global_population;

    cout << "The population of US is " << ratio*100.0 << "% of the world's population.\n";


    return 0;
}
