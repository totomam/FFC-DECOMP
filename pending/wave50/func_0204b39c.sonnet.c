#include "ffc/types.h"

extern void *func_0204b07c(uint32_t size, uint32_t align);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int idx;
    void *data;
    int tag;
} Node;

typedef struct List {
    Node *head;
    volatile int count;
} List;

int func_0204b39c(List *list, void *param) {
    int ret = -1;
    Node *n = (Node *)func_0204b07c(0x14, 4);
    if (n != 0) {
        if (list->head != 0) {
            n->next = list->head->next;
            n->prev = list->head;
            list->head->next->prev = n;
            list->head->next = n;
        } else {
            n->next = n;
            n->prev = n;
            list->head = n;
        }
        ret = list->count;
        list->count = list->count + 1;
        n->idx = ret;
        n->data = param;
        n->tag = -1;
        if (list->count < 0) {
            list->count = 0;
        }
    }
    return ret;
}
