#include "ffc/types.h"

typedef struct {
    int32_t type;
    void *p;
    int32_t off;
    int32_t x;
    int32_t y;
} Elem;

typedef struct {
    uint8_t pad[0xc];
    Elem *elems;
    uint32_t count;
} Outer;

typedef void (*VFn)(void *self, void *arg);

extern void func_02084ca4(void *dst, void *src, int n);

void func_02050bb0(Outer *a, uint8_t *b) {
    uint32_t i;
    for (i = 0; i < a->count; i++) {
        Elem e = a->elems[i];
        switch (e.type) {
        case 0:
            func_02084ca4(b + e.off, e.p, e.x * e.y);
            break;
        case 1: {
            VFn *vt = *(VFn **)e.p;
            vt[4](e.p, b + e.off);
            break;
        }
        }
    }
}
