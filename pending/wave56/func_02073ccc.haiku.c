#include "ffc/types.h"

extern uint32_t func_ov007_021bf468(void);
extern uint32_t func_ov007_021bf3c0(void);
extern uint32_t func_ov007_021bf2d8(void);
extern void func_ov000_02158f6c(uint32_t *a, uint32_t *b);
extern void func_ov000_02158fec(void);
extern uint32_t data_020b25a0[2];
extern uint32_t data_020b25a8[2];

typedef struct {
    uint8_t pad0[0xc];
    uint32_t status;
    uint8_t pad1[0x7c];
    uint32_t r8c;
    uint32_t r90;
    uint32_t r94;
} Obj;

void func_02073ccc(Obj *self)
{
    uint32_t sel;
    uint32_t tmp;
    uint32_t other;
    uint32_t v;
    uint32_t x;
    uint32_t y;

    sel = func_ov007_021bf468();
    switch (sel) {
    default:
        tmp = func_ov007_021bf3c0();
        self->r8c = tmp;
        if (tmp != 0) {
            return;
        }
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    case 2:
        tmp = func_ov007_021bf2d8();
        self->r8c = tmp;
        if (tmp != 0) {
            return;
        }
        x = data_020b25a0[0];
        y = data_020b25a0[1];
        self->r90 = y;
        self->r94 = x;
        return;
    case 3:
        x = data_020b25a8[0];
        y = data_020b25a8[1];
        self->r90 = x;
        self->r94 = y;
        return;
    case 4:
        func_ov000_02158f6c(&other, &v);
        if (v == 0 || v == 1 || v == 2) {
            func_ov000_02158fec();
            return;
        }
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    case 0:
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    }
}
