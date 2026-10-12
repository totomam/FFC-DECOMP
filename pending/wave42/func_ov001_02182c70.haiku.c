#include "ffc/types.h"

extern uint8_t data_ov001_02191b58[];
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
    uint8_t buf[0x4c];
    uint32_t v;
    uint32_t t;
    uint32_t k;
    uint32_t z;
    uint8_t *p;

    p = buf;
    p[0] = data_ov001_02191b58[0];
    p[1] = data_ov001_02191b58[1];
    p[2] = data_ov001_02191b58[2];
    p[3] = data_ov001_02191b58[3];
    p[4] = data_ov001_02191b58[4];
    p[5] = data_ov001_02191b58[5];
    p[6] = 4;
    p[7] = 0xf;

    v = a->f4;
    *(uint32_t *)&p[8] = (v << 24) | ((v << 8) & 0xff0000) | ((v >> 8) & 0xff00) | (v >> 24);
    p[12] = (uint8_t)a->f8;

    *(uint32_t *)&p[16] = func_ov001_02182928();
    t = func_ov000_0214f148(data_ov001_0219531c);
    k = 0x6cfd;
    z = 0;
    func_ov000_021652a8(7, 0, 8, data_ov001_02191c4c, t, k);

    func_ov001_02182a68(a->f18, data_ov001_021952f0[11], k, buf, 0x12);

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
