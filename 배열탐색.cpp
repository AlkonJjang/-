#include<iostream>
int arr[100004];

int first(int a,long long x) {
	int count = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] >= x) {
			count++;
		}
	}
	return count;
}
int second(int a,long long y) {
	int count = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] > y) {
			count++;
		}
	}
	return count;
}
int third(int a,long long z,long long e) {
	int count = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] >= z && arr[i] <= e)
			count++;
	}
	return count;
}


using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b,c;
	long long k,i,j,f;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> f;
		arr[i]=f;
	}
	for (int i = 1; i <= b; i++) {
		cin >>  c ;
		if (c == 1) {
			cin >> k;
			cout <<  first(a,k)<<'\n';//배열의 크기, 비교 수
		}
		else if (c == 2) {
			cin >> k;
			cout << second(a,k)<<'\n';
		}
		else {
			cin >> i >> j;
			cout << third(a,i,j)<<'\n';
		}
	}
	return 0;

}
