#include "ffc/types.h"

typedef struct Q4 { uint32_t w[4]; } Q4;

#define VF(o, idx) (((void **)(*(void **)(o)))[idx])
#define OBJ(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define U32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define U8(p, off) (*(uint8_t *)((uint8_t *)(p) + (off)))

extern void func_020628ac(void *o, Q4 q);
extern void func_02056c4c(void *o);
extern uint32_t func_ov005_02195e2c(void *o, Q4 a, Q4 b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov008_021a2388(void *a, uint8_t idx);
extern uint32_t func_ov008_021a27ec(void *a, uint8_t idx);
extern void func_ov005_021963cc(void *o, void *entry, int flag);
extern void func_ov005_02196f60(void *o, uint32_t v);
extern void func_ov005_021964c4(void *o);

void func_ov008_021a1d1c(void *a, void *b)
{
    Q4 s1, s2, s3;
    void *o;
    uint32_t i;
    uint8_t r4;

    if (b == 0) {
        o = OBJ(a, 0x114);
        ((void (*)(void *))VF(o, 11))(o);
        return;
    }
    o = OBJ(a, 0x114);
    if (((uint32_t (*)(void *))VF(o, 12))(o) != 0) {
        o = OBJ(a, 0x114);
        ((void (*)(void *))VF(o, 10))(o);
        s1 = ((Q4 (*)(void *))VF(b, 4))(b);
        func_020628ac(OBJ(a, 0x114), s1);
    } else {
        func_02056c4c(OBJ(a, 0x110));
        o = OBJ(a, 0x114);
        s2 = ((Q4 (*)(void *))VF(o, 7))(o);
        s3 = ((Q4 (*)(void *))VF(b, 4))(b);
        {
            uint32_t r = func_ov005_02195e2c(OBJ(a, 0x114), s2, s3, 10, -5);
            func_02056bc0(OBJ(a, 0x110), (void *)r);
        }
    }

    for (i = 0; i < 8; i++) {
        if ((uint32_t)b == U32(a, 0xdc + i * 4)) {
            int flag = 0;
            U8(a, 0x13e) = (uint8_t)i;
            r4 = (uint8_t)((U8(a, 0x131) << 3) + U8(a, 0x13e));
            if (r4 >= U32(a, 0x108)) {
                continue;
            }
            if (func_ov008_021a2388(a, U8(a, 0x13d)) == 0) {
                uint32_t sum = func_ov008_021a27ec(a, r4) + U32(a, 0x138);
                if (sum > U32(a, 0x134)) {
                    flag = 1;
                }
            }
            func_ov005_021963cc(OBJ(a, 0x118),
                                (uint8_t *)OBJ(a, 0x104) + r4 * 24, flag);
            {
                uint32_t t = func_ov008_021a27ec(a, r4);
                func_ov005_02196f60(OBJ(a, 0x11c), t);
            }
            U8(a, 0x13d) = r4;
            return;
        }
    }
    func_ov005_021964c4(OBJ(a, 0x118));
    func_ov005_02196f60(OBJ(a, 0x11c), 0);
}
