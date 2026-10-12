#include "ffc/types.h"

extern void func_02018f9c(void *out, uint32_t handle);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(uint32_t handle, uint16_t val);
extern void func_02005988(void *dst, uint32_t val);
extern void func_020393a8(void *a, void *b, int c);
extern void func_02068ddc(void *obj, void *a);
extern void func_020059cc(void *object);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t x[3];
} Obj;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t fc;
} Tmp;

void func_ov008_021a0368(uint8_t *p, uint8_t v)
{
    Tmp t;
    Obj b;
    Obj a;
    uint32_t r4;
    uint8_t *mar;
    uint16_t val;
    uint32_t h;

    p[0x103] = v;
    func_02018f9c(&t, data_020b8e44);
    r4 = ((uint32_t *)*(uint32_t **)(p + 0xec))[p[0x103]];
    mar = func_02052d90(t.f4, t.f8);
    val = *(uint16_t *)((uint8_t *)mar + *(uint32_t *)(mar + 8) + (r4 << 2));
    h = func_020159c8(data_020b8e44, val);
    func_02005988(&b, h);
    func_020393a8(&a, &b, 1);
    func_02068ddc(*(void **)(p + 0xe4), &a);
    func_020059cc(&a);
    func_020059cc(&b);
    if (t.f4 != 0) {
        if (t.fc != 0) {
            func_02052d3c(t.f4, t.f8);
        }
        func_02052c04(t.f4);
    }
    func_02053290(&t);
}
