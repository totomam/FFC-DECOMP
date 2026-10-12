#include "ffc/types.h"

extern void func_02056c9c(void *o, uint32_t z, uint32_t c);
extern void func_020509c0(void *o);
extern void func_02053234(void *o);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *o);
extern void *func_02009978(void *a, uint32_t b);
extern void func_02056bc0(void *o, void *n);
extern void *func_02084b2c(void *d, int c, uint32_t n);
extern void func_ov003_02154f5c(void *o);
extern void func_02050a7c(void *d, const void *s, uint32_t n);
extern void func_02050ac4(void *d, void *s, uint32_t n);
extern void func_02050b38(void *o);
extern char data_ov003_02179f38[];
extern char data_ov003_02179f54[];
extern void *data_0213df18;

void *func_ov003_0215322c(void *p0, uint32_t a, uint32_t c)
{
    uint8_t *p = (uint8_t *)p0;
    uint8_t *q;
    void *r4;
    int i;
    uint32_t z = 0;

    func_02056c9c(p0, 0, c);
    func_020509c0(p + 0x80);
    *(void **)p = data_ov003_02179f38;
    *(void **)(p + 0x80) = data_ov003_02179f54;

    q = p + 0xe0;
    func_02053234(q);
    *(uint32_t *)(q + 4) = z;
    *(uint8_t *)(q + 0xc) = z;

    q = p + 0xf0;
    func_02053234(q);
    *(uint32_t *)(q + 4) = z;
    *(uint8_t *)(q + 0xc) = z;

    q = p + 0x100;
    func_02053234(q);
    *(uint32_t *)(q + 4) = z;
    *(uint8_t *)(q + 0xc) = z;

    *(uint32_t *)(p + 0x1dc) = z;
    *(uint32_t *)(p + 0x1e0) = a;
    *(uint8_t *)(p + 0x1f0) = z;
    *(uint32_t *)(p + 0x1f4) = c;

    if (a != 0) {
        r4 = func_0205681c(0x24);
        if (r4 != 0) {
            r4 = func_02009978(r4, func_0204f7ec(data_0213df18));
        }
        *(void **)(p + 0x1e8) = r4;
        func_02056bc0(p + 0x48, r4);
    }

    *(uint32_t *)(p + 0x1e4) = z;
    *(uint32_t *)(p + 0x1ec) = z;

    func_02084b2c(p + 0x98, 0, 0x48);

    for (i = 0; i < 4; i++) {
        *(uint8_t *)(p + 0xac + i) = (i == 0) ? 1 : 0;
        *(uint32_t *)(p + 0xb0 + i * 4) = z;
        *(uint32_t *)(p + 0xc0 + i * 4) = z;
        *(uint32_t *)(p + 0xd0 + i * 4) = z;
    }

    func_ov003_02154f5c(p0);
    func_02050a7c(p + 0x80, p + 0x98, 0x48);
    func_02050a7c(p + 0x80, p + 0x110, 0xc8);
    func_02050a7c(p + 0x80, p + 0x1d8, 4);
    func_02050ac4(p + 0x80, p + 0x1dc, 1);
    func_02050b38(p + 0x80);
    return p0;
}
