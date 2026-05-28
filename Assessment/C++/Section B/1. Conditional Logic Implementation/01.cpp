#include <iostream>
using namespace std;

int main()
{
    int hours;

    cout << "Enter hours studied today: ";
    cin >> hours;

    if(hours == 0)
    {
        cout << "Start studying today. Small steps matter!";
    }
    else if(hours >= 1 && hours <= 2)
    {
        cout << "Good start! Keep improving daily.";
    }
    else if(hours >= 3 && hours <= 5)
    {
        cout << "Great job! You are working hard.";
        
    }
    else if(hours >= 6)
    {
        cout << "Excellent dedication! Keep shining.";
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
