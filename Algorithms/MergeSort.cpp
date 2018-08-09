#include <iostream>
#include <cstdlib>
#define SIZE 10
using namespace std;

void Merge(int arr[], int left, int mid, int right);
void MergeSort(int arr[], int left, int right);

int main()
{
    int arr[SIZE] = {0, 11, 24, 32, 45, 58, 67, 79, 84, 93};

    MergeSort(arr, 0, SIZE);

    system("pause");
    return 0;
}

void Merge(int arr[], int left, int mid, int right)
{
    const int leftSize = mid - 1;
    const int rightSize = right - mid;
    int leftArray[leftSize];
    int rightArray[rightSize];

    for (int i = 0; i < mid; i++)
    {
    }
}

void MergeSort(int arr[], int left, int right)
{
    int mid = (left + right) / 2;

    if (left < right)
    {
        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        Merge(arr, left, mid, right);
    }
}