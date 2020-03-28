#include <stdio.h>

int main() {
    char a = 'a';
    printf("char: %c,int: %d \n", a, a);
    printf("change case after \n");
    int res = a + 'A' - 'a';
    printf("char: %c,int: %d \n", res, res);
    return 0;
}