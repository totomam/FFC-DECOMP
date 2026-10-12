#include "ffc/types.h"

typedef struct Sub {
    uint32_t pad0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t pad14;
    uint32_t pad18;
    uint32_t f1c;
} Sub;

typedef struct Obj {
    uint8_t pad0[0x14];
    uint32_t flags;
    uint8_t pad1[8];
    Sub *sub;
} Obj;

extern int func_0207fc10(Obj *object);
extern void func_0207fbb0(void *object);
extern void func_0207e890(void *object);
extern int func_0207e96c(void *tmp, void *obj, uint32_t a, uint32_t b, int c);
extern int func_0207eab0(void *tmp, uint32_t addr, uint32_t size);
extern void func_0207ea0c(void *tmp);
extern void func_02084b2c(uint32_t addr, int zero, uint32_t size);

uint32_t func_0207faec(Obj *obj, uint32_t size, uint32_t limit)
{
    Sub *s;
    uint32_t tmp[18];
    uint32_t total;
    uint32_t a;

    if (size != 0 && func_0207fc10(obj) != 0) {
        func_0207fbb0(obj);
    }

    s = obj->sub;
    total = (s->f8 + s->f10 + 0x3f) & ~0x1f;
    if (total <= limit) {
    a = (size + 0x1f) & ~0x1f;
    func_0207e890(tmp);
    if (func_0207e96c(tmp, obj, s->f4, s->f4 + s->f8, -1) != 0) {
        if (func_0207eab0(tmp, a, s->f8) < 0) {
            func_02084b2c(a, 0, s->f8);
        }
        func_0207ea0c(tmp);
    }
    s->f4 = a;

    a += s->f8;
    if (func_0207e96c(tmp, obj, s->fc, s->fc + s->f10, -1) != 0) {
        if (func_0207eab0(tmp, a, s->f10) < 0) {
            func_02084b2c(a, 0, s->f10);
        }
        func_0207ea0c(tmp);
    }
    s->fc = a;
    s->f1c = size;
    obj->flags |= 4;
    }
    return total;
}
