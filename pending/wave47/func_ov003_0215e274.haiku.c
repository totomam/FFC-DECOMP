#include "ffc/types.h"

extern void func_02056c4c(void *obj);
extern void func_02056bc0(void *obj, void *node);
extern void *func_ov003_02146494(void *p);
extern void func_ov003_0215e570(void *p, void *buf);
extern void *func_0205681c(uint32_t n);
extern void *func_ov003_0215c6a8(void *obj, void *a, uint32_t x, uint32_t y,
                                 uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3,
                                 uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7);

typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t z;
    uint16_t w;
    uint32_t v;
} Buf;

void func_ov003_0215e274(uint8_t *a, uint32_t b, uint32_t c, uint32_t d,
                         uint32_t e, uint32_t f, uint32_t g, uint32_t flags, uint32_t mask)
{
    Buf buf;
    void *p;
    uint32_t r7 = b;

    func_02056c4c(*(void **)(a + 0xb4));
    if (mask != 0) {
        func_ov003_0215e570(func_ov003_02146494(*(void **)(a + 0xa8)), &buf);
    }

    if (flags & 1) {
        r7 = *(uint16_t *)(a + 0x158);
    } else if (mask & 1) {
        r7 = buf.x;
    }

    if (flags & 2) {
        c = *(uint16_t *)(a + 0x15a);
    } else if (mask & 2) {
        c = buf.y;
    }

    if (flags & 4) {
        d = *(uint16_t *)(a + 0x15c);
    } else if (mask & 4) {
        d = buf.z;
    }

    if (flags & 8) {
        e = *(uint32_t *)(a + 0x160);
    } else if (mask & 8) {
        e = buf.v;
    }

    p = func_0205681c(100);
    if (p != 0) {
        p = func_ov003_0215c6a8(p, a,
                                *(uint16_t *)(a + 0x158), *(uint16_t *)(a + 0x15a),
                                *(uint16_t *)(a + 0x15c), *(uint32_t *)(a + 0x160),
                                r7, c, d, e, f, g);
    }

    func_02056bc0(*(void **)(a + 0xb4), p);
}
