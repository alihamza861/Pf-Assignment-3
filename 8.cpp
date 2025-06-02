#include <iostream>

using namespace std;

int main() {
    char books[5][5] = { {'a', 'i', 'm', 'a', 'a'}, {'i', 'a', 'm', 'i', 'a'}, {'m', 'm', 'a', 'a', 'i'},
                         {'a', 'i', 'a', 'm', 'm'}, {'i', 'a', 'i', 'a', 'm'} };

    int available = 0, issued = 0, missing = 0, max_missing_row = 0, max_missing_count = 0;

    cout << "\nlibrary book status:\n";
    for (int i = 0; i < 5; i++) {
        int missing_count = 0;
        cout << "shelf " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cout << books[i][j] << " ";
            if (books[i][j] == 'a') available++;
            else if (books[i][j] == 'i') issued++;
            else if (books[i][j] == 'm') {
                missing++;
                missing_count++;
            }
        }
        cout << "\n";
        if (missing_count > max_missing_count) {
            max_missing_count = missing_count;
            max_missing_row = i;
        }
    }

    cout << "\ntotal count:\n";
    cout << "available: " << available << "\n";
    cout << "issued: " << issued << "\n";
    cout << "missing: " << missing << "\n";

    cout << "\nshelf with most missing books: shelf " << max_missing_row + 1 << " with " << max_missing_count << " missing books\n";

    return 0;
}
