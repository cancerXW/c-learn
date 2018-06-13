#include <stdio.h>

int main()
{
	//一个中文在utf-8下占3个字节,三个字所以要9个字节
	char name[9]="王广文";
	char addres[9]="广州市";
	printf("您的姓名是:%s \n地址是:%s \n",name,addres);
	return 0;
}
