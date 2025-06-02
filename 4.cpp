#include <iostream>

using namespace std;

int main() {
    float temp[5][5], avg[5] = {0};
    int hotRow = 0, hotCol = 0, coldRow = 0, coldCol = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter temperatures for Zone " << i + 1 << ":\n";
        for (int j = 0; j < 5; j++) {
            cout << "Location " << j + 1 << ": ";
            cin >> temp[i][j];
            avg[i] += temp[i][j];

            if (temp[i][j] > temp[hotRow][hotCol]) {
                hotRow = i;
                hotCol = j;
            }
            if (temp[i][j] < temp[coldRow][coldCol]) {
                coldRow = i;
                coldCol = j;
            }
        }
        avg[i] /= 5;
    }
  
    cout << "\nAverage Temperature of Each Zone:\n";
    for (int i = 0; i < 5; i++)
        cout << "Zone " << i + 1 << ": " << avg[i] << "°C\n";

    cout << "\nExtreme Temperature Spots:\n";
    cout << "Hottest Spot: Zone " << hotRow + 1 << ", Location " << hotCol + 1 << "\n";
    cout << "Coldest Spot: Zone " << coldRow + 1 << ", Location " << coldCol + 1 << "\n";

    return 0;
}
