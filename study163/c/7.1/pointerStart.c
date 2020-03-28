#include <stdio.h>

void func(int *p) {
    *p = 2;
}

int main() {

    int p = 0;
    printf("0x%x \n", &p);
    printf("%p \n", &p);

    int a;
    int b;
    printf("sizeof int %d \n", sizeof(int));
    printf("%p \n", &a);
    printf("%p \n", &b);

    // &arr = arr = &arr[0]
    // &arr 是取arr的地址(开始的) 直接arr也是给地址(开始的) &arr[0]给地址(开始的)
    int arr[10];
    printf("%p \n", &arr);
    printf("%p \n", arr);
    printf("%p \n", &arr[0]);
    printf("%p \n", &arr[1]);
    printf("%p \n", &arr[2]);
    printf("%p \n", &arr[3]);

    int num = 1;
    printf("%d \n", num);
    func(&num);
    printf("%d \n", num);

    return 0;
}