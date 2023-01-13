#include <iostream>
using namespace std;
bool isEqual(int num1, int num2, int num3);

main()
{
    int num1;
    int num2;
    int num3;
    bool result;

    cout << "Enter num 1: ";
    cin >> num1;
    cout << "enter num 2: ";
    cin >> num2;
    cout << "Enter num3 : ";
    cin >> num3;

    result = isEqual(num1, num2, num3);
    if(result==true)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

}

bool isEqual(int num1, int num2, int num3)
{
    if (num1== num2 && num1 == num3)
    {
        return true;
    }
    else
    {
       return false;
    }
}