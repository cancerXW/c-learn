#include <stdio.h>

int main() {
    double a = 123456.789;
    printf("a %%e=%e,%%E=%E,%%f=%f \n", a, a, a);
    // 科学技术法 e 可以大小写 - 可以省略（省略为+）
    double b = 1e-10;
    printf("b %%e=%e,%%.16f=%.16f \n", b, b);

    // 默认四舍五入
    printf("%.3f \n", -0.0049);
    printf("%.30f \n", -0.0049);
    printf("%.3f \n", -0.00049);

    // 浮点字面量要在后面加f
    float f = 1.23456f;
    printf("%f \n", f);

    return 0;
}