#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    for (int j = 0; j < m; j++) {
        for (int i = n - 1; i >= 0; i--) {
            cout << matrix[i][j];
            if (i > 0) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}