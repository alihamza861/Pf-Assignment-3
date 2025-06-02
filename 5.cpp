#include <iostream>

using namespace std;

int main() {
    int scores[6][4], total[6] = {0}, winner = 0, runnerUp = 0;
  
    for (int i = 0; i < 6; i++) {
        cout << "Enter scores for Team " << i + 1 << ":\n";
        for (int j = 0; j < 4; j++) {
            cout << "Round " << j + 1 << ": ";
            cin >> scores[i][j];
            total[i] += scores[i][j];
        }
    }

    for (int i = 1; i < 6; i++) {
        if (total[i] > total[winner]) {
            runnerUp = winner;
            winner = i;
        } else if (total[i] > total[runnerUp]) {
            runnerUp = i;
        }
    }

    cout << "\nTotal Scores:\n";
    for (int i = 0; i < 6; i++)
        cout << "Team " << i + 1 << ": " << total[i] << "\n";

    cout << "\nWinner: Team " << winner + 1 << " with " << total[winner] << " points\n";
    cout << "Runner-Up: Team " << runnerUp + 1 << " with " << total[runnerUp] << " points\n";

    cout << "\nTeams that scored below 10 in any round:\n";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            if (scores[i][j] < 10) {
                cout << "Team " << i + 1 << " in Round " << j + 1 << "\n";
                break;
            }
        }
    }

    return 0;
}
