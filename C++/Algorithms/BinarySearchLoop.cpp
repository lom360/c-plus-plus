#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

int BinarySearch(int arr[], int target);

int main() {
	int arr[SIZE] = { 0,11,24,32,45,58,67,79,84,93 };

	cout << BinarySearch(arr, 79) << endl;
	cout << BinarySearch(arr, 1) << endl;

	system("pause");
	return(0);
}

int BinarySearch(int arr[], int target) {
	int low = 0;
	int high = SIZE;
	int mid = (low + high) / 2;

	while (high >= low) {
		if (target == arr[mid]) {
			return mid;
		}
		else if (target > arr[mid]) {
			low = mid + 1;
			mid = (low + high) / 2;
		}
		else {
			high = mid - 1;
			mid = (low + high) / 2;
		}
	}

	return -1;
}