#include "ffc/types.h"

extern uint32_t func_ov007_021bf468(void);
extern uint32_t func_ov007_021bf3c0(void);
extern uint32_t func_ov007_021bf2d8(void);
extern void func_ov000_02158f6c(uint32_t *a, uint32_t *b);
extern void func_ov000_02158fec(void);
typedef struct { uint32_t a, b; } P;
extern P data_020b25a0;
extern P data_020b25a8;

typedef struct {
    uint8_t pad0[0xc];
    uint32_t status;
    uint8_t pad1[0x7c];
    uint32_t r8c;
    P r90;
} Obj;

void func_02073ccc(Obj *self)
{
    uint32_t other, v, tmp;
    switch (func_ov007_021bf468()) {
    default:
        tmp = func_ov007_021bf3c0();
        self->r8c = tmp;
        if (tmp != 0) return;
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    case 2:
        tmp = func_ov007_021bf2d8();
        self->r8c = tmp;
        if (tmp != 0) return;
        self->r90 = data_020b25a0;
        return;
    case 3:
        self->r90 = data_020b25a8;
        return;
    case 4:
        func_ov000_02158f6c(&other, &v);
        switch (v) {
        case 0: case 1: case 2:
            func_ov000_02158fec();
            return;
        default: break;
        }
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    case 0:
        self->status = (self->status & 0xffffff00u) | 2u;
        return;
    }
}
