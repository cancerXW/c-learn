#include <stdio.h>

int main() {
    int a = 1;
    while (++a > 0) {
//        ++a;
//        printf("++a=%d\n", a);
    }
    printf("int数据类型的最大值是%d\n", a - 1);

    return 0;
}