#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void PrintArray(int arr[]);
void InsertionSort(int arr[]);

int main() {
	int arr[SIZE] = { 2, 9, 0, 8, 1, 6, 7, 5, 3, 4 };

	PrintArray(arr);
	cout << endl;
	InsertionSort(arr);
	PrintArray(arr);
	cout << endl;

	system("pause");
	return 0;
}

void PrintArray(int arr[]) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i];
	}
}

// This insertion sort will work as if there is a sorted list
// and an unsorted list. Every ITEM before index 'i' should already
// be sorted. ITEMS on and after index 'i' represents an unsorted list.
void InsertionSort(int arr[]) {
	for(int i = 1; i < SIZE; i++){
		for(int j = 1; j > 0 && arr[j] < arr[j - 1]; j++){
			int temp = j;
			arr[j] = arr[j - 1];
			arr[j - 1] = arr[temp];
		}
	}
}