#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;

extern uint8_t data_ov009_021bd120;
extern uint32_t func_02056aec(void);
extern uint32_t func_02056b34(uint32_t x);
extern uint32_t func_ov009_021a1b34(void *p, P q);
extern uint32_t func_ov009_021a1b74(uint32_t x, P p);
extern uint32_t func_ov009_021a1bb4(void *p, P q, uint32_t c);
extern uint32_t func_0203c12c(uint32_t a, uint32_t b);
extern uint32_t func_0203c114(uint32_t a, uint32_t b);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern P data_ov009_021b064c;
extern P data_ov009_021b0654;
extern P data_ov009_021b065c;
extern uint32_t data_ov009_021b0664[2];
extern void *data_0213df20;
extern uint32_t data_0209de08;
extern uint32_t data_0209de0c;

void func_ov009_021a19f8(void *self)
{
    uint32_t a0, a1, a2, a3, a4;
    uint32_t r7, r4, r6, b;
    int idx;

    if (data_ov009_021bd120 != 0) {
        goto slow;
    }
    idx = 0x210;
    {
        uint32_t *o = *(uint32_t **)((uint8_t *)self + idx);
        uint32_t c = o[1] & (o[2] ^ o[1]);
        if ((c & 0x1003) == 0) {
            goto slow;
        }
    }
    a0 = func_02056aec();
    a1 = func_02056b34(*(uint32_t *)((uint8_t *)self + idx + 8));
    a2 = func_ov009_021a1b34(self, data_ov009_021b064c);
    a3 = func_ov009_021a1b74(*(uint32_t *)((uint8_t *)self + idx - 0x5c),
                             data_ov009_021b0654);
    idx -= 0x60;
    r7 = func_ov009_021a1bb4(*(void **)((uint8_t *)data_0213df20 + 0x14),
                             data_ov009_021b065c,
                             *(uint32_t *)((uint8_t *)self + idx));
    r4 = data_0209de08;
    r6 = data_0209de0c;
    a4 = func_0203c12c(r6, r4);
    r4 = func_0203c114(r6, r4);
    b = func_0203b6fc();
    func_02056bc0((void *)b, (void *)r4);
    func_02056bc0((void *)b, (void *)a4);
    self = (uint8_t *)self + 0x14;
    func_02056bc0(self, (void *)b);
    func_02056bc0(self, (void *)r7);
    func_02056bc0(self, (void *)a3);
    func_02056bc0(self, (void *)a2);
    func_02056bc0(self, (void *)a1);
    func_02056bc0(self, (void *)a0);
    return;

slow:
    {
        uint8_t *q = *(uint8_t **)((uint8_t *)self + 0x218);
        uint8_t flag = q[0x12];
        int t = 1;
        if (flag != 0) {
            func_0208763c(q + 0x1c);
        }
        if (*(uint32_t *)(q + 0x14) != 0) {
            t = 0;
        }
        if (flag != 0) {
            func_02087678(q + 0x1c);
        }
        if (t != 0) {
            P v = *(P *)data_ov009_021b0664;
            *(P *)((uint8_t *)self + 0x80) = v;
        }
    }
}
