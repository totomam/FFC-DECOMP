/* cflags: -nothumb */
#include "ffc/types.h"

extern void func_0208763c(void *lock);
extern void func_02087678(void *lock);

typedef void (*VFn)(void *);

typedef struct Node {
    VFn *vt;
    struct Node *next;
    uint32_t pad8;
    int8_t status;
} Node;

typedef struct Obj {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t f0c;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t pad13;
    Node *head;
    Node **tail;
    uint32_t lock;
} Obj;

void func_01ff8998(Obj *p) {
    uint8_t saved = p->b12;
    void *lk = &p->lock;
    Node **pp;
    Node *n;
    int empty;

    if (saved) {
        func_0208763c(lk);
    }
    pp = &p->head;
    n = *pp;
    while (n != 0) {
        if (n->status == 0) {
            n->vt[2](n);
        }
        if (n->status == 0) {
            break;
        }
        *pp = n->next;
        if (n->status == 2) {
            n->vt[1](n);
        }
        n = *pp;
    }
    if (n == 0) {
        p->tail = pp;
    }
    if (p->b11) {
        if (p->b12) {
            func_0208763c(lk);
        }
        empty = (p->head == 0);
        if (p->b12) {
            func_02087678(lk);
        }
        if (empty) {
            p->f0c = (p->f0c & ~0xffu) | 2;
        }
    }
    if (saved) {
        func_02087678(lk);
    }
}
