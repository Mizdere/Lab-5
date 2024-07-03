// This program demonstrates the do-while loop, looping until the user guesses the correct letter

// Last Modified Date: 4/10/2024

#include <iostream>
using namespace std;

int main()
{
    char letter = 'a'; 
    cout << "Hello user, please enter a letter to try and guess the correct letter" << endl;

    do
    {
        cin >> letter;

        cout << "The letter you entered is " << letter << endl;
        
        if (letter == 'x') {
            cout << "You guessed the correct letter of " << letter << endl;
        } else {
            cout << "That is not the correct letter. Please try again." << endl;
        }
    } while (letter != 'x');

    return 0;
}