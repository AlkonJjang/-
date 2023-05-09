#include <iostream>
#include<algorithm>
using namespace std;
int n;
double arr[100001];
long long anwser;

long long binarySearch(double fileSize, int number) {
    int l = 0;
    int r = number - 1;
    int cnt = 0;

    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] < fileSize * 0.9)
            l = mid + 1;
        else r = mid - 1;
    }
    return number - l;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 1; i < n; i++) 
        anwser += binarySearch(arr[i], i);
    cout << anwser << '\n';
}
