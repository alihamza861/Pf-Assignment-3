#include <iostream>

using namespace std;

int main() {
    char seats[6][4] = { {'e', 'e', 'b', 'e'}, {'b', 'e', 'e', 'b'}, {'e', 'e', 'e', 'e'}, 
                         {'b', 'b', 'e', 'e'}, {'e', 'e', 'b', 'e'}, {'b', 'e', 'e', 'b'} };

    int row, col, empty_seats = 0, max_empty_row = 0, max_empty_count = 0;
 
    cout << "\nseating chart:\n";
    for (int i = 0; i < 6; i++) {
        int empty_count = 0;
        cout << "row " << i + 1 << ": ";
        for (int j = 0; j < 4; j++) {
            cout << seats[i][j] << " ";
            if (seats[i][j] == 'e') {
                empty_seats++;
                empty_count++;
            }
        }
        cout << "\n";
        if (empty_count > max_empty_count) {
            max_empty_count = empty_count;
            max_empty_row = i;
        }
    }

    cout << "\nenter row and column to book a seat (1-6 and 1-4): ";
    cin >> row >> col;
    if (seats[row - 1][col - 1] == 'e') {
        seats[row - 1][col - 1] = 'b';
        cout << "seat booked successfully!\n";
    } else {
        cout << "seat already booked. choose another seat.\n";
    }

    cout << "\navailable seats: " << empty_seats << "\n";
    cout << "row with most empty seats: " << max_empty_row + 1 << "\n";

    return 0;
}
