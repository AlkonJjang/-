#include<iostream>
#include<vector>

using namespace std;
int n;
int m;
vector<int> a;
long long search(int mid) {
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		ans = (mid)/a[i]+ ans;
	}
	return ans;
}

int main() {
	int right = 1000000;
	int left = 0;
	cin >> n;
	cin >> m;
	a.resize(n);
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	while (left< right) {
		int mid = (left + right) / 2;
		if (search(mid)>=m) {
			right = mid-1;
		}
		else {
			left = mid+1;
		}
	}
	cout << left;

	

	return 0;
}
