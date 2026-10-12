#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0203b0a8(void *dst, void *begin, void *end, uint32_t val);
extern void *func_ov007_021be084(void *obj, void *a, void *b, void *ctx);
extern void func_0200958c(void *ctx);

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t w3;
} Buf;

void *func_0203d510(uint8_t *p)
{
    Buf buf;
    uint32_t done = 0;
    void *r6 = func_0205681c(0x130);
    if (r6 != 0) {
        uint8_t b;
        uint32_t off;
        uint8_t *base;
        buf.w1 = done;
        buf.w2 = done;
        buf.w3 = done;
        off = *(uint32_t *)(p + 0x9c);
        off = off * 12;
        base = *(uint8_t **)(p + 0x98);
        b = *(uint8_t *)&buf.w0;
        func_0203b0a8(&buf.w1, base, base + off, b);
        done = 1;
        r6 = func_ov007_021be084(r6, *(void **)(p + 0x90), *(void **)(p + 0x94), &buf.w1);
    }
    if (done != 0) {
        func_0200958c(&buf.w1);
    }
    return r6;
}
