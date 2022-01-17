#include <stdio.h>

int main() {
	// int i = 0;
    // while (i <= 10) {
	// 	printf("%d ", i);
	// 	i++;
	// }
	// printf("\nValue of i %d\n", i);


    // 1 - 10 -> even / odd
	// int i = 2;
    // while (i % 2 == 0 && i <= 10) {
	// 	printf("%d ", i);
	// 	i = i + 2;
	// }
	// printf("\n");

	// int arr[6];
	// arr[0] = 10;
	// arr[1] = 20;
	// arr[2] = 30;
	// arr[3] = 40;
	// arr[4] = 50;
	// arr[5] = 70;

	// printf("%d\n", arr[0]);
	// printf("%d\n", arr[1]);
	// printf("%d\n", arr[2]);
	// printf("%d\n", arr[3]);
	// printf("%d\n", arr[4]);
	// printf("%d\n", arr[5]);

	// int arr[6];
	// int i;

	// for (i = 0; i < 6; i++) {
	// 	int input;
	// 	printf("Enter new value: ");
	// 	scanf("%d", &input);
	// 	arr[i] = input;
	// }

	// printf("Output\n");
	// for (i = 0; i < 6; i++) {
	// 	printf("arr[%d] =  %d\n", i, arr[i]);
	// }
	// printf("\n");

	// int size;
	// scanf("%d", &size);

	// int arr[size];
	// int i;

    // Taking input
	// for (i = 0; i < size; i++) {
	// 	scanf("%d", &arr[i]);
	// }

	// int sum = 0, res = 0;

    // Sum
	// for (int i = 0; i < size; i++) {
	// 	sum = arr[i] + res;
	// 	res = sum;
	// }

	// printf("Sum = %d\n", sum);


    int size;
	scanf("%d", &size);

	int arr[size];
	int i;
    int sum = 0, res = 0;

    // Taking input and making sum
	for (i = 0; i < size; i++) {   // i = 3, sum = 10, res = 10
		scanf("%d", &arr[i]);      // arr[4] = 5
        sum = arr[i] + res;        // sum = 5 + 10 = 15
		res = sum;                 // res = 15
	}

	printf("Sum = %d\n", sum);

	return 0;
}