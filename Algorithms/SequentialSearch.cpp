#include <iostream>
#include <cstdlib>
#define SIZE 5
using namespace std;

void SequentialSearch(int value, int arr[]);

int main(void) {
	int arr[SIZE] = {0, 3, 6, 9, 12};

	SequentialSearch(5, arr);
	SequentialSearch(3, arr);

	system("pause");
	return 0;
}

void SequentialSearch(int value, int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] == value) {
			cout << "You got the right value. Get out of here now!!!\n";
			return;
		}
	}
	cout << "Looks like the value is not on the list. Get out of here now!!!\n";
	return;
}