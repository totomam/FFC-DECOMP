/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num { uint32_t v; Num(uint32_t x) : v(x) {} ~Num() {} };
inline uint32_t diff(const Num &a, uint32_t b) { return a.v - b; }

extern "C" {
extern void func_02018df4(void *pk, uint32_t v);
extern void func_020532a4(void *obj, void *pk);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void func_02053290(void *pk);
extern uint32_t func_02017f9c(uint32_t v);
extern uint8_t *func_02052d90(void *a, void *b);
extern uint32_t func_0201bf88(uint32_t a, uint32_t b);
extern void func_0200d5d4(void *obj, uint32_t *idx, uint32_t value);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern void func_ov010_021bd4f0(void *ctx, void *a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint8_t data_ov010_021d18f8[];
extern uint8_t data_ov010_021d19b0[];
}

typedef struct {
    uint32_t a;
    void *p;
    void *q;
    uint8_t c;
} Pk;

typedef struct {
    uint8_t zz[4];
    uint32_t i;
    Pk pk;
    uint32_t tail;
} Outer;

extern "C" void func_ov010_021bf640(uint8_t *ctx)
{
    Outer o;
    uint32_t off[4];
    off[0] = 0x14c;
    off[1] = 0x148;
    off[2] = 0x140;
    off[3] = 0x13c;

    {
        uint32_t n = *(uint32_t *)(ctx + 0x13c);
        *(uint32_t *)(ctx + 0x13c) = diff(n, n);
    }
    func_02018df4(&o.pk, data_020b8e44);
    func_020532a4(ctx + 0x144, &o.pk);
    if ((void *)&o.pk.p != (void *)(ctx + 0x148)) {
        if (*(void **)(ctx + 0x148) != 0) {
            if (*(uint8_t *)(ctx + 0x150)) {
                func_02052d3c(*(void **)(ctx + 0x148), *(void **)(ctx + 0x14c));
            }
            func_02052c04(*(void **)(ctx + 0x148));
        }
    }
    *(void **)(ctx + 0x148) = o.pk.p;
    *(void **)(ctx + 0x14c) = o.pk.q;
    *(uint8_t *)(ctx + 0x150) = o.pk.c;
    if (o.pk.p != 0) {
        func_02052be0();
        if (*(uint8_t *)(ctx + 0x150)) {
            func_02052d10(*(void **)(ctx + 0x148), *(void **)(ctx + 0x14c));
        }
    }
    if (o.pk.p != 0) {
        if (o.pk.c) {
            func_02052d3c(o.pk.p, o.pk.q);
        }
        func_02052c04(o.pk.p);
    }
    func_02053290(&o.pk);

    for (o.i = 1; o.i < func_02017f9c(data_020b8e44); o.i++) {
        uint8_t *m = func_02052d90(*(void **)(ctx + off[1]), *(void **)(ctx + off[0]));
        uint8_t *base = m + *(uint32_t *)(m + 8);
        if (*(uint16_t *)(base + (o.i << 3)) != 0) {
            if (func_0201bf88(data_020b93b8, o.i) != 0) {
                uint32_t cnt = *(uint32_t *)(ctx + off[3]);
                if (cnt < *(uint32_t *)(ctx + off[2])) {
                    uint32_t *arr = *(uint32_t **)(ctx + 0x138);
                    *(uint32_t *)(ctx + 0x13c) = cnt + 1;
                    arr[cnt] = o.i;
                } else {
                    o.zz[1] = 0;
                    func_0200d5d4(ctx + 0x138, &o.i, o.zz[1]);
                }
            }
        }
    }

    if (*(uint32_t *)(ctx + 0x13c) == 0) {
        *(uint32_t *)(ctx + 0xfc) = 0;
    } else {
        *(uint32_t *)(ctx + 0xfc) = func_0209a978(*(uint32_t *)(ctx + 0x13c) - 1, 5);
    }
    func_ov010_021bd4f0(ctx, data_ov010_021d19b0, 0x3c, 0x203, data_ov010_021d18f8, 2);
}
