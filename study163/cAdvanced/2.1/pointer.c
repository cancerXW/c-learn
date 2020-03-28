#include <stdio.h>

void maxMin(int *arr, int len, int *max, int *min) {
    printf("maxMin sizeof(arr) =%lu \n", sizeof(arr));
    printf("maxMin address %p \n", arr);
    *max = *min = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }

    }

}

void func(int *p) {
    printf("p = %d \n", *p);
    printf("func p address %p \n", p);
    *p = 321;
    printf("update p = %d \n", *p);
}

int main() {

    // 指针的大小跟计算机的字长有关 例如64位的 指针为8
    int *test;
    char *ch;
    printf("sizeof int =%lu \n", sizeof(int));
    printf("sizeof test =%lu \n", sizeof(test));
    printf("sizeof ch =%lu \n", sizeof(ch));

    int num = 1;
    printf("num address %p \n", &num);
    int *np = &num;
    printf("np address %p \n", np);

    // 数组本身就是特殊的变量 所以无需用&来取地址
    int a[] = {0, 1, 2, 3};
    printf("a[] address %p \n", a);
    int *ap = a;
    printf("ap address %p \n", ap);
    // 数组里的每一项都是变量所以必须用&来取地址
    int *ap0 = &a[0];
    printf("ap0 address %p \n", ap0);

    // []可以对指针使用，因为数组是特殊的指针，
    // 如果对指针使用就会把指针当数组，而有效的值为[0],数组的指针是从数组第一个开始的
    printf("num = %d \n", num);
    int *mp = &num;
    printf("*mp = %d \n", *mp);
    printf("mp[0] = %d \n", mp[0]);
    printf("mp[1] = %d \n", mp[1]);

    // * 可以对数组使用，只会取第一个
    printf("*a = %d \n", *a);
    *a = 100;
    printf("a[0] =%d \n", *a);
    // 数组变量是特殊的指针，不能在赋值
    // int arr [] --> int *const arr
    int *const cn = &num;


    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int max, min;
    printf("main sizeof(arr) =%lu \n", sizeof(arr));
    printf("main address %p \n", arr);
    maxMin(arr, sizeof(arr) / sizeof(arr[0]), &max, &min);
    printf("max = %d,min = %d \n", max, min);

//    int p = 123;
//    printf("p = %d \n", p);
//    printf("main p address %p \n", &p);
//    func(&p);
//    printf("func after p = %d \n", p);

    return 0;
    //             地址          内容
    // int *p = 1  0x0001(这里)    1
    // int b = 2   0x0002         2
    // int &a = b  0x0002         2
    // a = 5       0x0002         3

    return 0;
}