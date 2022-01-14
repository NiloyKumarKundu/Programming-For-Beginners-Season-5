#include <stdio.h>

int main() {
	// int i = 5;
	// printf("i = %d\n", i++);    // 5
	// printf("i = %d\n", --i);    // 5
	// printf("i = %d\n", i--);    // 5
	// printf("i = %d\n", i--);    // 4
	// printf("i = %d\n", ++i);    // 4
	// printf("i = %d\n", ++i);    // 5
	// printf("i = %d\n", i--);    // 5
	// printf("i = %d\n", i);      // 4

	// int i = 0;
	// for (i = 1; i <= 10; ) {  // i = 1, 1 <= 10 T
	// 	printf("%d\n", ++i); // i = 2,3,4,5,6,7, 8, 9, 10, 11
	// }

	int i;
	// for (i = 1; i <= 50; i++) {     // i++ = (i = i + 1)
    //     if (i % 2 == 0) {
	// 		printf("Even number = %d\n", i);
	// 	}
	// }


    // i += 2 = (i = i + 2)
	// for (i = 2; i <= 10; i += 2) {  
    //     printf("Even number = %d\n", i); 
    // }

    // 2 + 2 => 4
    // 4 + 2 => 4

	// printf("\n");
	// printf("\n");

	// for (i = 1; i <= 10; i += 2) {  
    //     printf("Odd number = %d\n", i); 
    // }

    // 1 + 2 => 3
    // 3 + 2 => 5

	for (i = 6; i <= 10; i++) {
		int x = i / 2;
		printf("%d\n", x);
	}

}
