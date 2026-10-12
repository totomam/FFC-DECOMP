#include "ffc/types.h"

extern void func_0208763c(void *m);
extern void func_02058194(void *destination, const void *source);
extern void func_02087678(void *m);
extern void *func_0205fbc8(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_0205fa1c(void *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct Node {
    struct Node *next;
    uint32_t pad4[3];
    uint32_t key;
    uint32_t pad14[3];
    uint32_t refs;
} Node;

typedef struct Guard {
    Node *node;
    void *lock;
    uint8_t flag;
} Guard;

void *func_0205fc78(uint8_t *p, void *q, uint32_t key, uint32_t c, uint32_t e, uint32_t f)
{
    Guard g;
    Node *n;

    g.lock = p + 0x20;
    g.flag = 1;
    if (g.flag) {
        func_0208763c(g.lock);
    }
    func_02058194(&g, p);
    n = g.node;
    while (n != 0) {
        if (n->key == key) {
            n->refs++;
            if (g.flag) {
                func_02087678(g.lock);
            }
            return n;
        }
        n = n->next;
        g.node = n;
    }
    n = func_0205fbc8(p, q, c, f);
    n->key = key;
    func_0205fa1c(n, key, 0, 0x7fff, e);
    if (g.flag) {
        func_02087678(g.lock);
    }
    return n;
}
