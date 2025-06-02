
#include <iostream>

using namespace std;

int main() {
    float sales[4][7], itemTotal[4] = {0}, dayTotal[7] = {0};
    for (int i = 0; i < 4; i++) {
        cout << "Enter sales for Item " << i + 1 << ":\n";
        for (int j = 0; j < 7; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> sales[i][j];
            itemTotal[i] += sales[i][j];
            dayTotal[j] += sales[i][j];
        }
    }

    int bestItem = 0, bestDay = 0;
    for (int i = 1; i < 4; i++)
        if (itemTotal[i] > itemTotal[bestItem]) bestItem = i;
    
    for (int j = 1; j < 7; j++)
        if (dayTotal[j] > dayTotal[bestDay]) bestDay = j;

    cout << "\nTotal Sales per Item:\n";
    for (int i = 0; i < 4; i++)
        cout << "Item " << i + 1 << ": " << itemTotal[i] << "\n";

    cout << "\nTotal Sales per Day:\n";
    for (int j = 0; j < 7; j++)
        cout << "Day " << j + 1 << ": " << dayTotal[j] << "\n";

    cout << "\nBest Selling Item: Item " << bestItem + 1 << " with total sales: " << itemTotal[bestItem] << "\n";
    cout << "Highest Sales Day: Day " << bestDay + 1 << " with total sales: " << dayTotal[bestDay] << "\n";

    return 0;
}
