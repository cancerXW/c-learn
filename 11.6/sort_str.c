#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

void printString(char *string[]){
    for (int i = 0; i < 4; ++i) {
        puts(string[i]);
    }

}

/**
 * 选择排序
 * 每次拿第一个值跟每个值进行比对，大的值在第一位，
 * 第二次拿第二个值跟除第一个最大值以外的值进行比较，大的在第二位，以此类推
 * @param strings
 * @param num
 */
void stSrt(char *strings[], int num) {
    char *temp;
    int top, seek;
    for (top = 0; top < num - 1; top++) {
        for (seek = top + 1; seek < num; seek++) {
            int res = strcmp(strings[top], strings[seek]);
            puts(strings[top]);
            puts(strings[seek]);
            printf(" res = %d \n", res);
            if (res > 0) {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
            printString(strings);
            printf("\n\n");

        }

    }

}

char *s_gets(char *st, int n) {
    char *ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;

}

int main(void) {
    char input[LIM][SIZE];
    char *pt_str[LIM];
    int ct = 0;
    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0') {
        pt_str[ct] = input[ct];
        ct++;
    }
    stSrt(pt_str, ct);
    puts("\nHere's the sorted list:\n");
    for (int i = 0; i < ct; ++i) {
        puts(pt_str[i]);
    }

    return 0;
}