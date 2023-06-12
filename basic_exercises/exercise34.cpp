#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main(int argc, char const *argv[])
{   
    // Get the current time point
    system_clock::time_point now = system_clock::now();

    // Convert the time point to a time_t object
    time_t currentTime = system_clock::to_time_t(now);

    // Convert the time_t object to a local time struct
    tm* localTime = localtime(&currentTime);

    cout << "seconds = " << localTime->tm_sec << endl;
    cout << "minutes = " << localTime->tm_min << endl;
    cout << "hours = " << localTime->tm_hour << endl;
    cout << "day of month = " << localTime->tm_mday << endl;
    cout << "month of year = " << localTime->tm_mon + 1 << endl;
    cout << "year = " << localTime->tm_year + 1900 << endl;
    cout << "weekday = " << localTime->tm_wday << endl;
    cout << "day of year = " << localTime->tm_yday << endl;
    cout << "daylight savings = " << localTime->tm_isdst << endl;
    cout << "Current Date: " << localTime << endl;
    cout << "Current Time: " << localTime << endl;
    return 0;
}
