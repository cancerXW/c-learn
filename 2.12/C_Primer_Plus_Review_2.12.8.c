#include <stdio.h>

void one_three()
{
	printf("one\n");
}

void two()
{
	printf("two\n");
}

int main()
{
	printf("starting now:\n");
	one_three();
	two();
	printf("three\n");
	printf("done!\n");
	return 0;
}
