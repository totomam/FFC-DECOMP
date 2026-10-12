#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_020692a4(void *p);
extern void func_0205f470(void *p);

#define VC(o, idx) (((void (**)(void *))(*(void **)(o)))[idx])

void func_ov007_021bb894(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *p;
    void *y;
    uint32_t i;
    uint32_t n;

    if (*(void **)(s + 0xcc)) {
        func_02056bf4(s + 0x48);
        p = *(void **)(s + 0xcc);
        if (p) {
            VC(p, 1)(p);
        }
        *(void **)(s + 0xcc) = 0;
    }

    p = *(void **)(s + 0xd0);
    y = *(void **)((uint8_t *)p + 0x94);
    VC(y, 11)(y);
    func_020692a4(*(void **)(s + 0xd0));

    if (*(void **)(s + 0xd8)) {
        y = *(void **)((uint8_t *)*(void **)(s + 0xd8) + 0x98);
        VC(y, 11)(y);
        func_020692a4(*(void **)(s + 0xd8));
    }

    if (*(uint32_t *)(s + 0xbc) == 1) {
        y = *(void **)((uint8_t *)*(void **)(s + 0xd4) + 0x98);
        VC(y, 11)(y);
        func_020692a4(*(void **)(s + 0xd4));
    }

    p = *(void **)(s + 0x138);
    *((uint8_t *)p + 0x3c) = 1;
    func_0205f470(*(void **)((uint8_t *)*(void **)((uint8_t *)p + 0x50) + 0x94));

    y = *(void **)(s + 0xfc);
    VC(y, 11)(y);
    y = *(void **)(s + 0x100);
    VC(y, 11)(y);
    y = *(void **)(s + 0x104);
    VC(y, 11)(y);
    y = *(void **)(s + 0x108);
    VC(y, 11)(y);
    y = *(void **)(s + 0x10c);
    VC(y, 11)(y);
    y = *(void **)(s + 0x144);
    VC(y, 11)(y);

    n = *(uint32_t *)(s + 0xf4);
    i = 0;
    if (n != 0) {
        do {
            uint32_t val = ((uint32_t *)*(void **)(s + 0xf0))[i];
            void *base = *(void **)(s + 0xb8);
            if (*(void **)((uint8_t *)base + ((val & 0xff) << 2) + 0x68)) {
                p = *(void **)(s + i * 4 + 0x110);
                VC(p, 11)(p);
                p = *(void **)(s + i * 4 + 0x124);
                VC(p, 11)(p);
            }
            i++;
        } while (i < n);
    }
}
