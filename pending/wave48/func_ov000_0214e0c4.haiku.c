#include "ffc/types.h"

extern uint8_t *func_ov000_0214d1d8(void (*fn)(void), void *obj, uint32_t flags, int32_t len);
extern void func_02084e04(void *dst, void *src, uint32_t n);
extern uint16_t func_ov000_02147704(void);
extern int32_t func_ov000_0214d2b8(void *obj, void *rec);
extern void func_ov000_0214e1d8(void);

int32_t func_ov000_0214e0c4(uint8_t *self, uint8_t *p1, int32_t p2, int32_t p3, uint16_t a5, int32_t a6, uint32_t a7)
{
    uint8_t *ctx = *(uint8_t **)(self + 0xa4);
    uint8_t *rec;
    uint32_t fc;
    int32_t f8;
    uint16_t saved;
    int32_t end;
    int32_t len;

    rec = func_ov000_0214d1d8(func_ov000_0214e1d8, *(void **)(ctx + 0x10c), a7, p3);
    if (rec == 0) {
        return -0x21;
    }

    if ((a7 & 1) && (int8_t)self[0xaf] != 1) {
        *(uint8_t *)(rec + 0xd) = 3;
    } else {
        *(uint8_t *)(rec + 0xd) = 0;
    }

    fc = *(uint32_t *)(ctx + 0xfc);
    f8 = *(int32_t *)(ctx + 0xf8);
    end = p3 + p2;
    if (end < f8) {
        *(uint32_t *)(rec + 0x10) = fc + p3;
        *(int32_t *)(rec + 0x14) = p2;
        p3 = end;
        *(uint32_t *)(rec + 0x18) = 0;
        *(uint32_t *)(rec + 0x1c) = 0;
    } else {
        *(uint32_t *)(rec + 0x10) = fc + p3;
        len = f8 - p3;
        *(int32_t *)(rec + 0x14) = len;
        *(uint32_t *)(rec + 0x18) = fc;
        p3 = p2 - len;
        *(int32_t *)(rec + 0x1c) = p3;
        func_02084e04(p1 + len, (void *)fc, p3);
    }
    func_02084e04(p1, *(void **)(rec + 0x10), *(uint32_t *)(rec + 0x14));

    saved = *(uint16_t *)(ctx + 0x100);
    *(uint16_t *)(rec + 0x20) = (uint16_t)p3;
    *(uint16_t *)(ctx + 0x100) = *(uint16_t *)(rec + 0x20);

    if ((int8_t)self[0xaf] == 1) {
        if (*(uint16_t *)(self + 0xb0) == 0) {
            *(uint16_t *)(self + 0xb0) = func_ov000_02147704();
            *(uint16_t *)(self + 0xa) = *(uint16_t *)(self + 0xb0);
        }
        *(uint16_t *)(rec + 0x24) = *(uint16_t *)(self + 0xb0);
        if (*(uint32_t *)(self + 0xb4) == 0 || a6 != 0) {
            *(int32_t *)(rec + 0x28) = a6;
            *(uint16_t *)(rec + 0x26) = a5;
        } else {
            *(uint32_t *)(rec + 0x28) = *(uint32_t *)(self + 0xb4);
            *(uint16_t *)(rec + 0x26) = *(uint16_t *)(self + 0xb2);
        }
    } else {
        *(uint32_t *)(rec + 0x28) = 0;
    }

    if (func_ov000_0214d2b8(*(void **)(ctx + 0x10c), rec) != 0) {
        *(uint16_t *)(ctx + 0x100) = saved;
        p2 = 0;
    }
    return p2;
}
