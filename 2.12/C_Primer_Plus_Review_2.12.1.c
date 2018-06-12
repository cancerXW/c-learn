#include <stdio.h>

int main()
{
	char x[10];
	char name[10];

	printf("请输入姓：\n");
	scanf("%s",x);

	printf("请输入名：\n");
	scanf("%s",name);

	printf("你的姓名是:\n");

	printf("%s %s\n",x,name);

	printf("%s \n",x);

	printf("%s \n",name);

	printf("%s ",x);

	printf("%s ",name);

	return 0;
}
