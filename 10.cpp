#include <iostream>

using namespace std;

int main() {
    int votes[4][6], total_candidates[4] = {0}, total_stations[6] = {0};
    int winner = 0;

    for (int i = 0; i < 4; i++) {
        cout << "enter votes for candidate " << i + 1 << ":\n";
        for (int j = 0; j < 6; j++) {
            cout << "polling station " << j + 1 << ": ";
            cin >> votes[i][j];
            total_candidates[i] += votes[i][j];
            total_stations[j] += votes[i][j];
        }
    }

    for (int i = 1; i < 4; i++)
        if (total_candidates[i] > total_candidates[winner]) winner = i;

    cout << "\ntotal votes per candidate:\n";
    for (int i = 0; i < 4; i++)
        cout << "candidate " << i + 1 << ": " << total_candidates[i] << "\n";

    cout << "\ntotal votes per polling station:\n";
    for (int j = 0; j < 6; j++)
        cout << "polling station " << j + 1 << ": " << total_stations[j] << "\n";

    cout << "\nwinner: candidate " << winner + 1 << " with " << total_candidates[winner] << " votes\n";

    cout << "\npolling stations with voter turnout below 100:\n";
    for (int j = 0; j < 6; j++)
        if (total_stations[j] < 100)
            cout << "polling station " << j + 1 << " with " << total_stations[j] << " votes\n";

    return 0;
}
