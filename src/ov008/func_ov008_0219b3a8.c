/* cflags: -lang c++ */
#include "ffc/types.h"
struct Blk { uint32_t a, b, c, d; };
struct V { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual Blk g10(); virtual void v5(); virtual void v6(); virtual Blk g1c(); virtual void v8(); virtual void v9(); virtual void m28(); virtual void m2c(); virtual int m30(); };
extern "C" {
extern void func_020628ac(void *p, Blk b);
extern void func_02056c4c(void *p);
extern uint32_t func_ov005_02195e2c(void *p, Blk a, Blk b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_0201ed30(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_ov008_0219b694(void *self, uint32_t i);
extern uint32_t func_ov008_0219ba0c(void *self, uint32_t i);
extern uint32_t func_0201e994(uint32_t a);
extern void func_ov005_021963cc(void *p, void *buf, uint32_t flag);
extern void func_ov005_02196f60(void *p, uint32_t v);
extern void func_ov005_021964c4(void *p);
extern uint32_t data_020b93b8;
void func_ov008_0219b3a8(void *r0, V *r1);

void func_ov008_0219b3a8(void *r0, V *n)
{
    uint8_t *s = (uint8_t *)r0;
#define OBJ (*(V **)(s + 0xf0))
    if (n == 0) {
        OBJ->m2c();
        return;
    }
    if (OBJ->m30() != 0) {
        OBJ->m28();
        func_020628ac(OBJ, n->g10());
    } else {
        func_02056c4c(*(void **)(s + 0xec));
        uint32_t r = func_ov005_02195e2c(OBJ, OBJ->g1c(), n->g10(), 10, (uint32_t)-5);
        func_02056bc0(*(void **)(s + 0xec), (void *)r);
    }
    {
        uint8_t i;
        uint32_t buf[6];
        for (i = 0; i < 8; i++) {
            uint32_t *arr = *(uint32_t **)(s + 0xcc);
            if ((uint32_t)n == arr[i]) {
                uint8_t idx;
                int flag;
                s[0x112] = i;
                idx = (uint8_t)(s[0x112] + (s[0x104] << 3));
                if (idx < *(uint32_t *)(s + 0xe4)) {
                    func_0201ed30(data_020b93b8, *(uint32_t *)(s + 0x118), idx, buf);
                    if (func_ov008_0219b694(s, idx) == 0 && (*(uint32_t *)(s + 0x10c) + func_ov008_0219ba0c(s, idx) > *(uint32_t *)(s + 0x108)
                               || s[0x110] >= func_0201e994(data_020b93b8))) {
                        func_ov005_021963cc(*(void **)(s + 0xf4), buf, 1);
                    } else {
                        func_ov005_021963cc(*(void **)(s + 0xf4), buf, 0);
                    }
                    func_ov005_02196f60(*(void **)(s + 0xf8), func_ov008_0219ba0c(s, idx));
                    s[0x111] = idx;
                    return;
                }
            }
        }
    }
    func_ov005_021964c4(*(void **)(s + 0xf4));
    func_ov005_02196f60(*(void **)(s + 0xf8), 0);
    s[0x111] = 0xff;
}
}
