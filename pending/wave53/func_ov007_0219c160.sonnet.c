#include "ffc/types.h"

extern uint32_t func_02056aec(void *self);
extern uint32_t func_0203c0bc(uint32_t id);
extern uint32_t func_0203c0d0(uint32_t id);
extern uint32_t func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_0203b708(uint32_t v);
typedef struct { uint32_t a, b; } P2;
extern uint32_t func_ov007_0219c2c8(uint32_t a, P2 s);
extern uint32_t func_0203c094(uint32_t size);
extern uint32_t func_0203c0a8(uint32_t size);
extern P2 data_ov007_021c2e8c;
extern P2 data_ov007_021c2e94;

void func_ov007_0219c160(uint8_t *self)
{
    uint32_t *q; uint8_t *p;
        uint32_t a, b, v, t;
    uint32_t s0, s4, s8, s12, r4, r6, r7;

    if (*(uint32_t *)(self + 0x88) < 0x11b) {
        q = *(uint32_t **)(self + 0x80);
        a = q[1];
        b = q[2];
        v = a & (b ^ a);
        if (0x1c0b & v) {
            self[0x8c] = 1;
        }
        if (self[0x8c] != 0) {
            s0 = func_02056aec(self);
            r6 = func_0203c0bc(0xf);
            r4 = func_0203c0d0(0xf);
            r7 = func_0203b6fc();
            func_02056bc0((void *)r7, (void *)r4);
            func_02056bc0((void *)r7, (void *)r6);

            t = 0xa0 - *(uint32_t *)(self + 0x88);
            if (t < 1) {
                t = 1;
            }
            s4 = func_0203b708(t);
            s8 = func_ov007_0219c2c8(*(uint32_t *)(self + 0x84), data_ov007_021c2e8c);
            s12 = func_0203c094(0x28);
            r4 = func_0203c0a8(0x28);
            r6 = func_0203b6fc();
            func_02056bc0((void *)r6, (void *)r4);
            func_02056bc0((void *)r6, (void *)s12);

            p = self + 0x14;
            func_02056bc0(p, (void *)r6);
            func_02056bc0(p, (void *)s8);
            func_02056bc0(p, (void *)s4);
            func_02056bc0(p, (void *)r7);
            func_02056bc0(p, (void *)s0);
        }
    } else {
        *(P2 *)(self + 0x90) = data_ov007_021c2e94;
    }
}
