#include "ffc/types.h"

extern uint32_t data_0213e098;
extern uint32_t func_02055054(uint32_t x);
extern uint32_t func_0203c250(void);
extern void func_02060e88(uint32_t a, uint32_t b);
extern void func_02060ea4(uint32_t a, uint32_t b);
extern uint32_t func_02056aec(void *obj);
extern uint32_t func_0203c2d0(void);
extern uint32_t func_02060610(uint32_t x);
extern uint32_t func_0203b75c(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern int32_t func_0209a978(int32_t a, int32_t b);
extern int32_t func_020817c8(int32_t first, int32_t second);
extern void func_0206b54c(uint32_t obj, int32_t a, int32_t b, int32_t c);
extern int16_t data_020a1bd0[][2];
extern int32_t data_ov003_0217a530;

void func_ov003_02163af0(uint32_t *self)
{
    uint32_t t = func_02055054(data_0213e098);
    uint32_t v = self[0x24] + t;
    self[0x24] = v;
    if (v > 0x5a) {
        uint32_t r4, r6, r1;
        func_02060e88(func_0203c250(), 1);
        func_02060ea4(func_0203c250(), 0x10);
        r4 = func_02056aec(self);
        r6 = func_02060610(func_0203c2d0());
        r1 = func_0203b75c(1);
        self = (uint32_t *)((char *)self + 0x14);
        func_02056bc0(self, (void *)r1);
        func_02056bc0(self, (void *)r6);
        func_02056bc0(self, (void *)r4);
    } else {
        int32_t a;
        int32_t k = 0xa0;
        uint32_t idx;
        int32_t s;
        int32_t args[2];
        int32_t *q;
        a = k - func_0209a978((int32_t)(v * 0xa0), 0x5a);
        idx = (uint16_t)func_0209a978((int32_t)((self[0x24] * 3) << 16), 0x5a);
        idx >>= 4;
        s = func_020817c8(0x1e000, data_020a1bd0[idx][0]);
        a = a - (s >> 12);
        q = (data_ov003_0217a530 < a) ? &a : &data_ov003_0217a530;
        a = *q;
        args[0] = 0x80;
        args[1] = 0x60;
        func_0206b54c(self[0x23], args[0], args[1], a);
    }
}
