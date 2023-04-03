#include <iostream>
#include <cmath>
using namespace std;

int N, r, c;
int q;

void change(int x, int y, int n) {
    if (n == 2) { 
        if (x == r && y == c) {
            cout << q << '\n';
            return;
        }
        q++;

        if (x == r && y + 1 == c) {
            cout << q << '\n';
            return;
        }
        q++;

        if (x + 1 == r && y == c) {
            cout << q << '\n';
            return;
        }
        q++;

        if (x + 1 == r && y + 1 == c) {
            cout << q << '\n';
            return;
        }
        q++;

        return;
    }

    int m = n / 2;
    if (r < x + m && c < y + m) { // 1사분면
        change(x, y, m);
    } else if (r < x + m && c >= y + m) { // 2사분면
        q += m * m;
        change(x, y + m, m);
    } else if (r >= x + m && c < y + m) { // 3사분면
        q += m * m * 2;
        change(x + m, y, m);
    } else { // 4사분면
        q += m * m * 3;
        change(x + m, y + m, m);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N >> r >> c;
    change(0, 0, pow(2, N));
    return 0;
}
