#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7fc;
extern int func_ov006_021b1f6c(int id);
extern uint32_t func_02088978(void);
extern uint32_t func_0208898c(uint32_t s);
extern int func_ov006_021b1fb0(int id);
extern void func_ov006_021b1d4c(uint32_t v);
extern void func_ov006_021b1ad8(int id);
extern void func_ov006_021b1a78(int id);
extern int func_ov006_02199660(int id);
extern void func_02084ca4(int r, uint8_t *p, int n);
extern void func_ov006_021b1b60(int id);
extern void func_ov006_021b1f60(int v);
extern void func_02088f30(void);

void func_ov006_021b1d6c(int id, uint32_t cmd, uint8_t *p)
{
    uint8_t *base;
    uint32_t s, s2, v;
    uint16_t mask;
    int idx, r;
    uint16_t t;
    uint8_t *e;

    switch (cmd) {
    case 2:
        if (func_ov006_021b1f6c(id) != 2) {
            return;
        }
        {
            base = data_ov006_021bc7fc;
            s = func_02088978();
            *(uint16_t *)(base + 2) |= (uint16_t)(1u << id);
            func_0208898c(s);
            idx = (id - 1) * 30;
            e = data_ov006_021bc7fc + 0x24 + idx;
            e[0] = p[0xa];
            e[1] = p[0xb];
            e[2] = p[0xc];
            e[3] = p[0xd];
            e[4] = p[0xe];
            e[5] = p[0xf];
            base = data_ov006_021bc7fc;
            *(uint16_t *)(base + idx + 0x2a) = (uint16_t)id;
        }
        return;
    case 3:
        if (func_ov006_021b1fb0(id) == 6) {
            return;
        }
        mask = (uint16_t)~(1u << id);
        s = func_02088978();
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 2) &= mask;
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 4) &= mask;
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 6) &= mask;
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 8) &= mask;
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 0xa) &= mask;
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 0xc) &= mask;
        s2 = func_0208898c(s);
        func_ov006_021b1d4c(s2);
        return;
    case 10:
        if (func_ov006_021b1f6c(id) != 2) {
            func_ov006_021b1ad8(id);
            return;
        }
        {
            base = data_ov006_021bc7fc;
            *(uint16_t *)(base + 4) |= (uint16_t)(1u << id);
            func_ov006_021b1a78(id);
            r = func_ov006_02199660(id);
            if (r == 0) {
                return;
            }
            idx = (id - 1) * 30;
            base = data_ov006_021bc7fc;
            func_02084ca4(r, base + 0xe + idx, 0x16);
            return;
        }
    case 14:
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 4) &= (uint16_t)~(1u << id);
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 6) |= (uint16_t)(1u << id);
        if (func_ov006_021b1f6c(id) != 3) {
            return;
        }
        func_ov006_021b1b60(id);
        return;
    case 7:
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 8) &= (uint16_t)~(1u << id);
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 0xa) |= (uint16_t)(1u << id);
        return;
    case 9:
        base = data_ov006_021bc7fc;
        *(uint16_t *)(base + 0xa) &= (uint16_t)~(1u << id);
        base = data_ov006_021bc7fc;
        v = *(uint16_t *)(base + 0xc) | (uint16_t)(1u << id);
        *(uint16_t *)(base + 0xc) = (uint16_t)v;
        func_ov006_021b1d4c(v);
        return;
    case 12:
        r = func_ov006_021b1f6c(id);
        func_ov006_021b1f60(r == 4 ? 5 : 0);
        base = data_ov006_021bc7fc;
        if (*(uint32_t *)(base + 0x1b144) != 0) {
            *(uint32_t *)(base + 0x1b144) = 0;
        }
        base = data_ov006_021bc7fc;
        if (*(uint32_t *)(base + 0x1b140) != 0) {
            *(uint32_t *)(base + 0x1b140) = 0;
        }
        return;
    case 13:
        t = *(uint16_t *)p;
        if (t == 1 || t == 2 || t == 9) {
            func_ov006_021b1f60(7);
        }
        return;
    case 1:
    case 4:
    case 5:
    case 6:
    case 8:
    case 11:
        return;
    default:
        func_02088f30();
        return;
    }
}
