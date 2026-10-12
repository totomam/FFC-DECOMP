#include "ffc/types.h"

typedef struct Obj {
    uint32_t w[6];
    uint8_t pad18[3];
    uint8_t f1b;
    uint8_t f1c;
    uint8_t pad1d;
    uint8_t f1e;
} Obj;

typedef struct Six {
    uint8_t b[6];
} Six;

typedef struct Buf {
    uint32_t w;
    uint8_t b[6];
} Buf;

extern uint8_t data_ov006_021b8aa8[];
extern uint32_t data_ov006_021bc738;
extern Obj *data_ov006_021bc7f8;
extern uint8_t data_ov006_021b89f0[];
extern uint8_t data_ov006_021b89f6[];
extern uint8_t data_ov006_021b8a18[];
extern uint16_t data_ov006_021b8a38[];
extern uint16_t data_ov006_021b8a36[];
extern uint8_t data_ov006_021b89fc[];

extern uint32_t func_ov006_021a6624(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern Obj *func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_02081b5c(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021b3e88(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021b3cec(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021b3d84(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov006_021b4248(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *e, uint32_t f);
extern uint32_t func_ov006_021b3aa0(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a3cc0(uint32_t a);
extern void func_ov006_021b45b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov006_021b4630(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_ov006_021b4860(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov006_021b4784(uint32_t a, uint32_t b, void *c);
extern void func_ov006_021b1600(uint32_t a);
extern uint32_t func_ov006_021b570c(uint32_t a, void (*b)(void), uint32_t c, uint32_t d);
extern void func_ov006_021b1444(void);
extern void func_ov006_021b1480(void);

void func_ov006_021b11fc(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    Buf buf;
    int k;
    int m;
    int cnt;
    uint32_t x;
    uint32_t r6624;
    uint32_t v;
    uint32_t a;
    uint32_t b;
    uint8_t *arr;
    uint32_t c;

    *(Six *)buf.b = *(Six *)data_ov006_021b8aa8;

    r6624 = func_ov006_021a6624(data_ov006_021bc738, p0, p3, p4);

    k = 4;
    data_ov006_021bc7f8 = func_ov006_021b49e4(0x20, k);
    data_ov006_021bc7f8->f1c = p1;
    data_ov006_021bc7f8->f1b = k - 6;
    data_ov006_021bc7f8->f1e = p2;

    k = 0;
    x = 0x1f;
    func_02081b5c(0x4000050, 0x1f);
    data_ov006_021bc7f8->w[0] = func_ov006_021b3e88(0, data_ov006_021b89f0[p1], 0);
    x += 0xe1;
    m = k - 1;
    func_ov006_021b3cec(data_ov006_021bc7f8->w[0], m, x, 0);
    func_ov006_021b3d84(data_ov006_021bc7f8->w[0], m, 0);

    if (data_ov006_021b89f6[p1] > 0) {
        arr = data_ov006_021b8a18 + p1 * 2;
        cnt = data_ov006_021b89f6[p1];
        for (k = 0; k < cnt; k++) {
            data_ov006_021bc7f8->w[2 + k] = func_ov006_021b3e88(0, arr[k], 0);
            func_ov006_021b3cec(data_ov006_021bc7f8->w[2 + k], m, x, 0);
            func_ov006_021b3d84(data_ov006_021bc7f8->w[2 + k], m, 0);
        }
    }

    data_ov006_021bc7f8->w[4] = func_ov006_021b4248(0, 0x20, 0xc, 1, &buf, 0);
    data_ov006_021bc7f8->w[1] = func_ov006_021b3aa0(0, buf.w);

    v = func_ov006_021a3cc0(p1);
    a = data_ov006_021b8a38[p1 * 2];
    b = data_ov006_021b8a36[p1 * 2];
    func_ov006_021b45b0(data_ov006_021bc7f8->w[4], 0, 0, b, a, 2, v, r6624);
    func_ov006_021b4630(data_ov006_021bc7f8->w[4], 0x100, 0, data_ov006_021bc7f8->w[1], 0);
    func_ov006_021b4860(0, 0, 0x1f, 0);
    c = data_ov006_021bc7f8->f1c;
    func_ov006_021b4860(0, 1, 0x1f, buf.b[c]);
    func_ov006_021b4860(0, 3, 0x1f, 1);
    func_ov006_021b4784(0, 1, data_ov006_021b89fc);

    c = 0xc0;
    func_ov006_021b1600(0xc0);
    {
        uint32_t *reg = (uint32_t *)0x4000000;
        *reg = (*reg & 0xffff1fff) | (c << 7);
    }

    if (p2 != 0) {
        data_ov006_021bc7f8->w[5] = func_ov006_021b570c(1, func_ov006_021b1444, 0, 0x78);
    } else {
        data_ov006_021bc7f8->w[5] = func_ov006_021b570c(1, func_ov006_021b1480, 0, 0x78);
    }
}
