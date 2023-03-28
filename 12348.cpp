#include <iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int N;
    long long int o = 0;
    long long int x = 0;
    cin >> N;
    long long int s = N;
    long long int sum = 0;
    while (s > 0) {
        s = s / 10;
        x++;
    }
    int e = x * 9;
    for (long long int i =  max(1LL, N - e) ; i < N; i++) {
        long long int k = i;
        long long int sum = i;
        while (k > 0) {
            sum += k % 10;
            k = k / 10;
        }
        if (sum == N) {
            o = i;
            break;
        }
    }
    cout << o;
    return 0;
}
