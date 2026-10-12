#include "ffc/types.h"

extern void *data_020b0d18;
extern void func_0208763c(void *p);
extern void func_02056858(void *p);
extern void func_02057de8(void *self, void *node);
extern void func_02087678(void *p);
extern void func_02056844(void *p);

typedef struct Node {
    struct Node *next;
    void *data;
} Node;

typedef struct Obj {
    void *vtbl;
    uint32_t f04[3];
    Node *l10;
    Node *l14;
    Node *l18;
    uint32_t f1c;
    uint8_t sub[4];
} Obj;

void *func_02057cd4(void *p) {
    Obj *o = (Obj *)p;
    Node *n;
    Node *nx;
    uint8_t *s;
    uint32_t tmp[2];
    uint32_t *tp = tmp;

    o->vtbl = &data_020b0d18;
    s = o->sub;
    func_0208763c(s);
    n = o->l18;
    while (n != 0) {
        func_02056858(n->data);
        nx = n->next;
        func_02057de8(o, n);
        n = nx;
    }
    n = o->l10;
    while (n != 0) {
        nx = n->next;
        func_02057de8(o, n);
        n = nx;
    }
    n = o->l14;
    while (n != 0) {
        nx = n->next;
        func_02057de8(o, n);
        n = nx;
    }
    func_02087678(s);
    func_02056844(o);
    if (tp == 0) return 0;
    return o;
}
