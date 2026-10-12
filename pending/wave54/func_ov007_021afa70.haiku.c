#include "ffc/types.h"

#define F32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern void func_02019fe0(uint32_t a, uint8_t b, uint32_t c);
extern void func_02036750(void *p);
extern void func_0201f1f0(uint32_t a, uint32_t b, void *p);
extern void *func_020367b8(void *object);
extern void func_02093bc8(void *dst, void *src);
extern int func_02036994(void *p, uint32_t i);
extern void func_02035f58(void *p);
extern void func_0201f600(uint32_t a, uint32_t b, void *c, void *d);
extern void *func_02036384(void *p);
extern void func_02035fd0(void *p);
extern void *func_0205681c(uint32_t x);
extern uint32_t func_ov007_021aec28(void *a, void *b, uint32_t c, void *d, void *e);
extern void func_02056bc0(void *object, void *node);
extern void func_020367a8(void *p);

void func_ov007_021afa70(uint8_t *a)
{
    uint8_t buf8[0x60];
    uint8_t buf68[0x58];
    uint32_t i;
    uint32_t res;
    void *r;
    uint8_t *arr;

    if (F32(a, 0x80) != 0) {
        if ((int32_t)F32(a, 0x178) > 0) {
            func_02019fe0(data_020b8e44, (uint8_t)F32(a, 0x80), 1);
        } else {
            func_02019fe0(data_020b8e44, (uint8_t)F32(a, 0x80), 0);
        }
    }

    if (F32(a, 0x80) >= 3) {
        F32(a, 0xc) = (F32(a, 0xc) & ~0xffu) | 2;
        return;
    }

    F32(a, 0x80) = F32(a, 0x80) + 1;
    func_02036750(buf68);
    func_0201f1f0(data_020b93b8, F32(a, 0x80), buf68);
    func_02093bc8(a + 0x84, func_020367b8(buf68));

    F32(a, 0x158) = (uint32_t)(a + 0x84);
    arr = a + 0xae;
    for (i = 0; i < 5; i++) {
        if (func_02036994(buf68, i)) {
            func_02035f58(buf8);
            func_0201f600(data_020b93b8, i, buf68, buf8);
            func_02093bc8(arr + 0x22 * i, func_02036384(buf8));
            func_02035fd0(buf8);
        } else {
            *(uint16_t *)(arr + 0x22 * i) = 0;
        }
        F32(a, 0x15c + 4 * i) = (uint32_t)(arr + 0x22 * i);
    }

    F32(a, 0x178) = 0;
    r = func_0205681c(0x84);
    res = 0;
    if (r != 0) {
        res = func_ov007_021aec28(r, a + 0x158, 6, a + 0x170, a + 0x178);
    }
    func_02056bc0(a + 0x14, (void *)res);
    func_020367a8(buf68);
}
