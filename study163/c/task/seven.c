#include <stdio.h>

int main() {
    char str[100];

    printf("sizeof char %zd \n", sizeof(char));
    printf("请输入内容以.结尾\n");
    scanf("%3s\n", str);
    printf("输入的内容为：\n");
    printf("%s\n", str);

    return 0;
}