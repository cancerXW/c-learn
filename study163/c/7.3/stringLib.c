#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char line[] = "Hello";
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));

    char s1[] = "abc";
    char s2[] = "abc";
    // strcmp 比较两个字符串结果
    // 0  s1 == s2
    // 1 （正数，不一定是1） s1 > s2
    // -1（负数，不一定是-1） s1 < s2
    printf("s1 strcmp s2 %d\n", strcmp(s1, s2));

    char str1[] = "abc";
    char str2[] = "abc";
    // 使用 == 会一直返回0 因为数组比较的结果就是等于0
    printf("str1 == str2 %d\n", str1 == str2);

    return 0;
}