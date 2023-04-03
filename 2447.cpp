#include <iostream>
using namespace std;

void bulid(int a, int b, int c) {
	if (a / c % 3 == 1 && b / c % 3 == 1) {
		cout << " ";
	}
	else if (c / 3 == 0) {
		cout << "*";
	}
	else {
		bulid(a, b, c / 3);
	}
}

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			bulid(i, k, n);
		}
		cout << '\n';
	}
    
    return 0;
}
