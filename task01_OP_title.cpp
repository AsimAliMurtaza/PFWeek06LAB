#include <iostream>
using namespace std;

string checkTitle(int, char);

main()
{
    int age;
    char gender;
    string result;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender: ";
    cin >> gender;

    result = checkTitle(age, gender);
    cout << "Title: " << result << endl;

}

string checkTitle(int age, char gender)
{
    string title;
    
    if (age >= 16 && gender == 'm')
    {
        title = "Mr. ";
    }
    else if(age < 16 && gender == 'm')
    {
        title = "Master";
    }
    else if(age >= 16 && gender == 'f')
    {
        title = "Ms. ";
    }
    else if(age < 16 && gender == 'f')
    {
        title = "Miss. ";
    }
    return title;
}