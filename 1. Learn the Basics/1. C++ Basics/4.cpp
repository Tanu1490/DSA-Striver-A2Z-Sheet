#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "enter a number between 1 to 7 :" << endl;
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thrusday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Number";
        break;
    }
    return 0;
}
