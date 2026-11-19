
#include <iostream>

using namespace std;

// Function to display the player's information
void showStatus(int lives, int crystals)
{
    cout << "Lives: " << lives << endl;
    cout << "Crystals: " << crystals << endl;
}

int main()
{
    string playerName;
    int lives = 10;
    int crystals = 0;
    int challenge;
    int choice;
    int secretNumber;

    srand(time(0));

    cout << "================================";
    cout << "    THE FORBIDDEN ISLAND        ";
    cout << "================================"<<endl;
    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "Welcome, " << playerName << "!";
    cout << "You are trapped on a mysterious island.  ";
    cout << "Complete 5 challenges to escape!  ";
    cout << "You have 10 lives. Good luck!  ";

    // Main game loop
    for (int round = 1; round <= 5 && lives > 0; round++)
    {
        cout << "========= ROUND " << round << " ==========";

        showStatus(lives, crystals);

        challenge = rand() % 3 + 1;

        switch (challenge)
        {
            case 1:
                cout << "CHALLENGE: THE MAGIC RIDDLE  ";
                cout << "What has a voice but cannot speak?  ";
                cout << "1. A bird ";
                cout << "2. An echo ";
                cout << "3. A tree"<<endl;
                cout << "Enter your answer: ";
                cin >> choice;

                if (choice == 2)
                {
                    cout << "Correct! You earned a crystal! ";
                    crystals++;
                }
                else
                {
                    cout << "Wrong answer! You lost one life. ";
                    lives--;
                }
                break;

            case 2:
                cout << "CHALLENGE: THE RIVER CROSSING ";
                cout << "Choose a bridge to cross: ";
                cout << "1. The wooden bridge ";
                cout << "2. The stone bridge "<<endl;
                cout << "Enter your choice: ";
                cin >> choice;

                if (choice == 2)
                {
                    cout << "Safe crossing! You earned a crystal! ";
                    crystals++;
                }
                else
                {
                    cout << "The bridge was unstable! You lost one life. ";
                    lives--;
                }
                break;

            case 3:
                cout << "CHALLENGE: THE HIDDEN TREASURE ";
                secretNumber = rand() % 3 + 1;

                cout << "Guess the secret number between 1 and 3: ";
                cin >> choice;

                if (choice == secretNumber)
                {
                    cout << "Amazing! You found a crystal! ";
                    crystals++;
                }
                else
                {
                    cout << "Wrong guess! You lost one life. ";
                    lives--;
                    cout << "The correct number was "
                         << secretNumber << endl;
                }
                break;
        }

        if (lives > 0)
        {
            cout << "Round completed! ";
        }
    }

    // Final game result
    cout << "================================";
    cout << "           GAME OVER";
    cout << "================================";

    showStatus(lives, crystals);

    if (lives > 0 && crystals >= 3)
    {
        cout << "CONGRATULATIONS, " << playerName << "!";
        cout << "You escaped the Forbidden Island! ";
    }
    else if (lives <= 0)
    {
        cout << "You have run out of lives! ";
        cout << "The island has defeated you. ";
    }
    else
    {
        cout << "You survived, but you did not collect enough crystals. ";
        cout << "You need at least 3 crystals to escape. ";
    }

    cout << "Thank you for playing! ";

    return 0;
}

