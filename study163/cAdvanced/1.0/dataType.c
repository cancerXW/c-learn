#include <stdio.h>

int main() {
    int a = 6;
    printf("sizeof(long double)=%ld\n", sizeof(long double));
    printf("sizeof(double)=%ld\n", sizeof(double));
    printf("sizeof(int)=%ld\n", sizeof(int));
    printf("sizeof(a)=%ld\n", sizeof(a));
    printf("sizeof(a++)=%ld\n", sizeof(a++));
    // 整数和double计算会的结果是double
    printf("sizeof(a+1.0)=%ld\n", sizeof(a + 1.0));
    // sizeof 是静态运算符，在括号里面做的运算都不生效
    printf("a=%ld\n", a);

    return 0;
}