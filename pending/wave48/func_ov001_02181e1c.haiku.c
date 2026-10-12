#include "ffc/types.h"

#define FIELD(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define WORD(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define HALF(p, off) (*(uint16_t *)((uint8_t *)(p) + (off)))

extern int func_ov001_02181c3c(void *a, uint32_t b, uint32_t c);
extern void *func_ov001_02181e10(void);
extern void *func_020903cc(void *p, int c, uint32_t n);
extern void *func_ov000_0216591c(void);
extern int func_ov001_0217fddc(void *a, void *b);
extern void *func_021686f4(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02168abc(void *a, void **b);
extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);

int func_ov001_02181e1c(void *p0, uint32_t *out, uint32_t p2, uint32_t p3) {
    void *obj = 0;

    if (func_ov001_02181c3c(p0, p2, p3) != 0) {
        return 5;
    }
    obj = func_ov001_02181e10();
    if (obj == 0) {
        goto fail;
    }
    func_020903cc(obj, 0, 0xa0);
    WORD(obj, 0) = p2;
    HALF(obj, 4) = (uint16_t)p3;
    FIELD(obj, 8) = p0;
    FIELD(obj, 0x1c) = func_ov000_0216591c();
    FIELD(obj, 0x88) = FIELD(obj, 0x1c);
    HALF(obj, 0x64) = 0;
    HALF(obj, 0x66) = 0;
    if (func_ov001_0217fddc((uint8_t *)obj + 0x44, FIELD(p0, 0x3c)) == 0) {
        goto fail;
    }
    if (func_ov001_0217fddc((uint8_t *)obj + 0x50, FIELD(p0, 0x38)) == 0) {
        goto fail;
    }
    FIELD(obj, 0x5c) = func_021686f4(0x10, 0x40, 0);
    if (FIELD(obj, 0x5c) == 0) {
        goto fail;
    }
    FIELD(obj, 0x60) = func_021686f4(0x10, 0x40, 0);
    if (FIELD(obj, 0x60) == 0) {
        goto fail;
    }
    FIELD(obj, 0x98) = func_021686f4(4, 2, 0);
    if (FIELD(obj, 0x98) == 0) {
        goto fail;
    }
    FIELD(obj, 0x9c) = func_021686f4(4, 2, 0);
    if (FIELD(obj, 0x9c) == 0) {
        goto fail;
    }
    func_ov000_02168abc(FIELD(p0, 0xc), &obj);
    *out = func_ov001_02181c3c(p0, p2, p3);
    if (*out == 0) {
        goto fail;
    }
    return 0;

fail:
    if (obj != 0) {
        func_ov000_021653f4(FIELD(obj, 0x44));
        func_ov000_021653f4(FIELD(obj, 0x50));
        if (FIELD(obj, 0x5c) != 0) {
            func_ov000_02168738(FIELD(obj, 0x5c));
        }
        if (FIELD(obj, 0x60) != 0) {
            func_ov000_02168738(FIELD(obj, 0x60));
        }
        if (FIELD(obj, 0x98) != 0) {
            func_ov000_02168738(FIELD(obj, 0x98));
        }
        if (FIELD(obj, 0x9c) != 0) {
            func_ov000_02168738(FIELD(obj, 0x9c));
        }
        func_ov000_021653f4(obj);
    }
    return 1;
}
