#include "ffc/types.h"

typedef struct H{uint8_t b[6];}H;
extern H data_ov001_02191b58;
typedef struct M{H h;uint8_t c6,c7;uint32_t w8;uint8_t c12;uint8_t pad[3];uint32_t w16;uint8_t rest[0x38];}M;
extern uint32_t data_ov001_0219531c;
extern uint8_t data_ov001_02191c4c[];
extern uint32_t data_ov001_021952f0[];

extern uint32_t func_ov001_02182928(void);
extern uint32_t func_ov000_0214f148(uint32_t);
extern void func_ov000_021652a8(int, int, int, void *, uint32_t, uint32_t);
extern uint32_t func_ov001_02182a68(uint32_t, uint32_t, uint32_t, void *, uint32_t);
extern uint32_t func_ov000_0216591c(void);

typedef struct Obj {
    uint32_t f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28, f2c, f30, f34, f38;
} Obj;

void func_ov001_02182c70(Obj *a)
{
    M m;
    uint32_t v, t, k, z;
    H *hp = (H *)&m;
    *hp = data_ov001_02191b58;
    m.c6 = 4;
    m.c7 = 0xf;
    v = a->f4;
    m.w8 = ((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000);
    m.c12 = (uint8_t)a->f8;
    m.w16 = func_ov001_02182928();
    t = func_ov000_0214f148(data_ov001_0219531c);
    k = 0x6cfd;
    z = 0;
    func_ov000_021652a8(7, 0, 8, data_ov001_02191c4c, t, k);
    func_ov001_02182a68(a->f18, data_ov001_021952f0[11], k, hp, 0x12);
    if (a->f1c == 1) {
        t = func_ov000_0216591c();
        a->f38 = t + 0x2710;
        a->f34 = 0xc;
        return;
    }
    t = func_ov000_0216591c();
    a->f38 = t + (0x7d << 2);
    a->f34 = 0xa;
    a->f1c = z;
}
