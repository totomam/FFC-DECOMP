#include "ffc/types.h"

typedef struct VT {
    void *s[8];
    void (*m20)(void *, uint32_t);
    void (*m24)(void *);
    void (*m28)(void *);
    void (*m2c)(void *);
} VT;

extern char data_ov007_021c72e0[];
extern char data_ov007_021c72fc[];
extern char data_ov007_021c731c[];
extern void *func_0203bb94(void *d, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);
extern void func_02069288(void *object);
extern void func_020697ac(void *self, void *obj);

#define VT_OF(o) (*(VT **)(o))

void func_ov007_021b8ffc(void *p0)
{
    uint8_t *self = (uint8_t *)p0;
    uint32_t st = *(uint32_t *)(self + 0xd4);
    char *d;
    uint32_t i;
    void *o;

    if (st == 0) {
        d = data_ov007_021c72e0;
    } else if (st == 1) {
        d = data_ov007_021c72fc;
    } else {
        d = data_ov007_021c731c;
    }

    *(void **)(self + 0xb8) = func_0203bb94(d, 1, 0, 0);

    o = *(void **)(self + 0xb8);
    VT_OF(o)->m28(o);

    o = *(void **)(self + 0xb8);
    VT_OF(o)->m20(o, 3);

    func_02056bc0(self + 0x48, *(void **)(self + 0xb8));

    func_02069288(*(void **)(self + 0xbc));
    o = *(void **)(*(void **)(self + 0xbc));
    o = *(void **)((uint8_t *)o + 0x94);
    VT_OF(o)->m28(o);

    func_02069288(*(void **)(self + 0xc0));
    o = *(void **)(*(void **)(self + 0xc0));
    o = *(void **)((uint8_t *)o + 0x94);
    VT_OF(o)->m28(o);

    for (i = 0; i < 4; i++) {
        o = *(void **)(self + 0xc4 + i * 4);
        VT_OF(o)->m28(o);
    }

    func_020697ac(self, *(void **)(self + 0xbc));

    o = *(void **)(self + 0xe4);
    VT_OF(o)->m2c(o);
}
