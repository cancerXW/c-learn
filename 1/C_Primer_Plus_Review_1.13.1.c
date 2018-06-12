#include <stdio.h>
int main(void){
	float inputValue,result;
	printf("请输入要转换的英寸:\n");
	scanf("%f",&inputValue);
	result = inputValue * 2.54;
	printf("%g 英寸转换成厘米是: %g\n",inputValue , result);
	return 0;
}
