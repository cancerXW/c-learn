#include <stdio.h>

void func(void) {
    char word[8];
    char word2[8];
    scanf("%s %s", word, word2);
//    scanf("%s", word2);
    printf("%s##%s##\n", word, word2);
}

int main() {
//    char string[8];
//    scanf("%s", string);
//    printf("##%s##\n", string);
    func();
    return 0;
}