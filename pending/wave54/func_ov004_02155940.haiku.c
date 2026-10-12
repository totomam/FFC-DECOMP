#include "ffc/types.h"

typedef struct { int16_t a; int16_t b; } Pair16;

extern void func_02021b68(uint32_t a, uint32_t b, uint32_t c);
extern void *func_0203bc70(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205e1a4(void *o);
extern void func_0205cbfc(void *o, uint32_t a, uint32_t b);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void *func_0203b720(void);
extern void *func_020629cc(void *o, int32_t a, int32_t b);
extern void *func_0203b708(uint32_t a);
extern uint32_t func_ov004_02155a98(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205cd1c(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern void *func_0203b750(void);
extern uint8_t data_ov004_021596c4[];
extern Pair16 data_020a1bd0[];
extern uint32_t data_ov004_02159d50[];
extern uint32_t data_ov004_02159d58[];

void func_ov004_02155940(uint8_t *self)
{
    int32_t big[9];
    int32_t *q;
    void *obj;
    void *r7;
    void *r6;
    void *r4;
    uint32_t i;
    uint32_t t;
    void **vt;

    func_02021b68(*(uint32_t *)(self + 0xf4), 6, 1);
    if (*(void **)(self + 0xa0) != 0) {
        **(uint32_t **)(self + 0xa0) = 0;
        (*(uint32_t **)(self + 0xa0))[3] = 0;
    }
    *(void **)(self + 0x22c) = func_0203bc70(*(void **)(data_ov004_021596c4 + 0x58), 1, 0, 0);
    func_02056bc0(self + 0x48, *(void **)(self + 0x22c));
    obj = *(void **)(self + 0x22c);
    vt = *(void ***)obj;
    ((void (*)(void *))vt[10])(obj);
    func_0205cbfc(func_0205e1a4(*(void **)(self + 0x22c)), 0x33, 0x2e);
    r6 = self + 0x14;
    q = &big[7];
    for (i = 0; i <= 0x78; i++) {
        t = func_0209a978(i << 16, 0x28);
        q[0] = func_020817c8(data_020a1bd0[(int32_t)(uint16_t)t >> 4].a, 0x1e000) >> 12;
        q[1] = 0xc0 - func_0209a978(0xc0 * i, 0x78);
        r7 = func_0203b720();
        obj = *(void **)(self + 0x22c);
        r4 = func_020629cc(obj, q[0], q[1]);
        func_02056bc0(r6, r4);
        func_02056bc0(r6, r7);
    }
    r6 = func_0203b708(0x78);
    r7 = (void *)func_ov004_02155a98(*(uint32_t *)(self + 0xf4), data_ov004_02159d50[0], data_ov004_02159d50[1], 0x1d);
    big[0] = (int32_t)func_0205cd1c(func_0205e1a4(*(void **)(self + 0x22c)), 0, 0x800, 0x14, 2);
    big[1] = (int32_t)func_02021610(0x84, 0);
    r4 = self + 0x14;
    func_02056bc0(r4, func_0203b750());
    func_02056bc0(r4, (void *)big[1]);
    func_02056bc0(r4, (void *)big[0]);
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);
    *(uint32_t *)(self + 0x94) = data_ov004_02159d58[0];
    *(uint32_t *)(self + 0x98) = data_ov004_02159d58[1];
}
