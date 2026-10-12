#include "ffc/types.h"

extern void func_02056c9c(void *object, uint32_t v);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void *data_ov003_02179cec[];
extern void *data_ov003_02179cc4[];

void *func_ov003_02151334(void *a, uint32_t b, uint32_t c)
{
    uint8_t *p = (uint8_t *)a;
    uint8_t *s;
    uint8_t *q;
    uint32_t i;
    uint32_t t;

    func_02056c9c(a, 0);
    s = p + 0x14;
    *(void **)p = (void *)data_ov003_02179cec;
    q = p + 0x48;
    t = s[0x12];
    t = (t & 0xffffff00u) | 1;
    s[0x12] = (uint8_t)t;
    t = q[0x12];
    t = (t & 0xffffff00u) | 1;
    q[0x12] = (uint8_t)t;

    for (i = 0; i < 2; i++) {
        uint32_t n = 4;

        ((void **)(p + 0x80))[i] = func_0203b95c(data_ov003_02179cc4[1], c, 0, 1);
        (*(void (**)(void *))(*(void ***)((void **)(p + 0x80))[i])[10])(((void **)(p + 0x80))[i]);
        (*(void (**)(void *, uint32_t))(*(void ***)((void **)(p + 0x80))[i])[8])(((void **)(p + 0x80))[i], 2);
        (*(void (**)(void *, uint32_t))(*(void ***)((void **)(p + 0x80))[i])[15])(((void **)(p + 0x80))[i], i);
        if (i == 0) {
            n = b;
        }
        (*(void (**)(void *, uint32_t, uint32_t))(*(void ***)((void **)(p + 0x80))[i])[14])(((void **)(p + 0x80))[i], n, 0);
        func_02056bc0(q, ((void **)(p + 0x80))[i]);
    }

    func_0205f2f0((void *)func_02064aa8(*(const void **)(p + 0x84)), 1);
    return (void *)p;
}
