// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Last Modified Date: 4/10/2024

#include <iostream>
using namespace std;

int main()
{
    int n, m;       // n is the starting positive number, m is the ending positive number
    int total = 0;  // total holds the sum of the consecutive numbers from n to m
    int count;      // the amount of numbers
    float mean;     // the average of the consecutive numbers from n to m

    cout << "Please enter the starting positive integer (n): " << endl;
    cin >> n;
    cout << "Please enter the ending positive integer (m): " << endl;
    cin >> m;

    if (n > 0 && m > n)
    {
        for (int number = n; number <= m; number++)
        {
            total += number;
        }

        count = m - n + 1;  // Calculate the count of numbers
        mean = static_cast<float>(total) / count;  // Compute the mean

        cout << "The mean average of the consecutive positive integers from " << n
             << " to " << m << " is " << mean << endl;
    }
    else
        cout << "Invalid input - ensure n is positive and m is greater than n." << endl;

    return 0;
}
