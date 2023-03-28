#include <iostream>

using namespace std;


int main() {
	int  N, T, K, E;
	int Q = 0;
	int k = 0;


	cin >> N >> T;//갯수, 시간
	int arr[100] = { 0 };//N이 2개
	int* arr1 = new int[T];//arr1[20]
	for (int i = 0; i < T; i++)//T가 20

	{

		arr1[i] = 0;
	}//시간 배열
	

	for (int i = 0; i < N; i++) {
		cin >> K;
		arr[i] = K;//arr[0]=4
	}//갯수배열 2개 입력

	for (int i = 0; i < N; i++) {
		E = arr[i];//아이가 0이면 E는 K4/1->6//4
		for (int u = 1; E*u <= T; u++) {//4*1 4*2 4*3 4*4 
			
			arr1[E * u-1] = 1;

		}

	}
	for (int i = 0; i < T; i++) {
		if (arr1[i] == 0) {
		}
		else {
			Q = Q + 1;
			
		}

	}
	cout << Q;
	



	return 0;
}
