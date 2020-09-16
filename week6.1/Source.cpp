#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char string[50];
	char* s;
	scanf_s("%s", string, 49);
	s = string;
	printf("Length is %d\n",strlen(s));

	while (*s != '\0')
	{
		if ((*s >= '0') && (*s <= '9'))
		printf("%c ", *s);
		s++;
	}
	return 0;
}