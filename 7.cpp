#include <iostream>

using namespace std;

int main() {
    int ratings[5][10], total[5] = {0}, perfectCount[5] = {0};
    float average[5];
    int worstProduct = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter ratings (1-5) for product " << i + 1 << ":\n";
        for (int j = 0; j < 10; j++) {
            cout << "User " << j + 1 << ": ";
            cin >> ratings[i][j];
            total[i] += ratings[i][j];
            if (ratings[i][j] == 5) perfectCount[i]++;
        }
        average[i] = total[i] / 10.0;
    }

    for (int i = 1; i < 5; i++)
        if (average[i] < average[worstProduct]) worstProduct = i;

  
    cout << "\nAverage rating per product:\n";
    for (int i = 0; i < 5; i++)
        cout << "Product " << i + 1 << ": " << average[i] << "\n";

    cout << "\nPerfect ratings count:\n";
    for (int i = 0; i < 5; i++)
        cout << "Product " << i + 1 << ": " << perfectCount[i] << " users rated 5\n";

    cout << "\nWorst-rated product: Product " << worstProduct + 1 << " with average rating " << average[worstProduct] << "\n";

    return 0;
}
