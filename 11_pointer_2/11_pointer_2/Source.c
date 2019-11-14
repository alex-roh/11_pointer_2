#include <stdio.h>

char* proverb = "All that glitters is not gold";
void setPointer(char** q);

int main(void) {

	char* ptr = "zzz";

	// 포인터 변수의 주소를 넘김
	setPointer(&ptr);
	printf("%s\n", ptr);

	return 0;
}

void setPointer(char** address_of_ptr)
{
	// 포인터 변수의 주소를 de-referecing하면
	// 그 포인터가 담고 있는 값이 나옴
	printf("%s\n", *address_of_ptr);

	// 그 포인터가 담고 있는 값에 proverb를 대입
	*address_of_ptr = proverb;
}