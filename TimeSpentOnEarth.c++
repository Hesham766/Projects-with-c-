#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    IOS 
    int year;
    cin >> year;

    int months = year * 12;
    int weeks = year * 52;
    int days = year * 365;
    int hours = days * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;

    if (year >= 100)
    {
        cout << "Welcome to Hell😅😅😅" << endl;
    }
    
    cout << "You Are " << year << " Years old." << endl;
    cout << "You have spent on earth : " << endl;
    cout << "Months :" << months << endl;
    cout << "weeks :" << weeks << endl;
    cout << "days :" << days << endl;
    cout << "Hours :" << hours << endl;
    cout << "Minutes :" << minutes << endl;
    cout << "Seconds :" << seconds << endl;
}