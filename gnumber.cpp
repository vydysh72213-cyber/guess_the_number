#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to Guess the Number!" << endl;
    cout << "I have chosen a number between 1 and 100." << endl;

    while (guess != secret) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > secret) {
            cout << "Too high! Try again." << endl;           
        } else if (guess < secret) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
        }         
        
    }
    return 0;
}
    
