#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char a[100][100];
    char target;
    bool found = false;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == target) {
                cout << "Found at " << i << " " << j;
                found = true;
                return 0;
            }
        }
    }

    cout << "Not Found";

    return 0;
}