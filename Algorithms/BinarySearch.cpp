#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

int BinarySearch(int low, int high, int arr[], int target);

int main() {
	int arr[SIZE] = { 0,11,24,32,45,58,67,79,84,93 };

	cout << BinarySearch(0, SIZE, arr, 79) << endl;

	system("pause");
	return(0);
}

int BinarySearch(int low, int high, int arr[], int target) {
	int mid = (low + high) / 2;
	if (target == arr[mid]) {
		return mid;
	}
	else if(target > arr[mid]) {
		return BinarySearch(mid + 1, high, arr, target);
	}
	else if (target < arr[mid]) {
		return BinarySearch(low, mid - 1, arr, target);
	}
}