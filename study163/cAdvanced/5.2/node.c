#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(void) {
    int number;
    List list = {.head = NULL};
    printf("enter positive number\n");
    while (scanf("%d", &number) && number > -1) {
        add(&list, number);
    }
    printf("input:\n");
    list_print(&list);
//    printf("\nsearch positive number: \n");
    printf("\nenter delete number \n");
    scanf("%d", &number);
    Node *res = list_find(&list, number);
//    int is_found = 0;
//    Node *current;
//    for (current = list.head; current; current = current->next) {
//        if (number == current->value) {
//            is_found = 1;
//        }
//    }

//    printf("res address %p \n", res);
//    printf("value %d \n", res->value);

    if (res) {
//        printf("oh yeah find %d\n", number);
        list_del(&list, number);
    } else {
        printf("sorry not find %d\n", number);
    }

//    Node *before;
//    for (before = NULL, current = list.head; current; before = current, current = current->next) {
//        if (current->value == number) {
//            if (before == NULL) {
//                list.head = current->next;
//            } else {
//                before->next = current->next;
//            }
//            free(current);
//        }
//    }

    printf("now list value: \n");
    list_print(&list);
    printf("\nfree list: \n");
    list_free(&list);
    list_print(&list);
    return 0;
}

void add(List *pList, int number) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->value = number;
    node->next = NULL;
    Node *last = pList->head;
    if (last) {
        while (last->next) {
            last = last->next;
        }
        last->next = node;
    } else {
        pList->head = node;
    }
}

void list_print(List *pList) {
    Node *p;
    for (p = pList->head; p; p = p->next) {
        printf("%d\t", p->value);
    }
//    printf("\ntwo print\n");
//    p = pList->head;
//    while (p->next) {
//        printf("%d\t", p->value);
//        p = p->next;
//    }
}

Node *list_find(List *pList, int number) {
    Node *current = NULL;
    for (current = pList->head; current; current = current->next) {
        if (number == current->value) {
//            printf("current address %p \n", current);
//            printf("&current address %p \n", &current);
            return current;
        }
    }
}

void list_del(List *pList, int number) {
    Node *before;
    Node *current;
    for (before = NULL, current = pList->head; current; before = current, current = current->next) {
        if (current->value == number) {
            if (before == NULL) {
                pList->head = current->next;
            } else {
                before->next = current->next;
            }
            free(current);
            break;
        }
    }
}

void list_free(List *pList) {
    Node *next;
    Node *current;
    for (current = pList->head; current; current = next) {
        next = current->next;
        free(current);
    }
    pList->head = NULL;
}