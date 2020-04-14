#include <stdio.h>
#include "student.h"

void getList(Student aStu[], int number);

int save(Student aStu[], int number);

int main(void) {

    int number = 0;
    printf("输入学生数量： ");
    scanf("%d", &number);
    Student aStu[number];

    getList(aStu, number);
    if (save(aStu, number)) {
        printf("保存成功\n");
    } else {
        printf("保存失败");
    }

    return 0;
}

void getList(Student aStu[], int number) {
    char format[STR_LEN];
    sprintf(format, "%%%ds", STR_LEN - 1);

    for (int i = 0; i < number; ++i) {
        printf("第%d个学生：\n", i + 1);
        printf("\t姓名");
        scanf(format, aStu[i].name);
        printf("\t性别 （0-男， 1-女， 2-其他）： ");
        scanf("%d", &aStu[i].gender);
        printf("\t年龄：");
        scanf("%d", &aStu[i].age);
    }
}

int save(Student aStu[], int number) {
    int res = -1;
    FILE *fp = fopen("student.data", "w");
    if (fp) {
        res = fwrite(aStu, sizeof(Student), number, fp);
        fclose(fp);
    }
    return res == number;
}