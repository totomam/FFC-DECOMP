#include "ffc/types.h"

extern void *func_020424e0(void *p);
extern void *func_ov003_021464f4(void *p, uint32_t id);
extern uint32_t func_ov003_021481c0(uint32_t x);
extern void func_ov003_021581f4(void *a, void *b, void *c);
extern void func_ov003_0215ac48(void *p);
extern uint8_t data_ov003_0217b23c[];
extern uint8_t data_ov003_0217b244[];

typedef struct {
    uint8_t pad[0x14];
    void *f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} S;

void func_ov003_021695d4(S *s)
{
    void *p4;
    void *p6;
    void *p5;

    p4 = func_ov003_021464f4(func_020424e0(s->f14), s->f18);
    if (p4 == 0) {
        return;
    }
    s->f1c = func_ov003_021481c0(s->f1c);
    p6 = func_ov003_021464f4(func_020424e0(s->f14), s->f1c);
    if (p6 == 0) {
        return;
    }
    func_ov003_021581f4(p6, data_ov003_0217b23c, p4);
    func_ov003_0215ac48(p6);
    s->f20 = func_ov003_021481c0(s->f20);
    p5 = func_ov003_021464f4(func_020424e0(s->f14), s->f20);
    if (p5 == 0) {
        return;
    }
    func_ov003_021581f4(p5, data_ov003_0217b244, p4);
    func_ov003_0215ac48(p5);
}
