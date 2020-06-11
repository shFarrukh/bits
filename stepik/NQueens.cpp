#include <iostream>
using namespace std;

int cell[10];

bool check(int i, int j, int k) {
    if (k == i) return true;
    else return cell[k] != j && (i - k) != (j - cell[k]) && (i - k) != (cell[k] - j) && check(i, j, k + 1);
}

int iter(int n, int i, int j) {
    if (i == n) return 1;
    else {
        if (j < n) {
            int r = 0;
            if (check(i, j, 0)) {
                cell[i] = j;
                r = iter(n, i + 1, 0);
            }
            return r + iter(n, i, j + 1);
        }
        else return 0;
    }
}

int main() {
    int n;
    cin >> n;
    cout << iter(n, 0, 0);
    return 0;
}
