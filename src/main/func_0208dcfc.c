#include "ffc/types.h"

extern void *func_0208ceec(void);
extern int32_t func_0208cf38(int32_t a, int32_t b, int32_t c);
extern void func_02087874(void *p, uint32_t n);
extern int32_t func_0208d460(void);
extern int32_t func_0208d418(void);
extern void func_0208cdd8(uint32_t a, void *b);
extern void func_020849e0(uint32_t a, void *b, uint32_t c);
extern void func_020849f4(void *a, void *b, uint32_t c);
extern int32_t func_0208cea4(void *p, uint32_t n);

int32_t func_0208dcfc(void *p0, int32_t p1, uint32_t p2, int32_t p3, uint16_t p4, void *p5)
{
    uint8_t fr[0x40];
    uint8_t *base;
    int32_t t;
    uint16_t r6;

    base = *(uint8_t **)((uint8_t *)func_0208ceec() + 4);
    t = func_0208cf38(2, 7, 8);
    if (t != 0) {
        return t;
    }
    func_02087874(base + 0x188, 2);
    func_02087874(base + 0xc6, 2);
    if (*(uint16_t *)(base + 0x188) != 0 && *(uint16_t *)(base + 0xc6) != 1) {
        return 3;
    }
    func_02087874(base + 0xc, 4);
    if (*(int32_t *)(base + 0xc) == 1) {
        return 3;
    }
    if (p2 & 0x3f) {
        return 6;
    }
    r6 = p4;
    if (r6 & 0x1f) {
        return 6;
    }
    func_02087874(base + 0x9c, 2);
    if (*(uint16_t *)(base + 0x9c) == 0) {
        if ((int32_t)p2 < func_0208d460()) {
            return 6;
        }
        if ((int32_t)r6 < func_0208d418()) {
            return 6;
        }
    }
    func_0208cdd8(0xe, p0);
    func_020849e0(0, fr, 0x40);
    *(uint16_t *)(fr) = 0xe;
    *(uint32_t *)(fr + 0x8) = p2 >> 1;
    *(uint32_t *)(fr + 0x4) = p1;
    *(uint32_t *)(fr + 0xc) = p3;
    *(uint32_t *)(fr + 0x10) = r6;
    func_020849e0(0, fr + 0x14, 0x1c);
    func_020849f4(p5, fr + 0x30, 0x10);
    t = func_0208cea4(fr, 0x40);
    if (t != 0) {
        return t;
    }
    return 2;
}
