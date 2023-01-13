//Task 09 CP.
#include <iostream>
using namespace std;

int volleyTime(string, int, int);

main()
{
    string yearType; //Type of year.
    int holidays; //Holidays aside from Saturday and Sunday.
    int weekendHome; //Weekends in which Vladmir returns home.
    int result;

    cout << "Enter type of year (Leap or Normal): ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter times visited hometown: ";
    cin >> weekendHome;

    result = volleyTime(yearType, holidays, weekendHome);
    cout << "Total play: " << result << endl;
}

int volleyTime(string yearType, int holidays, int weekendHome)
{
    float weekendLeft;
    float weekendPlayed;
    float finalTime;
    float holidayPlayTime;

    weekendLeft = 48 - weekendHome;

    weekendPlayed = ((weekendLeft * 3) / 4);

    holidayPlayTime = ((holidays * 2) / 3);
    
    finalTime = weekendPlayed + holidayPlayTime + weekendHome;

    if(yearType == "Leap")
	{
	finalTime = finalTime * 1.15;
    }
    return finalTime;

}