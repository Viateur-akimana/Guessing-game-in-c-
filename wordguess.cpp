#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    string words[] = {"apple", "banana", "orange", "grape", "pineapple", "strawberry"};
    srand(static_cast<unsigned int>(time(0)));

    string selectedWord = words[rand() % (sizeof(words) / sizeof(words[0]))];
    int attempts = 5; 
    string guessedWord(selectedWord.length(), '_'); 

    cout << "Welcome to the Word Guessing Game!" << endl;

    while (attempts > 0) {
        cout << "Current word: " << guessedWord << endl;
        cout << "Attempts left: " << attempts << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        bool found = false;
        for (size_t i = 0; i < selectedWord.length(); ++i) {
            if (selectedWord[i] == guess) {
                guessedWord[i] = guess;
                found = true;
            }
        }

        if (found) {
            cout << "Good guess!" << endl;
        } else {
            cout << "Incorrect guess. Try again." << endl;
            --attempts;
        }

        // Check if the player has guessed the whole word
        if (guessedWord == selectedWord) {
            cout << "Congratulations! You guessed the word: " << selectedWord << endl;
            break;
        }
    }

    if (attempts <= 0) {
        cout << "Sorry, you're out of attempts. The correct word was: " << selectedWord << endl;
    }

    return 0;
}
