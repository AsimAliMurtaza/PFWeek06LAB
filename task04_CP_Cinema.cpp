#include <iostream>
using namespace std;

float totalIncome(string type, int rows, int columns);

main()
{
    int rows;
    int columns;
    string type;
    float totalPrice;

    cout << "Enter type of screening: ";
    cin >> type;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of columns: ";
    cin >> columns;

    totalPrice = totalIncome(type, rows, columns);
    cout << "Total income is: " << totalPrice << endl;
}

float totalIncome(string type, int rows, int columns)
{
    float price;

    if (type == "Premiere")
    {
        price = rows * columns * 12.00;
    }
    else if (type == "Normal")
    {
        price = rows * columns * 7.5;
    }
    else if (type == "Discount")
    {
        price = rows * columns * 5.0;
    }
    return price;   
}
