#include <stdio.h>

void apply(void(*fn)(void*, void*), void* arg)
{
	(*fn)("name", arg);
}
void print(void* name, void* number)
{
	printf("%s : %d \n", (char*)name, *(int*)number);
}

int main()
{
	int a, b;
	scanf_s("%d", &a);
	apply(print, &a);
	return 0;
}