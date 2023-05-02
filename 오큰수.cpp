#include <iostream>
#include <stack>
using namespace std;


int number[1000000], answer[1000000];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	stack <int> st;
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i)
		cin >> number[i];

	for (int i = N - 1; i >= 0; --i) {
		int now = number[i];
		while (st.empty()==0) {
			if (st.top() <= now)
				st.pop();
			else
				break;
		}
		if (st.empty())
			answer[i] = -1;
		else
			answer[i] = st.top();
		st.push(now);
	}

	for (int i = 0; i < N; ++i) {
		cout << answer[i] << " ";
	}

	return 0;
}
