#include <stdio.h>

int main()
{
	int ten = 10;
	int two = 2;
	printf("Doing it right: ");
	printf("%d  minus %d is %d \n", ten, 2, ten - two);
	printf("Doin it wrong : ");
	//遗漏参数，编译器不会报错会自动取上面的？？？
	//书上说会取内存中的任意值?而我之前运行出错了
	//所以内存中存在着两个值所以直接取了？？？
	printf("%d minus %d is %d \n" , ten);
	//如果在上一句之前没有别的打印在打印会有点特别？？
	//printf("%d minus %d is %d \n", ten, 2, ten - two);
	//在来一次参数不全的，看效果会怎么样
	//printf("try again: ");
	//printf("%d minus %d is %d \n", ten);
	//试一次参数多的
	//printf("try args many: ");
	//多的不会有什么变化,只会打印到参数个数所到的地方
	//printf("%d minus %d is %d \n", ten,two,3,55555);

	return 0;
}
