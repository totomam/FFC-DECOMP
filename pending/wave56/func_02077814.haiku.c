#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern uint32_t func_02076404(uint32_t x);
extern uint32_t func_02076434(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_02076424(uint32_t x);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020b291c;

typedef uint32_t (*vfn_t)(void *self, uint32_t arg);

void func_02077814(void *a) {
    uint8_t *obj = (uint8_t *)a;
    uint8_t *p = *(uint8_t **)(obj + 0xa0);
    uint8_t flag = p[0x12];
    uint8_t *q = p + 0x1c;
    uint32_t r;
    void *vt;
    uint32_t *vtbl;
    Pair tmp;

    if (flag != 0) {
        func_0208763c(q);
    }
    if (*(uint32_t *)(p + 0x14) != 0) {
        if (flag != 0) {
            func_02087678(q);
        }
        return;
    }
    if (flag != 0) {
        func_02087678(q);
    }
    if (func_02076404(*(uint32_t *)(obj + 0x80)) != 0) {
        r = func_02076434(*(uint32_t *)(obj + 0x80));
        vt = *(void **)(obj + 0x84);
        vtbl = *(uint32_t **)vt;
        r = ((vfn_t)vtbl[3])(vt, r);
        vt = *(void **)(obj + 0x84);
        vtbl = *(uint32_t **)vt;
        r = ((vfn_t)vtbl[1])(vt, r);
        func_02056bc0(obj + 0x14, (void *)r);
        func_02076424(*(uint32_t *)(obj + 0x80));
    } else {
        vtbl = *(uint32_t **)obj;
        r = ((vfn_t)vtbl[4])(obj, 0xc);
        vt = *(void **)(obj + 0x84);
        vtbl = *(uint32_t **)vt;
        r = ((vfn_t)vtbl[1])(vt, r);
        func_02056bc0(obj + 0x14, (void *)r);
    }
    tmp = data_020b291c;
    *(Pair *)(obj + 0x88) = tmp;
}
