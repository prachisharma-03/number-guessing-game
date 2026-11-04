#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "========================================\n";
    cout << "      WELCOME TO THE GUESSING GAME      \n";
    cout << "========================================\n";
    cout << "I have chosen a number between 1 and 100.\n";
    cout << "Try to guess it!\n\n";

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            cout << "Too high! Try a lower number.\n\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try a higher number.\n\n";
        } else {
            cout << "\nCongratulations! You found the number " << secretNumber;
            cout << " in " << attempts << " attempts!\n";
        }
    } while (guess != secretNumber);

    cout << "========================================\n";
    cout << "Thanks for playing!\n";
    
    return 0;
}