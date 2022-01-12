#include <stdio.h>

int main() {
	// int cha = 10;   // cha = 10
	// printf("Before scan = %d\n", cha);    // 10
	// printf("Enter new value: ");
	// scanf("%d", &cha);		// 5
	// printf("After inserting the value = %d\n", cha);    // 5

	// int num1;
	// int num2;
	// printf("Enter two value: ");
	// scanf("%d %d", &num1, &num2);
	// int temp = num1 + num2;
	// printf("Sum = %d\n", temp);

	int cha = 10;
	int boro_vai = 1;

    // if (boro_vai) {
	// 	printf("Chini lagbe na\n");
	// } else {
	// 	printf("Chini lagbe :-p \n");
	// }
    
	// boro_vai = 4;
	// if (boro_vai) {
	// 	printf("Chini lagbe na\n");
	// } else {
	// 	printf("Chini lagbe :-p \n");
	// }


    // int n;
	// scanf("%d", &n);

    // if (n % 2 == 0) {       
	// 	printf("Even\n");
	// } else {
	// 	printf("Odd\n");
	// }

    // if (n % 2 != 0) {
	// 	printf("Odd\n");
	// } else {
	// 	printf("Even\n");
	// }

	int numberOne, numberTwo;
	scanf("%d %d", &numberOne, &numberTwo);

    if (numberOne == numberTwo) {
		printf("Both numbers are equal\n");
	} else if (numberOne < numberTwo) {
		printf("The largest number is = %d\n", numberTwo);
	} else {
        printf("The largest number is = %d\n", numberOne);
    }
}