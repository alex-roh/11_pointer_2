#include <stdio.h>

char* proverb = "All that glitters is not gold";
void setPointer(char** q);

int main(void) {

	char* ptr = "zzz";

	// ������ ������ �ּҸ� �ѱ�
	setPointer(&ptr);
	printf("%s\n", ptr);

	return 0;
}

void setPointer(char** address_of_ptr)
{
	// ������ ������ �ּҸ� de-referecing�ϸ�
	// �� �����Ͱ� ��� �ִ� ���� ����
	printf("%s\n", *address_of_ptr);

	// �� �����Ͱ� ��� �ִ� ���� proverb�� ����
	*address_of_ptr = proverb;
}