#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02087620(void *obj);
extern void *func_0205681c(uint32_t size);
extern void *func_02005d3c(void *obj);
extern void func_02005dac(void *obj);
extern void func_02056bc0(void *obj, void *node);
extern char data_020ae6d4[];
extern char data_ov002_021d4a80[];
extern char data_ov002_021d4a9c[];

void *func_ov002_021994f8(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint32_t i;
    uint32_t j;
    uint32_t k;
    uint32_t m;
    uint32_t z;
    void *n;

    func_02056c9c(obj, 0);
    {
        uint8_t *q = p + 0x80;
        uint8_t *r;
        *(void **)(obj + 0x80) = data_020ae6d4;
        r = q + 0x10;
        *(uint32_t *)(q + 4) = 0;
        *(uint32_t *)(q + 8) = 0;
        *(uint32_t *)(q + 0xc) = 0;
        *(uint32_t *)(q + 0x10) = 0;
        q += 0x1c;
        *(uint32_t *)(r + 4) = 0;
        *(uint32_t *)(r + 8) = 0;
        func_02087620(q);
    }
    *(void **)(p + 0) = data_ov002_021d4a80;
    *(void **)(p + 0x80) = data_ov002_021d4a9c;
    *(uint32_t *)(p + 0xc0) = 0;
    *(uint32_t *)(p + 0xc4) = 0;
    *(uint32_t *)(p + 0xc8) = 0;
    *(uint32_t *)(p + 0xcc) = 0;
    *(uint32_t *)(p + 0xd4) = 0;
    *(uint32_t *)(p + 0xd8) = 0;
    *(uint32_t *)(p + 0xdc) = 0;
    *(uint32_t *)(p + 0xec) = 0;
    z = 0;
    for (i = 0; i < 2; i++) {
        *(uint32_t *)(p + 0xb8 + i * 4) = z;
    }
    for (j = 0; j < 2; j++) {
        *(uint8_t *)(p + 0xd0 + j) = z;
    }
    for (k = 0; k < 2; k++) {
        *(uint8_t *)(p + 0xf4 + k) = z;
    }
    for (m = 0; m < 2; m++) {
        *(uint32_t *)(p + 0xe0 + m * 4) = z;
    }
    n = func_0205681c(0x90);
    if (n != 0) {
        n = func_02005d3c(n);
    }
    *(void **)(p + 0xe8) = n;
    func_02005dac(n);
    func_02056bc0(p + 0x48, *(void **)(p + 0xe8));
    return obj;
}
