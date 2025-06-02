
#include <iostream>

using namespace std;

int main() {
    char status[5][7];
    int stable = 0, critical = 0, recovered = 0, critical_days[5] = { 0 };

    for (int i = 0; i < 5; i++) {
        cout << "enter status for patient " << i + 1 << " (s/c/r):\n";
        for (int j = 0; j < 7; j++) {
            cout << "day " << j + 1 << ": ";
            cin >> status[i][j];

            if (status[i][j] == 's') stable++;
            else if (status[i][j] == 'c') {
                critical++;
                critical_days[i]++;
            }
            else if (status[i][j] == 'r') recovered++;
        }
 
    cout << "\ntotal count of patients in each status:\n";
    cout << "stable: " << stable << "\n";
    cout << "critical: " << critical << "\n";
    cout << "recovered: " << recovered << "\n";

    cout << "\ndays each patient remained critical:\n";
    for (int i = 0; i < 5; i++) {
        cout << "patient " << i + 1 << ": " << critical_days[i] << " days\n";
    }

    return 0;
}
