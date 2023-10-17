#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int number = (rand() % 100) + 1;
    int guess = 0;

    do {
        cout << "Enter the guess number (1-100): ";
        cin >> guess;
        if (guess > number) {
        cout << "Guess lower!\n";
        } else if (guess < number) {
        cout << "Guess higher!\n";
        } else {
            cout << "You won!";
        }
    } while (guess != number);

    return 0;
}
