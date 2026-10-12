/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void *data_020b93b8;
extern "C" void *data_020b8e44;
extern "C" uint32_t data_ov007_021c63b8[];
extern "C" uint32_t data_ov007_021c63c0[];
extern "C" uint32_t data_ov007_021c63c8[];

extern "C" void *func_0205681c(uint32_t size);
extern "C" void *func_020159c8(void *obj, uint32_t id);
extern "C" void func_02005988(void *buf, void *src);
struct P { uint32_t a, b; };
extern "C" void *func_02033094(void *a, void *b, uint32_t c, P d, uint32_t f, uint32_t g);
extern "C" void *func_020059cc(void *obj);
extern "C" void func_02056bc0(void *obj, void *node);
extern "C" uint32_t func_02056aec(void *node);
extern "C" void *func_02008ce8(void *a, void *b, uint32_t c, void *d);
extern "C" void *func_ov007_0219b460(void *a, uint32_t b, uint32_t c, uint32_t d);
struct B { uint32_t w[3]; B(void *s) { func_02005988(w, s); } ~B() { func_020059cc(w); } };
extern "C" void func_ov007_021b3cfc(void *param_0)
{
    uint8_t *s = (uint8_t *)param_0;
    void *r4, *r6, *r7, *r1;
    uint32_t node;
    if (s[0xcc] == 0) {
    ((uint32_t *)data_020b93b8)[0x1d0 / 4] = 0;
    ((uint32_t *)data_020b93b8)[0x1d4 / 4] = 0;
    int f = 0;
    r4 = func_0205681c(0xa4);
    uint32_t w[3];
    if (r4 != 0) {
        P p; p.a = 0x80; p.b = 0x60;
        func_02005988(w, func_020159c8(data_020b8e44, 0x36));
        r4 = func_02033094(r4, w, 0, p, 4, 0);
        f = 1;
    }
    if (f) func_020059cc(w);
    func_02056bc0(s + 0x48, r4);
    node = func_02056aec(r4);
    r6 = func_0205681c(0x94);
    if (r6 != 0) r6 = func_02008ce8(r6, r4, 0, *(void **)(s + 0x98));
    r7 = func_ov007_0219b460(data_020b93b8, data_ov007_021c63b8[0], data_ov007_021c63b8[1], 1);
    r1 = func_0205681c(0x94);
    if (r1 != 0) r1 = func_02008ce8(r1, r4, 0, *(void **)(s + 0x98));
    func_02056bc0(s + 0x14, r1);
    func_02056bc0(s + 0x14, r7);
    func_02056bc0(s + 0x14, r6);
    func_02056bc0(s + 0x14, (void *)node);
    *(uint32_t *)(s + 0xb0) = data_ov007_021c63c0[0];
    *(uint32_t *)(s + 0xb4) = data_ov007_021c63c0[1];
    } else {
        *(uint32_t *)(s + 0xb0) = data_ov007_021c63c8[0];
        *(uint32_t *)(s + 0xb4) = data_ov007_021c63c8[1];
    }
}
