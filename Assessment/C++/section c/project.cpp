#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to log study hours
void logStudyHours()
{
    string day;
    float hours;

    cout << "Enter Day: ";
    cin >> day;

    cout << "Enter Study Hours: ";
    cin >> hours;

    // Open file in append mode
    ofstream file("study_data.txt", ios::app);

    file << day << " " << hours << endl;

    file.close();

    cout << "Study hours saved successfully!\n\n";
}


// Function to generate weekly report
void weeklyReport()
{
    ifstream file("study_data.txt");

    if (!file)
    {
        cout << "No study data found!\n\n";
        return;
    }

    string day;
    float hours;

    float totalHours = 0;
    int totalDays = 0;

    cout << "\n------ Weekly Study Report ------\n";

    while (file >> day >> hours)
    {
        cout << day << " : " << hours << " hours" << endl;

        totalHours += hours;
        totalDays++;
    }

    cout << "---------------------------------\n";
    cout << "Total Study Hours : " << totalHours << endl;

    if (totalDays > 0)
    {
        float average = totalHours / totalDays;

        cout << "Average Study Hours : "
             << average << endl;
    }

    cout << endl;

    file.close();
}


// Main Function
int main()
{
    int choice;

    while (true)
    {
        cout << "===== Student Productivity Tracker =====\n";
        cout << "1. Log Study Hours\n";
        cout << "2. View Weekly Report\n";
        cout << "3. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                logStudyHours();
                break;

            case 2:
                weeklyReport();
                break;

            case 3:
                cout << "Thank You!\n";
                return 0;

            default:
                cout << "Invalid Choice!\n\n";
        }
    }

    return 0;
}
