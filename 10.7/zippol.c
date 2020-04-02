#include <stdio.h>

int main(void) {
    // *a == a[0]
    int a[] = {0, 1, 2};
    printf("*a = %d, a[0] = %d\n", *a, a[0]);
    printf("sizeof(int) = %d \n", sizeof(int));
    int arr[4][2] = {
            {2, 4},
            {6, 8},
            {1, 3},
            {5, 7}
    };
    // arr 是一个二维数组 ，一个int是4个字节，所以arr + 1 就加了8个字节
    printf("   arr = %p,     arr + 1 = %p\n", arr, arr + 1);
    // *arr == arr[0] == arr[0][0] 这三个的地址都是相同的 arr[0] + 1 是指arr[0]的数组 + 1 所以是4个字节
    printf("arr[0] = %p,  arr[0] + 1 = %p\n", arr[0], arr[0] + 1);
    // *arr + 1 == arr[0] + 1   *和[]都是解析数组 数组是特殊的指针
    printf("  *arr = %p,    *arr + 1 = %p\n", *arr, *arr + 1);
    printf("arr[0][0] = %d\n", arr[0][0]);
    printf("  *arr[0] = %d\n", *arr[0]);
    printf("    **arr = %d\n", **arr);
    printf("        arr[2][1] = %d\n", arr[2][1]);
    printf("*(*(arr + 2) + 1) = %d\n", *(*(arr + 2) + 1));
    printf("arr[0][0] = %p\n", &arr[0][0]);
    printf("\n");
    printf("   arr + 2 = %p\n", arr + 2);
    printf("*(arr + 2) = %p\n", *(arr + 2));
    printf(" arr[2][0] = %p\n", &arr[2][0]);
    printf(" arr[2][0] = %d\n", arr[2][0]);
    return 0;
}