#include <stdio.h>
int main(void){
	printf("There were %d words and %d lines.",3020,350);//错误的,用来测试可以直接打印数值么，不用变量
	//标准答案
	int words,lines;
	words = 3020;
	lines = 350;
	printf("There were %d words and %d lines.",words,lines);
	return 0;	
}
