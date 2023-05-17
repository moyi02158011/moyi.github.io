#include <iostream>

using namespace std;


int main() {

	int a[] = { 4 , 2 , 8, 0, 5, 7 , 1 , 3, 9 };

	int length = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < length - 1; i++) {
		
		for (int j = i + 1 ; j < length; j ++) {
			if (a[j] > a[i]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (int i = 0; i < length; i++) {
		cout << a[i] << endl;
	}
	
	system("pause");

	return 0;
}