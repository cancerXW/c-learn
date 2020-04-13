#include <stdio.h>
#include "array.h"
#include <stdlib.h>

Array array_create(int init_size) {
    Array a;
    a.size = init_size;
    a.array = (int *) malloc(sizeof(int) * a.size);
    return a;

}

void array_free(Array *a) {
    free(a->array);
    a->array = NULL;
    a->size = 0;
}

int array_size(const Array *a) {
    return a->size;
}

int *array_at(Array *a, int index) {
    int a_size = array_size(a);
    if (index >= a_size) {
        // 当前index / BLOCK_SIZE  当前索引所在块
        // index / BLOCK_SIZE + 1 要新增的块 +1 是为了防止index = size 和 index = 0 的情况
        // (index / BLOCK_SIZE + 1) * BLOCK_SIZE 总的大小
        // (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a->size 总共要新增的大小
        array_inflate(a, (index / BLOCK_SIZE + 1) * BLOCK_SIZE - a_size);
        // 使用块的好处就是可以一次性新增到足够使用的空间
        // 例如 array_at(a,20) 当前 a->size = 10 BLOCK_SIZE = 5
        // (20 / 5 + 1) * 5 - 10 = 15
        // 如果不是通过计算使用固定增长BLOCK_SIZE的话就会不够
    }
    return &(a->array[index]);
}


void array_inflate(Array *a, int more_size) {
    int a_size = array_size(a);
    int *p = (int *) malloc(sizeof(int) * a_size + more_size);
    for (int i = 0; i < a_size; ++i) {
        p[i] = a->array[i];
    }
    free(a->array);
    a->array = p;
    a->size += more_size;
}

int main(void) {

    Array a = array_create(3);
    printf("%d\n", array_size(&a));
    *array_at(&a, 0) = 100;
    printf("%d\n", *array_at(&a, 0));
    int number;
    int cnt = 0;
    while (scanf("%d", &number) != -1 && number > -1) {
        *array_at(&a, cnt++) = number;
    }
    int a_size = array_size(&a);
    printf("arr_size = %d\n", array_size(&a));
    printf("a_size = %d\n", a_size);
    printf("a.size = %d\n", a.size);
    for (int i = 0; i < array_size(&a); i++) {
        printf("index = %d value = %d \n", i, *array_at(&a, i));
    }

    array_free(&a);
    return 0;
}