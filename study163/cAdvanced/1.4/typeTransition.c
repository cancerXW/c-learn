#include <stdio.h>

int main() {

    printf("(short)32767 = %d \n", (short) 32767);

    printf("(short)32768 = %d \n", (short) 32768);

    printf("(short)32769 = %d \n", (short) 32769);

    // 一个 char = 8 个字节  32768 = 1000 0000 0000 0000 = char(8位) 0000 0000 前面的 1000 0000 被舍去
    printf("(char)32767 = %d \n", (char) 32767);

    printf("(char)32768 = %d \n", (char) 32768);

    printf("(char)32769 = %d \n", (char) 32769);

    // 一个 char = 8 个字节 char的范围等于 -2[8 -1 ](-128) ~ 2[8 - 1]-1(127)
    // 1111 1111
    printf("(char)255 = %d \n", (char) 255);

    // 1 0000 0000
    printf("(char)256 = %d \n", (char) 256);

    // 1 0000 0001
    printf("(char)257 = %d \n", (char) 257);

    return 0;
}