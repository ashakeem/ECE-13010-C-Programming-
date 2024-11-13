

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

// Function prototypes
int rollDice();
void simulateGame(int iterations);

int main() {
    int iterations;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    cout << "Enter the number of games to simulate (e.g., 10, 1000, 1000000): ";
    cin >> iterations;

    simulateGame(iterations);

    return 0;
}

// Function to simulate a game of craps
void simulateGame(int iterations) {
    int totalWins = 0, totalLosses = 0, totalThrows = 0;

    for (int game = 1; game <= iterations; ++game) {
        int sum = rollDice();
        int throwsInGame = 1; // Initial throw

        if (sum == 7 || sum == 11) {
            totalWins++;
            cout << "Player rolled " << sum << ", Player wins\n";
        } else if (sum == 2 || sum == 3 || sum == 12) {
            totalLosses++;
            cout << "Player rolled " << sum << ", Player loses\n";
        } else {
            int point = sum;
            cout << "Player rolled " << sum << ", point is " << point << ", ";

            bool gameWon = false;
            while (true) {
                sum = rollDice();
                throwsInGame++;
                if (sum == point) {
                    totalWins++;
                    gameWon = true;
                    break;
                } else if (sum == 7) {
                    totalLosses++;
                    break;
                }
            }

            cout << "player rolled " << (throwsInGame - 1) << " more times, "
                 << (gameWon ? "player wins\n" : "player loses\n");
        }

        totalThrows += throwsInGame;
    }

    // Display summary
    cout << "\nSummary:\n";
    cout << "Total games played: " << iterations << "\n";
    cout << "Total wins: " << totalWins << "\n";
    cout << "Total losses: " << totalLosses << "\n";
    cout << "Total throws: " << totalThrows << "\n";
    cout << "Average throws per game: " << static_cast<double>(totalThrows) / iterations << "\n";
}

// Function to roll two dice and return their sum
int rollDice() {
    int die1 = rand() % 6 + 1; // Random number between 1 and 6
    int die2 = rand() % 6 + 1; // Random number between 1 and 6
    return die1 + die2;
}
