#include "ffc/types.h"

typedef struct Node {
    uint32_t pad;
    struct Node *next;
    uint32_t *data;
} Node;

typedef struct List {
    uint32_t pad;
    Node sent;
} List;

extern void func_0208763c(uint8_t *p);
extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_02056858(uint32_t v);
extern void func_02056844(void *p);
extern void func_020235ac(void *a, void *list, void *b, void *c);
extern void func_02087678(uint8_t *p);

void func_02074b28(uint8_t *p) {
    struct { uint32_t a[6]; volatile uint8_t flag; } loc;
    int i, j;
    uint8_t *base;
    List *list;
    Node *n;
    uint32_t *d;

    loc.a[5] = (uint32_t)(p + 0x4238);
    loc.flag = 1;
    if (loc.flag) {
        func_0208763c((uint8_t *)loc.a[5]);
    }
    func_02084b2c(p + 0x130, 0, 0x4008);
    for (i = 0; i < 0x20; i++) {
        base = p + (i << 2);
        for (j = 0; j < 2; j++) {
            void *v = *(void **)(base + (j << 7) + 0x30);
            if (v) {
                func_02084b2c(v, 0, 0x2004);
            }
        }
        if (*(void **)(base + 0x4138)) {
            func_02084b2c(*(void **)(base + 0x4138), 0, 0xc04);
        }
        list = *(List **)(base + 0x41b8);
        if (list) {
            n = list->sent.next;
            while (n != &list->sent) {
                d = n->data;
                if (d) {
                    func_02056858(d[0]);
                    d[0] = 0;
                    func_02056844(d);
                }
                n = n->next;
            }
            loc.a[2] = (uint32_t)&list->sent;
            loc.a[1] = (uint32_t)list->sent.next;
            func_020235ac(&loc, list, &loc.a[1], &loc.a[2]);
        }
    }
    if (loc.flag) {
        func_02087678((uint8_t *)loc.a[5]);
    }
}
