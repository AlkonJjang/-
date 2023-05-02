#include<iostream>
#include<stack>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    stack<int> st;

    string k;
    int number1 = 0;
    int count = 0;
    int answer = 0;
    cin >> k; //()(((()())(())()))(())

    for (int e = 0; e < k.length(); e++) {
        if (k[e] == '(' && k[e + 1] == ')') { // 레이저
            st.push(3);
            e++;
        }
        else if (k[e] == '(') {
            st.push(1);
        }
        else if (k[e] == ')') {
            st.push(2);
        }
    }

    while (st.empty() == 0) {
        int top = st.top();
        st.pop();

        if (top == 3) { // 레이저
            answer = answer + count;
        }
        else if (top == 2) { // 오른쪽 괄호
            count++;
        }
        else { // 왼쪽 괄호
            count--;
            answer++; 
        }
    }

    cout << answer << "\n";

    return 0;
}
