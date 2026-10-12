#include "ffc/types.h"

extern uint32_t func_ov000_02152ae4(uint32_t x);
extern uint8_t data_ov000_0216e26c[];

typedef struct {
    uint32_t pad0;
    void (*fn)(uint32_t, uint32_t, uint32_t);
    uint8_t flags;
} Obj;

void func_ov000_02152a34(void)
{
    Obj *p = (Obj *)func_ov000_02152ae4(1);
    uint32_t v;

    if (p == 0) {
        return;
    }
    if (p->flags & 0x10) {
        v = func_ov000_02152ae4(0x10);
        p->flags &= 0xef;
        p->fn(1, v, 0x14d8);
    }
    if (p->flags & 0x08) {
        v = func_ov000_02152ae4(0x8);
        p->flags &= 0xf7;
        p->fn(1, v, 0xc);
    }
    if (p->flags & 0x04) {
        v = func_ov000_02152ae4(0x4);
        p->flags &= 0xfb;
        p->fn(1, v, 0x58);
    }
    if (p->flags & 0x02) {
        v = func_ov000_02152ae4(0x2);
        p->flags &= 0xfd;
        p->fn(1, v, 0x12 << 10);
    }
    if (p->flags & 0x01) {
        p->flags &= 0xfe;
        p->fn(1, (uint32_t)p, 0xcc);
        *(uint32_t *)(data_ov000_0216e26c + 0xc) = 0;
    }
}
