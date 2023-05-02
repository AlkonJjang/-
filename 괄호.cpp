#include<iostream>
#include<stack>
using namespace std;
int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	stack<int> st;
	int n;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		for (int e = 0; e < k.length(); e++) {
			if (k[e] == '(') {
				st.push(1);

			}
			else if (k[e] == ')') {
				if (st.empty() == 1) {
					st.push(1);
					break;
				}
				else
					st.pop();
			}
			else
				break;

		}
		if (st.empty() == 1) {
			cout << "YES" << "\n";
		}
		else
			cout << "NO"<< "\n";
		st = stack<int>();

	}

	return 0;
}
