#include<iostream>
using namespace std;

void swap(int arr[], int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int l, int r) {
	int pivot = arr[r];
	int i = l - 1;

	for (int j = l;j < r;j++) {
		if (arr[j] < pivot) {
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i + 1, r);
	return i + 1;
}
void quickSort(int arr[], int l, int r) {
	if (l < r) {
		int pi = partition(arr, l, r);
		quickSort(arr, l, pi - 1);
		quickSort(arr, pi + 1, r);
	}
}
int main() {
	int n, i, j;
	cout << "Enter number of elements of array: \n";
	cin >> n;
	int arr[n];
	for (i = 0;i < n;i++) {
		cout << "Input element of array: \n";
		cin >> arr[i];
	}
	cout << "Unsorted Array: \n";
	for (i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
	cout << "\nSorted Array: \n";
	quickSort(arr, 0, 4);
	for (i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}
}