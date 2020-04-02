#include <stdio.h>

long fact(int n) {
    long ans;
    for (ans = 1; n > 1; n--) {
        ans *= n;
    }
    return ans;
}

long rFact(int n) {
    long ans;
    if (n > 0) {
        ans = n * rFact(n - 1);
    } else {
        ans = 1;
    }
    return ans;
}

int main(void) {

    int num;
    printf("This program calculates factorials.\n");
    printf("Keep input under 13. \n");
    while (scanf("%d", &num) == 1) {
        if (num < 0) {
            printf("No negative numbers ,please. \n");
        } else if (num > 12) {
            printf("Keep input under 13.\n");
        } else {
            printf("loop:%d factorial = %ld\n", num, fact(num));
            printf("recursion: %d factorial = %ld\n", num, rFact(num));
        }
    }
    printf("Bye.\n");

    return 0;
}