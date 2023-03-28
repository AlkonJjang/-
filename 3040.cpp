#include <iostream>

using namespace std;


int main() {
	int k, l ;
	int num = 0;
	int a = 0 ;
	int b = 0;
	int arr[9];

	for (int i = 0; i < 9; i++) {
		cin >> k;
		arr[i] = k;
		num = num + k;
	}
	l = num - 100;
	
	for (int i = 0; i < 9; i++){
		
		for (int k = 0; k < 9; k++)
		{
			if ( arr[i] + arr[k] == l) {
				a = i;
				b = k;
				break;
			}
			else{}
			

		}

	}
	for (int e = 0; e < 9; e++) {
		if (e == a) {}

		else if(e== b) {}

		else
		cout << arr[e]<<"\n";
	}

	return 0;
}
