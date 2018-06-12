#include <stdio.h>

void printfSmile()
{
	printf("Smile!");
}

int main()
{
	for(int i = 3;i > 0;i--){		
		for(int j=0; j < i;j++)
		{
			printfSmile();
		}
		printf("\n");
	}
	return 0;
}
