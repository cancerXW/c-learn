#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node {
    int value;
    struct _node *next;
} Node;

typedef struct _list {
    Node *head;
    Node *tail;
} List;

void add(List *pList, int number);

void list_print(List *pList);

Node *list_find(List *pList, int number);

void list_del(List *pList, int number);

void list_free(List *pList);

#endif