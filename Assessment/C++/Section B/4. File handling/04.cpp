#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream writeFile;
    ifstream readFile;

    string goal;

    // Writing goals to file
    writeFile.open("goals.txt", ios::app);

    cout << "Enter your daily goal: ";
    getline(cin, goal);

    writeFile << goal << endl;

    writeFile.close();

    cout << "\nGoals saved successfully.\n";

    // Reading goals from file
    readFile.open("goals.txt", ios::in);

    cout << "\nSaved Daily Goals:\n";

    while(getline(readFile, goal))
    {
        cout << "- " << goal << endl;
    }

    readFile.close();

    return 0;
}
