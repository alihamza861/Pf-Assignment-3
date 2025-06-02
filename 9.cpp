#include <iostream>

using namespace std;

int main() {
    float defects[3][7], shift_avg[3] = {0}, day_avg[7] = {0};

    for (int i = 0; i < 3; i++) {
        cout << "enter defects for shift " << i + 1 << ":\n";
        for (int j = 0; j < 7; j++) {
            cout << "day " << j + 1 << ": ";
            cin >> defects[i][j];
            shift_avg[i] += defects[i][j];
            day_avg[j] += defects[i][j];
        }
    }

    for (int i = 0; i < 3; i++) shift_avg[i] /= 7;
    for (int j = 0; j < 7; j++) day_avg[j] /= 3;

  
    cout << "\naverage defects per shift:\n";
    for (int i = 0; i < 3; i++)
        cout << "shift " << i + 1 << ": " << shift_avg[i] << "%\n";

    cout << "\naverage defects per day:\n";
    for (int j = 0; j < 7; j++)
        cout << "day " << j + 1 << ": " << day_avg[j] << "%\n";

    cout << "\ncritical shifts (defects > 10%):\n";
    for (int i = 0; i < 3; i++)
        if (shift_avg[i] > 10)
            cout << "shift " << i + 1 << " with " << shift_avg[i] << "% defects\n";

    return 0;
}
