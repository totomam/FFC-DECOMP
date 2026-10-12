#include "ffc/types.h"

extern int32_t func_ov000_021457bc(uint32_t p);
extern int32_t func_ov000_021456e4(void *p, int32_t t);
extern void func_ov000_02145bdc(void *p, uint32_t v, int32_t c);
extern uint8_t *func_ov000_021473b4(void *p, void **out);
extern void func_ov000_02147260(void *p, uint8_t *q, int32_t n);
extern void func_ov000_0214669c(void *p, uint8_t *q, int32_t n);
extern void func_ov000_021471a8(void *p, uint8_t *q, int32_t n);
extern uint8_t data_ov000_0216bc60[];

#define BSW16(x) ((uint16_t)((((int32_t)(x)) >> 8) | (((int32_t)(x)) << 8)))
#define HDR32(p, o) ((((uint32_t)BSW16(*(uint16_t *)((p) + (o)))) << 16) | (uint32_t)BSW16(*(uint16_t *)((p) + (o) + 2)))

void func_ov000_02147588(uint8_t *p, uint32_t size) {
    void *out;
    uint32_t a, b;
    int32_t t, h;
    uint8_t *r;

    a = HDR32(p, 0x10);
    b = HDR32(p, 0xc);

    if (a != b) {
        if (size < 0x14) goto end;
        t = p[0] & 0xf;
        if (t < 5) goto end;
        h = BSW16(*(uint16_t *)(p + 2));
        t <<= 2;
        if (h < t) goto end;
        if (size < (uint32_t)h) goto end;
        if (func_ov000_021457bc(a) == 0) goto end;
        if (func_ov000_021456e4(p, t) != 0xffff) goto end;
        if (*(uint32_t *)(data_ov000_0216bc60 + 0x50) != HDR32(p, 0x10))
            goto L00cc;
        func_ov000_02145bdc(p - 8, b, 1);
    }
L00cc:
    r = func_ov000_021473b4(p, &out);
    if (r == 0) goto end;
    h = BSW16(*(uint16_t *)(r + 2));
    t = (r[0] & 0xf) << 2;
    if (r[9] == 0x11) {
        func_ov000_02147260(r, r + t, h - t);
    } else if (*(uint32_t *)(data_ov000_0216bc60 + 0x50) != 0) {
        if (r[9] == 1) {
            func_ov000_0214669c(r, r + t, h - t);
        } else if (r[9] == 6) {
            func_ov000_021471a8(r, r + t, h - t);
        }
    }
    if (out != 0) {
        void (*fn)(void *) = *(void (**)(void *))(data_ov000_0216bc60 + 0x44);
        fn(r - 0xe);
    }
end:
    return;
}
