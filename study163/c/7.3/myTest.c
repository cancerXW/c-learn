#include <stdio.h>

int main() {
//    int a[] = {0};
//    int *p = &a;
//    printf("%d\n", *p == a[0]);
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[5];
    printf("%d\n", p[-2]);

    return 0;
}