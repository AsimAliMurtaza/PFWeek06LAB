#include <iostream>
#include <math.h>
using namespace std;

float lowestPrice(int kilometer, string time);

main()
{
    int kilometer;
    string time;
    float price;

    cout << "Enter number of kilometers: ";
    cin >> kilometer;
    cout << "Enter time (Day or Night): ";
    cin >> time;

    price = lowestPrice(kilometer, time);
    cout << "Lowest Price: " << price << endl;

}
float lowestPrice(int kilometer, string time)
{
    float taxiPrice;
    float trainPrice;
    float busPrice;
    float minimumPrice;

    if (time == "day")
    {
        taxiPrice = (kilometer * 0.79) + 0.7;
    }
    else if (time == "night")
    {
        taxiPrice = (kilometer * 0.90) + 0.7;
    }

    if (kilometer > 20)
    {
        busPrice = kilometer * 0.09;
    }
    if (kilometer > 100)
    {
        trainPrice = kilometer * 0.06;
    }
    
    minimumPrice = min(taxiPrice, busPrice);

    if (kilometer > 100)
    minimumPrice = min(minimumPrice, trainPrice);

    return minimumPrice;
}