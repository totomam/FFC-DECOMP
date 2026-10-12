#include "ffc/types.h"

typedef struct Node {
    uint32_t f0;
    uint32_t id;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct List {
    uint32_t count;
    Node *head;
    Node *tail;
} List;

extern void *func_ov000_0214fa54(void);

void func_ov000_0214ff64(Node *p)
{
    uint8_t *base;
    List *list;
    uint32_t n;
    Node *f;

    base = (uint8_t *)func_ov000_0214fa54();
    list = *(List **)(base + 0x12c4);
    if (p == 0 || list == 0) {
        return;
    }
    n = *(uint32_t *)(base + 0x12c8);
    if (n <= 0xc) {
        return;
    }
    f = list->head;
    while (f != 0) {
        if (f == p) {
            if (f->prev != 0) {
                f->prev->next = f->next;
            } else {
                list->head = f->next;
            }
            if (f->next != 0) {
                f->next->prev = f->prev;
            } else {
                list->tail = f->prev;
            }
            break;
        }
        f = f->next;
    }
    p->next = 0;
    p->prev = list->tail;
    list->tail = p;
    if (p->prev != 0) {
        p->prev->next = p;
    } else {
        list->head = p;
    }
    if (f == 0) {
        p->id = list->count;
        list->count++;
    }
}
