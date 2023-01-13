#include <iostream>
using namespace std;

float checkCost(string, string, int);

main()
{
    string city;
    string product;
    int quantity;
    float result;

    cout << "Enter city name: ";
    cin >> city;
    cout << "Enter product: ";
    cin >> product;
    cout << "Enter quantity: ";
    cin >> quantity;

    result = checkCost(city, product, quantity);
    cout << "Cost is: " << result << endl;
}

float checkCost(string city, string product, int quantity)
{
    float cost;
    if (city=="Sofia" && product=="coffee")
    {
        cost = quantity * 0.5;
    }
    else if (city=="Sofia" && product=="water")
    {
        cost = quantity * 0.80;
    }
    else if (city=="Sofia" && product=="beer")
    {
        cost = quantity * 1.20;
    }
    else if (city=="Sofia" && product=="sweets")
    {
        cost = quantity * 1.45;
    }
    else if (city=="Sofia" && product=="peanuts")
    {
        cost = quantity * 1.60;
    }

    if (city=="Plovdiv" && product=="coffee")
    {
        cost = quantity * 0.4;
    }
    else if (city=="Plovdiv" && product=="water")
    {
        cost = quantity * 0.7;
    }
    else if (city=="Plovdiv" && product=="beer")
    {
        cost = quantity * 1.15;
    }
    else if (city=="Plovdiv" && product=="sweets")
    {
        cost = quantity * 1.30;
    }
    else if (city=="Plovdiv" && product=="peanuts")
    {
        cost = quantity * 1.50;
    }

    if (city=="Varna" && product=="coffee")
    {
        cost = quantity * 0.45;
    }
    else if (city=="Varna" && product=="water")
    {
        cost = quantity * 0.70;
    }
    else if (city=="Varna" && product=="beer")
    {
        cost = quantity * 1.10;
    }
    else if (city=="Varna" && product=="sweets")
    {
        cost = quantity * 1.35;
    }
    else if (city=="Varna" && product=="peanuts")
    {
        cost = quantity * 1.55;
    }
    return cost;
}