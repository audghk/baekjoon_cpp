#include <iostream>
using namespace std;

int main() {

	int a[8] = { 0, };
	
	cout << "과제 제출\n";
	
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}

	int num = 0;
	for (int i =0; i < 6; i++) {
		for (int j = 1; j < 9; j++) {			
			if (a[i] == j) {
				break;
			}
			else {
				num = j;
			}
		}
		cout << num;
	}

	//for (int i = 0; i < 8; i++) {/
	//	cout << a[i];
	//}

	return 0;
}