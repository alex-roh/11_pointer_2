#include <stdio.h>

int main(void) {

	int num = 10;
	int* ptr = &num;

	printf("num = %d, pi : %p\n", num, ptr);
	(*ptr)++;
	printf("num = %d, pi : %p\n", num, ptr);
	*ptr++;
	printf("num = %d, pi : %p\n", num, ptr);

	return 0;
}