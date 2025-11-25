#include<iostream>

float convert_to_miles(long kilometers){
    return kilometers * 220.0;
}

int main(){
    using namespace std;
    float input_distance = 0.0;
    cout << "Enter distance in long format: ";
    cin >> input_distance;
    float output_miles = 0.0;
    output_miles = convert_to_miles(input_distance);
    cout << "Distance in miles: " << output_miles << endl;
    return 0;
}