#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string words[] = {"banana", "beans", "tomato", "rice", "milk", "water"};

    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        string selectedWord = words[rand() % 6];
        int numeberToTry = 5;
        string guessedWord(selectedWord.length(), '_');

        while (numeberToTry > 0) {
            cout << "Guess a word: " << guessedWord << endl;
            cout << "Remains to try: " << numeberToTry << endl;

            char guess;
            cout << "Enter letter of your choice: ";
            cin >> guess;

            bool found = false;
            for (size_t i = 0; i < selectedWord.length(); ++i) {
                if (selectedWord[i] == guess) {
                    guessedWord[i] = guess;
                    found = true;
                }
            }
            if (found) {
                cout << "Nicely guessed." << endl;
            } else {
                cout << "Incorrect guess. Try again." << endl;
                --numeberToTry;
            }

            if (guessedWord == selectedWord) {
                cout << "Congratulations! You have guessed the word: " << selectedWord << endl;
                break;
            }
        }

        if (numeberToTry <= 0) {
            cout << "The number of attempts is over, the word to guess was: " << selectedWord << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }

    cout << "Thanks for playing he game" << endl;

    return 0;
}
