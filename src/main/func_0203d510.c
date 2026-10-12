/* cflags: -lang c++ */
#include "ffc/types.h"

struct S { uint8_t c; };
struct Buf { uint32_t w0, w1, w2; };

extern "C" {
void *func_0205681c(uint32_t size);
void func_0203b0a8(void *dst, void *begin, void *end, S s);
void *func_ov007_021be084(void *obj, void *a, void *b, void *ctx);
void func_0200958c(void *ctx);
void *func_0203d510(uint8_t *p);
}

void *func_0203d510(uint8_t *p)
{
    Buf buf;
    S s;
    uint32_t done = 0;
    void *r6 = func_0205681c(0x130);
    if (r6 != 0) {
        buf.w0 = 0; buf.w1 = 0; buf.w2 = 0;
        uint8_t *base = *(uint8_t **)(p + 0x98);
        func_0203b0a8(&buf, base, base + *(uint32_t *)(p + 0x9c) * 12, s);
        done = 1;
        r6 = func_ov007_021be084(r6, *(void **)(p + 0x90), *(void **)(p + 0x94), &buf);
    }
    if (done != 0) {
        func_0200958c(&buf);
    }
    return r6;
}
