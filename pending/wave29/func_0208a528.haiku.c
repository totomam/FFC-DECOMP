#include "ffc/types.h"

struct Node {
    uint32_t a;
    struct Node *next;
};

struct Owner {
    uint8_t pad[0x18];
    struct Node *list;
};

extern void func_02089e64(void *p);
extern void func_02087890(void *p, uint32_t size);
extern void func_02089e74(void);

void func_0208a528(struct Owner *o) {
    struct Node *n;
    func_02089e64(o);
    n = o->list;
    while (n != 0) {
        struct Node *next = n->next;
        n->a = 0;
        n->next = 0;
        func_02087890(n, 8);
        n = next;
    }
    func_02089e74();
}
