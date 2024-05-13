#include <stdio.h>

int main(void) {

	int number;

	printf("Enter the Number (1-3)");
	scanf("%d", &number);

	switch (number) {
		case 1:
			printf("1 is entered.\n");
			break;
		case 2:
			printf("2 is entered.\n");
			break;
		case 3:
			printf("3 is entered.\n");
			break;
		hoge:	// not executed.
			printf("hoge\n");
			break;
	}

	return 0;
}

