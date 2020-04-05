#include <stdio.h>

void tryStat(void) {
    int fade = 1;
    static int stay = 1;
    printf("fade = %d and stay = %d\n", fade++, stay++);

}

int main(void) {
    for (int i = 0; i < 3; ++i) {
        printf("Here comes iteration %d:\n", i);
        tryStat();
    }

    return 0;
}