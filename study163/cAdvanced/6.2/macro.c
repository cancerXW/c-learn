#include <stdio.h>

#define PI3 3*PI // 顺序没问题
#define PI 3.1415926
#define FORMAT "%f\n"
#define PI2 2*PI //pi * 2  底下\说明是要换行的没有结束
#define PRT printf("%f ",PI); \
            printf("%f\n",PI2)
#define cube(x) ((x)*(x)*(x))
#define RADTODEG1(x) (x * 57.29578)
#define RADTODEG2(x) (x) * 57.29578
#define STR "wen\
chun"
#define MEET(x, y)( #x "meet" #y)
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n",x ##n);
#define PR(...) printf( __VA_ARGS__ )

int main(void) {

    printf(FORMAT, PI3 * 3.0);
    PRT;
    // c编译器内置的宏
    printf("%s:%d\n", __FILE__, __LINE__);
    printf("%s:%s\n", __DATE__, __TIME__);
    printf("cube %d\n", cube(5));
    printf("RADTODEG1 %f\n", RADTODEG1(5 + 2));
    printf("RADTODEG2 %f\n", 180 / RADTODEG2(1));
    printf("%s\n", STR);
    printf("%s\n", MEET("dawen", "xiaochun"));
    int XNAME(1) = 14;
    int XNAME(2) = 20;
    int x3 = 30;
    PRINT_XN(1);
    PRINT_XN(2);
    PRINT_XN(3);
    PR("HOWDY");
    PR("weight = %d, shipping = $%.2f\n",7,9.5);
    return 0;
}