#include <iostream>
#include "MyTime.h"
#include "ValueOutOfRangeException.h"

using namespace std;

int main()
{
    int t_hour,t_minute,t_second;
    cout << "Enter the time" << endl;
    while (cin >> t_hour >>t_minute>> t_second)
        {
         try
            {
            MyTime t1(t_hour,t_minute,t_second);
            t1.toString();

             cout << "Next Second" << endl;
             t1.nextSecond();
             t1.toString();

            cout << "\n\n";
            cout << "Next Minute" << endl;
            t1.nextMinute();
            t1.toString();

            cout <<"\n\n";
            cout << "Next Hour" << endl;
            t1.nextHour();
            t1.toString();
            }
        catch (ValueOutOfRangeException &ValueOutOfRange)
        {
            cout << "Here is an exception! " << ValueOutOfRange.what() << endl;
        }
        cout << "Enter the time: " << endl;
    }
    cout << endl;
}

