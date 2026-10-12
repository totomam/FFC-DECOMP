#include "ffc/types.h"

typedef struct {
    void *a;
    uint8_t flag;
} Tmp;

extern void func_0208763c(void *x);
extern void *func_02057df8(void *heap, uint32_t size, void *c, uint32_t align, uint32_t z1, uint32_t z2, uint32_t z3);
extern uint32_t func_020581cc(const void *first, const void *second);
extern void func_02087678(void *x);

void *func_0205f81c(uint8_t *p, uint32_t n, void *c) {
    Tmp t;
    Tmp *tp;
    uint8_t *obj;
    uint32_t k;
    uint8_t *e;

    tp = &t;
    tp->a = *(uint8_t **)(p + 0x28) + 0x20;
    tp->flag = 1;
    if (tp->flag != 0) {
        func_0208763c(tp->a);
    }
    obj = func_02057df8(*(void **)(p + 0x28), 0x28 * n, c, 4, 0, 0, 0);
    *(uint32_t *)(obj + 0x10) = n;
    *(uint8_t **)(obj + 0x14) = p;
    k = n;
    e = *(uint8_t **)(obj + 4);
    if (n != 0) {
        do {
            k--;
            *(void **)(e + 0x24) = obj;
            e += 0x28;
        } while (k != 0);
    }
    if (func_020581cc(*(void **)(p + 0x28), obj) != 0) {
        e = *(uint8_t **)(obj + 4);
        if (n != 0) {
            do {
                n--;
                e += 0x28;
            } while (n != 0);
        }
    }
    if (t.flag != 0) {
        func_02087678(t.a);
    }
    return obj;
}
