#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    string options[] = {"Rock", "Paper", "Scissors"};
    char playAgain;
    do {
        int computerChoice = rand() % 3;
        int userChoice;
        cout << "Please select your move (0 for Rock, 1 for Paper, 2 for Scissors): ";
        cin >> userChoice;
        cout << "You choose: " << options[userChoice] << endl;
        cout << "Computer choose: " << options[computerChoice] << endl;
        int diff = (userChoice - computerChoice + 3) % 3;
        if (diff == 0) {
            cout << "It's a draw!" << endl;
        } else if (diff == 1) {
            cout << "You won this round!" << endl;
        } else {
            cout << "Computer won this round!" << endl;
        }
        cout << "Would you like to play again? (yes/no): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Game over!!" << endl;

    return 0;
}

