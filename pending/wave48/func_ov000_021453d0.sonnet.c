#include "ffc/types.h"

extern void func_02004eb0(void *);
extern uint64_t func_020882cc(void);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_021503d0(void *);
extern void func_02086dcc(void *a, void *b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_020870a0(void *object);
extern void func_020883e4(void *);
extern uint8_t data_ov000_0216bc60[];
extern uint8_t data_ov000_0216bce0[];
extern void func_ov000_021453c8(void);
extern void func_ov000_021453cc(void);
extern uint8_t data_ov000_0216bcc8[];
extern uint32_t data_ov000_021697c0;
extern uint8_t data_ov000_0216c098[];
extern void func_ov000_021476bc(void);
extern uint8_t data_ov000_0216de20[];
extern uint8_t data_ov000_0216bfd8[];
extern void func_ov000_02147f70(void);
extern uint8_t data_ov000_0216d620[];
extern uint8_t data_ov000_0216bcf0[];
extern void func_ov000_021482bc(void);
extern uint8_t data_ov000_0216bf18[];
extern uint8_t data_ov000_0216ce20[];

void func_ov000_021453d0(void *param_0)
{
    uint8_t *p = (uint8_t *)param_0;
    uint8_t *g = data_ov000_0216bc60;
    uint32_t *dw = (uint32_t *)data_ov000_0216bce0;
    uint64_t seed;
    uint64_t r;
    uint32_t w;

    func_02004eb0((void *)0x2005068);

    {
        uint32_t lo = *(uint32_t *)(p + 0x14);
        uint32_t hi = *(uint32_t *)(p + 0x18);
        uint32_t z0 = 0;
        uint32_t z1 = 0;
        if ((lo ^ z0) | (hi ^ z1)) {
            seed = ((uint64_t)hi << 32) | lo;
        } else {
            seed = func_020882cc();
        }
    }
    *(uint32_t *)(g + 0x78) = (uint32_t)seed;
    *(uint32_t *)(g + 0x7c) = (uint32_t)(seed >> 32);

    dw[0] = 0x6c078965;
    dw[1] = 0x5d588b65;
    dw[2] = 0x269ec3;
    dw[3] = 0;

    r = func_0209a71c(*(uint64_t *)dw, *(uint64_t *)(g + 0x78));
    r += *(uint64_t *)(dw + 2);
    *(uint32_t *)(g + 0x78) = (uint32_t)r;
    *(uint32_t *)(g + 0x7c) = (uint32_t)(r >> 32);

    r = func_0209a71c((uint64_t)(uint32_t)(r >> 32), 0xf88ULL);
    *(uint16_t *)(g + 6) = (uint16_t)((uint32_t)(r >> 32) + 0x400);

    func_ov000_021503d0(data_ov000_0216bcc8);
    g[1] = 0;

    if (*(uint32_t *)(p + 4) == 0 || *(uint32_t *)(p + 8) == 0) {
        *(void **)(g + 0x14) = (void *)func_ov000_021453c8;
    } else {
        *(uint32_t *)(g + 0x14) = *(uint32_t *)(p + 4);
        *(uint32_t *)(g + 0x44) = *(uint32_t *)(p + 8);
        goto skip;
    }
    *(void **)(g + 0x44) = (void *)func_ov000_021453c8;
skip:
    *(uint32_t *)(g + 0xc) = *(uint32_t *)(p + 0);

    w = *(uint32_t *)(p + 0x24);
    *(uint16_t *)(g + 4) = (uint16_t)(w ? w : 0x5b4);

    *(uint32_t *)(g + 0x38) = *(uint32_t *)(p + 0x28);
    *(uint32_t *)(g + 0x24) = *(uint32_t *)(p + 0x2c);

    w = *(uint32_t *)(p + 0xc);
    *(void **)(g + 0x28) = w ? (void *)w : (void *)func_ov000_021453c8;

    w = *(uint32_t *)(p + 0x10);
    *(void **)(g + 0x18) = w ? (void *)w : (void *)func_ov000_021453cc;

    *(uint32_t *)(g + 0x20) = *(uint32_t *)(p + 0x1c);
    *(uint32_t *)(g + 0x5c) = *(uint32_t *)(p + 0x20);
    *(uint32_t *)(g + 0x64) = 0;
    *(uint32_t *)(g + 0x60) = 0;

    func_02086dcc(data_ov000_0216c098, (void *)func_ov000_021476bc, 0, data_ov000_0216de20,
                  0x800, data_ov000_021697c0);
    func_02086dcc(data_ov000_0216bfd8, (void *)func_ov000_02147f70, 0, data_ov000_0216d620,
                  0x800, data_ov000_021697c0);
    func_020870a0(data_ov000_0216c098);
    func_020870a0(data_ov000_0216bfd8);
    func_020883e4(data_ov000_0216bcf0);
    func_02086dcc(data_ov000_0216bf18, (void *)func_ov000_021482bc, 0, data_ov000_0216ce20,
                  0x800, data_ov000_021697c0 - 1);
}
