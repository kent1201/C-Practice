
#include <iostream>

const int sec2min = 60;
const int min2hour = 60;
const int hour2day = 24;

int main() {

    using namespace std;
    long long total_seconds = 0;
    cout << "Enter the number of seconds: \n";
    cin >> total_seconds;
    int seconds = total_seconds % (sec2min * min2hour * hour2day) % (sec2min * min2hour) % (sec2min);
    int minutes = (total_seconds % (sec2min * min2hour * hour2day) % (sec2min * min2hour)) / (sec2min);
    int hours = (total_seconds % (sec2min * min2hour * hour2day)) / (sec2min * min2hour);
    int days = total_seconds / (sec2min * min2hour * hour2day);
    cout << total_seconds << " seconds = " << days << " days, ";
    cout << hours << " hours, ";
    cout << minutes << " minutes, ";
    cout << seconds << " seconds\n";


    return 0;
}
