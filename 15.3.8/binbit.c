#include <stdio.h>
#include <limits.h>

char *itobs(int n, char *ps);

void show_bstr(const char *str);

int main(void) {
    // 结果的字符串 CHAR_BIT 是char多少位 sizeof(int) 长度 + 1 结尾 \0
    // 8 * 4 + 1 = 33
    char bin_str[CHAR_BIT * sizeof(int) + 1];
    int number;

    puts("Enter integers and see them in binary");
    puts("Non-numeric input terminates program.");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }

    return 0;
}

char *itobs(int n, char *ps) {
    // 字符串长度 8 * 4 32
    const static int size = CHAR_BIT * sizeof(int);
    // size - 1 从 31 开始 数组下标 0 -- 32 32要放结尾\0
    for (int i = size - 1; i >= 0; i--, n >>= 1) {
        // & 确定这一位是否是1 + '0' 转换成字符串
        // 01 & 0 = 1 1 + '0' => 1 + 48(ascii) = 49 (ascii的1)
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}

void show_bstr(const char *str) {
    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i]) {
            putchar(' ');
        }
    }

}