//Task 08 CP
#include <iostream>
using namespace std;

float isLeft(float, string, int);
main()
{
    float budget; //Total budget.
    string category; //Category i.e VIP or Normal.
    int people;
    float result;

    cout << "Enter total budget: ";
    cin >> budget;
    cout << "Chooose category type(VIP or Normal): ";
    cin >> category;
    cout << "Enter number of people: ";
    cin >> people;

    result = isLeft(budget, category, people);
    cout << result << endl;
}

float isLeft(float budget, string category, int people)
{
    float budgetLeft;
    float left;
    float totalPrice;

    if(category=="VIP")
    {
        if (people >= 1 && people <=4)
        {
            budgetLeft = budget * 0.25;
        }
        else if(people >=5 && people <= 9)
        {
            budgetLeft = budget * 0.4;
        }
        else if(people >=10 && people <= 24)
        {
            budgetLeft = budget * 0.5;
        }
        else if(people >=25 && people <= 49)
        {
            budgetLeft = budget * 0.6;
        }
        else if(people >=50)
        {
            budgetLeft = budget * 0.75;
        }
            totalPrice = people * 499.99;
            if (budgetLeft < totalPrice)
            {
            left = totalPrice - budgetLeft;
            cout << "Insufficient budget. You have left ";
            }
            if (budgetLeft>totalPrice)
            {
                left = budgetLeft - totalPrice;
                cout << "Yes! Sufficient budget. You have left ";
            }
    }
    
    if(category=="Normal")
    {
        if (people >= 1 && people <=4)
        {
            budgetLeft = budget * 0.25;
        }
        else if(people >=5 && people <= 9)
        {
            budgetLeft = budget * 0.4;
        }
        else if(people >=10 && people <= 24)
        {
            budgetLeft = budget * 0.5;
        }
        else if(people >=25 && people <= 49)
        {
            budgetLeft = budget * 0.6;
        }
        else if(people >=50)
        {
            budgetLeft = budget * 0.75;
        }
            totalPrice = people * 249.99;
            if (budgetLeft < totalPrice)
            {
            left = totalPrice - budgetLeft;
            cout << "Insufficient budget. You have left ";
            }
            if (budgetLeft>totalPrice)
            {
                left = budgetLeft - totalPrice;
                cout << "Yes! Sufficient budget. You have left ";
            }
    }
    return left;
}