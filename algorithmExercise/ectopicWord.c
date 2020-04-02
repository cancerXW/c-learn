#include <stdio.h>

/**
 * 有效的字母异位词
 * 给定两个字符串s和t，编写一个函数来判断t是否是s的字母异位词。
 * 字母异位词定义：两个字符串中包含的字母类型和数量相同，位置不同
 * @example 1
 * 输入： s = "anagram", t = "nagaram"
 * 输出： true
 * @example 2
 * 输入: s = "rat", t = "car"
 * 输出： false
 *
 * @return
 */
/**
 * 检查两个字符串是不是字母异位词
 * @param str1
 * @param str2
 * @return 1 是 0 不是
 */
int ectopicWord(char str1, char str2) {
    char letter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'n', 'm', 'o', 'p', 'q', 'r', 's', 't',
                     'u', 'v', 'w', 'x', 'y', 'z'};
    int len = sizeof(letter) / sizeof(letter[0]);
    int num[len];
    for (int i = 0; i < len; i++) {
        num[i] = 0;
    }
    for (int j = 0; j < len; ++j) {
        printf("%c\n", letter[j]);
    }
//    int str1_len =

}

int main(void) {

    ectopicWord('a', 'b');
    return 0;
}