#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t data_020b8e44;
extern Pair data_ov011_021cad98;
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0203bda0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02032640(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_ov011_021c2e64(void *self);
extern void func_ov009_0219a358(uint32_t a);
extern void func_ov011_021bff9c(void *self);
extern void func_ov009_0219a330(uint32_t a);

void func_ov011_021c1e1c(uint8_t *p)
{
    int32_t s = *(int32_t *)(p + 0x2bc);
    if (s == 0xb) {
        uint32_t r;
        uint32_t x;
        Pair d = data_ov011_021cad98;
        p[0x27a] = 1;
        p[0x340] = 1;
        r = func_020159c8(data_020b8e44, 0xb2);
        x = func_0203bda0(d.a, d.b, r, 4, 0, 0);
        *(uint32_t *)(p + 0x174) = x;
        func_02032640(x, 1);
        func_02056bc0(p + 0x48, *(uint32_t *)(p + 0x174));
        func_ov011_021c2e64(p);
        func_ov009_0219a358(*(uint32_t *)(p + (p[0x279] << 2) + 0xd8));
        func_ov011_021bff9c(p);
    } else if (s == -1) {
        func_ov009_0219a330(*(uint32_t *)(p + (p[0x279] << 2) + 0xd8));
    }
}
