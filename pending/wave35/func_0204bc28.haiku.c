#include "ffc/types.h"

typedef struct Node {
    uint32_t pad0;
    uint32_t pad1;
    uint32_t key;
    uint32_t *flag;
    uint32_t val;
} Node;

extern void *func_0204de78(void);
extern void *func_0204de80(void *a);
extern void func_0204dec8(void);
extern void func_0204ac38(void *ctx, uint32_t *p, uint32_t v);
extern void *func_0204de74(void *a);
extern int32_t func_0204b424(void *a, void *b, uint32_t c);
extern void func_0204ded0(void *a);

int32_t func_0204bc28(void *a, uint32_t b) {
    int32_t r5;
    void *c;
    Node *n;
    r5 = 0;
    n = (Node *)func_0204de78();
    c = func_0204de80(a);
    func_0204dec8();
    n = *(Node **)n;
    if (n != 0 && n->key == b && *n->flag == 0) {
        r5 = 1;
        *n->flag = r5;
        func_0204ac38(c, n->flag, n->val);
    }
    if (r5 == 0) {
        r5 = func_0204b424(func_0204de74(a), c, b);
    }
    func_0204ded0(c);
    return r5;
}
