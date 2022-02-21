#include<bits/stdc++.h>
using namespace std;


int checkOutput(int arr[], int i, int size) {
    if (i >= size) {
		return arr[i];
	}
	int sum1 = 0, sum2;


	sum1 = arr[i] + checkOutput(arr, i + 1, size - 1);
	sum2 = arr[i] + checkOutput(arr, i + 2, size - 2);
	cout << sum1 << " " << sum2 << endl;
	return sum2;
}

int main() {
    int w, n;
	cin >> w >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ans = checkOutput(arr, 0, n);

	cout << ans << endl;
}