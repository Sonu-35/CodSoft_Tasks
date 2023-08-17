//creating a number guessing game using c++ 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomNumber = rand() % 100 + 1;

    int userGuess, numberOfGuesses = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;
        numberOfGuesses++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << numberOfGuesses << " guesses." << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}
