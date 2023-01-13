#include <iostream>
using namespace std;

string checkSpeed(float);

main()
{
    float speed;
    string result;

    cout << "Enter speed: ";
    cin >> speed;

    result = checkSpeed(speed);
    cout << result << endl;
}

string checkSpeed(float speed)
{
    string isSpeed;

    if (speed <= 10)
    {
        isSpeed = "Slow!";
    }
    else if(speed > 10 && speed <= 50)
    {
        isSpeed = "Average";
    }
    else if(speed > 50 && speed <= 150)
    {
        isSpeed = "Fast";
    }
    else if(speed > 150 && speed <= 1000)
    {
        isSpeed = "Ultra fast";
    }
    else if(speed > 1000)
    {
        isSpeed = "extremely fast";
    }
    return isSpeed;
}