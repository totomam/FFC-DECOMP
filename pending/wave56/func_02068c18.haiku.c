#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct { uint32_t a; uint32_t b; uint32_t c; } Trip;

extern void func_02062930(void *self, Pair p, uint32_t c);
extern void func_0206133c(void *object);
extern uint32_t func_02062884(void *object);
extern void func_02069024(void *object, Trip *p, uint32_t v);
extern uint32_t data_020b1a30[];

typedef void (*VFn)(void *, void *, void *, uint32_t);

void *func_02068c18(void *self, void *obj, uint32_t a2, uint32_t a3)
{
    Pair buf;
    Trip e;
    uint32_t *s = (uint32_t *)self;
    uint32_t i;
    uint32_t idx;
    uint8_t b;
    uint8_t *pb = &b;
    VFn fn;
    uint32_t k2 = a2;

    *pb = 0;
    fn = (VFn)((void **)*(void ***)obj)[6];
    fn((void *)&buf, obj, (void *)fn, a3);
    func_02062930(self, buf, a3);
    s[0] = (uint32_t)data_020b1a30;
    s[7] = (uint32_t)obj;
    s[9] = a3;
    s[8] = k2;
    s[10] = 0;
    s[11] = 0;
    s[12] = 0;
    s[13] = 0;
    s[14] = 0;
    s[15] = 0;
    for (i = 0; i < 3; i++) {
        s[16 + i] = 0;
    }
    func_0206133c((void *)s[8]);
    ((void (*)(void *))((void **)*(void ***)obj)[15])(obj);
    e.a = 0;
    e.b = 0;
    e.c = func_02062884(obj);
    if (s[11] < s[12]) {
        idx = s[11];
        s[11] = idx + 1;
        *(Trip *)((uint8_t *)s[10] + idx * 12) = e;
    } else {
        func_02069024(&s[10], &e, *pb);
    }
    return self;
}
