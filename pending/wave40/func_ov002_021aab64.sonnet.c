#include "ffc/types.h"

extern void func_02015e8c(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov002_021d3310(const void *object);
extern uint32_t func_ov002_021d3314(const void *object);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_020b8e44;

typedef struct {
    uint32_t a;
    void *b;
    uint32_t c;
    uint8_t d;
} Loc;

uint32_t func_ov002_021aab64(uint8_t *self)
{
    Loc loc;
    uint32_t off = 0x4e;
    uint8_t *m;
    uint8_t k;
    int32_t r6;
    int32_t r5;

    off = off << 2;
    if (((uint8_t *)*(void **)(self + off))[0x19] != 0x11) {
        return 0;
    }
    func_02015e8c(&loc, data_020b8e44);
    m = (uint8_t *)func_02052d90(loc.b, loc.c);
    k = m[7];
    r6 = (int32_t)func_ov002_021d3310(self + 4 + off);
    r5 = 1;
    if (r6 <= (int32_t)func_0209a76c(func_ov002_021d3314(self + 4 + off) * k, 100)) {
        r5 = 0;
    }
    if (loc.b != 0) {
        if (loc.d != 0) {
            func_02052d3c(loc.b, loc.c);
        }
        func_02052c04(loc.b);
    }
    func_02053290(&loc);
    return r5 == 0;
}
