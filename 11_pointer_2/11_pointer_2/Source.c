#include <stdio.h>

char* proverb = "All that glitters is not gold";
void setPointer(char** q);

int main(void) {

	char* p = "zzz";
	setPointer(&p);
	printf("%s\n", p);

	return 0;
}

void setPointer(char** q)
{
	*q = proverb;
}