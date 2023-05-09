#include <iostream>
#include <vector>
using namespace std;

const long long X = 2147483647;
vector<long long> a, b, c;
int n;

long long search(long long mid) {
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (mid >= a[i]) {
            ans += (min(mid, b[i]) - a[i]) / c[i] + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long left = 0, right = X + 1, count = -1;
    cin >> n;
    a.resize(n);
    b.resize(n);
    c.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (search(mid) % 2) {
            right = mid - 1;
            count = mid;
        }
        else {
            left = mid + 1;
        }
    }

    if (count == -1) {
        cout << "NOTHING";
    }
    else {
        cout << count << " " << search(count) - search(count - 1);
    }

    return 0;
}
