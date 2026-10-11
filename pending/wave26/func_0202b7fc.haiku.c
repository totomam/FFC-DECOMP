#include "ffc/types.h"

typedef struct {
    void *a;
    void *b;
    void **c;
} Node;

extern void func_02024f48(void *p, void *v);
extern void func_0202cf3c(void *p, void *q);
extern void func_020257f4(void *p);

void func_0202b7fc(Node *p, uint8_t *q) {
    void *v = *(void **)(q + 0x34);
    if (v != 0) {
        func_02024f48(p, v);
        return;
    }
    Node local;
    local.c = (void **)((uint8_t *)&local + 4);
    local.a = 0;
    local.b = 0;
    p->c = (void **)((uint8_t *)p + 4);
    p->a = 0;
    p->b = 0;
    func_0202cf3c(p, &local);
    func_020257f4(&local);
}
