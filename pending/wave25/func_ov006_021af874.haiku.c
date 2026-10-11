#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x12];
    uint16_t f12;
    uint8_t pad1[5];
    uint8_t f19;
    uint8_t f1a;
    uint8_t f1b;
    uint8_t pad2;
    uint8_t f1d;
} Obj;

typedef struct {
    uint16_t x;
    uint16_t y;
} Pos;

extern void func_ov006_021b4ef0(Pos *p);
extern void func_ov006_021af9bc(int x);
extern Obj *data_ov006_021bc7dc;
extern uint8_t data_ov006_021b890b[];

void func_ov006_021af874(void) {
    Pos p;
    Obj *o;
    uint32_t v;
    int d;
    int arg;

    func_ov006_021b4ef0(&p);
    o = data_ov006_021bc7dc;
    v = data_ov006_021b890b[o->f1b];
    d = p.y - o->f12 - (v >> 1);
    if (d < 0) {
        arg = 0;
    } else {
        int m = o->f19 - v;
        arg = (d < m) ? d : m;
    }
    func_ov006_021af9bc(arg);
    data_ov006_021bc7dc->f1d = 3;
}
