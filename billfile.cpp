//This program prompts users for the number of tellers at bank that worked each of the last three years
// For each worker the program should ask for the number of days sick for edach of the last three years
//Then provides output with total number of days


// Last Modified Date: 4/10/2024

#include <iostream>
using namespace std;

int main() {
    int numTellers;
    cout << "How many tellers worked at Nation's Bank during each of the last three years?" << endl;
    cin >> numTellers;

    int totalDaysOutSick = 0; // This will accumulate the total days out sick for all tellers over 3 years
    int daysOutSick; // Temp variable to store input for each teller each year

    for (int teller = 1; teller <= numTellers; ++teller) {
        int tellerTotal = 0; // Accumulate days out for this teller over 3 years
        for (int year = 1; year <= 3; ++year) {
            cout << "How many days was teller " << teller << " out sick during year " << year << "?" << endl;
            cin >> daysOutSick;
            tellerTotal += daysOutSick;
        }
        totalDaysOutSick += tellerTotal;
    }

    cout << "The " << numTellers << " tellers were out sick for a total of " << totalDaysOutSick << " days during the last 3 years." << endl;

    return 0;
}
