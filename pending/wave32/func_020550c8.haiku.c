#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02087678(void *p);

typedef struct VT {
    void *slot0;
    void *slot1;
    void (*fn)(void *self);
} VT;

typedef struct Obj {
    VT *vt;
} Obj;

void func_020550c8(uint8_t *p) {
    struct {
        void *q;
        uint8_t f;
    } s;
    Obj *o;
    s.q = p + 0x150;
    ((uint8_t *)&s)[4] = 1;
    if (((uint8_t *)&s)[4]) {
        func_0208763c();
    }
    if ((int8_t)*(uint32_t *)(p + 0x124) == 0) {
        o = (Obj *)(p + 0x118);
        o->vt->fn(o);
    }
    if (((uint8_t *)&s)[4]) {
        func_02087678(s.q);
    }
}
