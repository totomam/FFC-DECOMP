#include "ffc/types.h"

extern uint32_t data_020b0d18;
extern void func_0208763c(void *p);
extern void func_02056858(void *p);
extern void func_02057de8(void *self, void *node);
extern void func_02087678(void *p);

typedef struct Node {
    struct Node *next;
    void *val;
} Node;

typedef struct Obj {
    void *vtbl;        /* 0x00 */
    uint32_t pad1[3];  /* 0x04 */
    Node *list10;      /* 0x10 */
    Node *list14;      /* 0x14 */
    Node *list18;      /* 0x18 */
    uint32_t pad2;     /* 0x1c */
    uint8_t sub[4];    /* 0x20 */
} Obj;

void *func_02057c6c(void *a) {
    Obj *p = (Obj *)a;
    uint8_t *s;
    Node *n;
    Node *nx;
    volatile uint32_t pad[2];
    pad[0] = 0; pad[1] = 0;

    s = p->sub;
    p->vtbl = &data_020b0d18;
    func_0208763c(s);
    n = p->list18;
    while (n != 0) {
        func_02056858(n->val);
        nx = n->next;
        func_02057de8(p, n);
        n = nx;
    }
    n = p->list10;
    while (n != 0) {
        nx = n->next;
        func_02057de8(p, n);
        n = nx;
    }
    n = p->list14;
    while (n != 0) {
        nx = n->next;
        func_02057de8(p, n);
        n = nx;
    }
    func_02087678(s);
    return p;
}
