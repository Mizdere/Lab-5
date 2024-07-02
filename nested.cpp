#include <iostream>
using namespace std;

int main()
{
    int numStudents, numDays;
    float numHoursProg, numHoursBio, totalProg, totalBio, averageProg, averageBio;
    int student, day;

    cout << "This program will find the average number of hours a day"
         << " that a student spent programming and studying biology over a long weekend\n\n";
    cout << "How many students are there?" << endl;
    cin >> numStudents;

    cout << "Enter the number of days in the long weekend" << endl;
    cin >> numDays;

    for (student = 1; student <= numStudents; student++)
    {
        totalProg = 0;
        totalBio = 0;

        for (day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of hours worked by student "
                 << student << " on programming on day " << day << "." << endl;
            cin >> numHoursProg;
            totalProg += numHoursProg;

            cout << "Please enter the number of hours worked by student "
                 << student << " on studying biology on day " << day << "." << endl;
            cin >> numHoursBio;
            totalBio += numHoursBio;
        }

        averageProg = totalProg / numDays;
        averageBio = totalBio / numDays;

        cout << "\nThe average number of hours per day spent programming by "
             << "student " << student << " is " << averageProg << endl;
        cout << "The average number of hours per day spent studying biology by "
             << "student " << student << " is " << averageBio << endl;

        if (averageProg > averageBio)
        {
            cout << "Student " << student << " spent more time on programming on average.\n\n\n";
        }
        else if (averageBio > averageProg)
        {
            cout << "Student " << student << " spent more time on biology on average.\n\n\n";
        }
        else
        {
            cout << "Student " << student << " spent the same amount of time on both subjects on average.\n\n\n";
        }
    }

    return 0;
}
