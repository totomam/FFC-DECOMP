#include "ffc/types.h"

extern uint8_t *data_ov006_021ba160;
extern void func_ov006_0219a314(uint32_t idx);
extern int func_ov006_0219ac6c(void *a, void *b, uint16_t c, void *d);
extern uint32_t func_ov006_0219cd40(void *p);
extern int func_ov006_0219ca14(void *a, uint32_t b, uint32_t c, uint32_t d);
extern int func_ov006_0219cbb4(void *p);
extern void func_02088f30(void);
extern void func_ov006_0219cbc4(void *p, void (*fn)(void), uint32_t a, uint32_t b);
extern int func_ov006_0219adec(uint32_t a, uint16_t b);
extern void func_ov006_02199fa4(void);

int func_ov006_0219a058(void)
{
    uint8_t buf[0x20];
    uint8_t *base;
    uint8_t *elem;
    uint8_t *r7;
    uint32_t *r4;
    uint32_t *sel;
    uint32_t *ent;
    uint32_t i;
    uint32_t idx;
    uint32_t off;
    uint32_t off3;
    uint32_t r2v;
    uint32_t k;
    int ok;

    base = data_ov006_021ba160;
    if (base[0x1524] == 0) {
        return 0x15;
    }
    base[0x1525] = (int)(base[0x1525] + 1) % 16;

    i = 0;
    do {
        idx = base[0x1525];
        elem = base + idx * 0x5d4;
        if (elem[0x1d52] != 0 && *(uint16_t *)(elem + 0x1d4c) != 0) {
            break;
        }
        i++;
    } while (i < 16);
    if (i == 16) {
        return 0x15;
    }

    func_ov006_0219a314(idx);

    base = data_ov006_021ba160;
    idx = base[0x1525];
    off = idx * 0x5d4;
    ok = func_ov006_0219ac6c(buf + 0x10, base + 0x1d2c + off,
                             *(uint16_t *)(base + off + 0x1d48),
                             base + 0x1788 + off);
    if (ok == 0) {
        return 0x15;
    }

    buf[8] = 4;
    *(uint16_t *)(buf + 10) = base[0x1525];
    idx = base[0x1525];
    *(uint16_t *)(buf + 12) = *(uint16_t *)(base + idx * 0x5d4 + 0x1d48);

    r2v = func_ov006_0219cd40(buf + 8);

    base = data_ov006_021ba160;
    idx = base[0x1525];
    elem = base + idx * 0x5d4;
    off3 = buf[0x1c] << 2;
    *(uint32_t *)buf = *(uint32_t *)(buf + 0x18) - *(uint32_t *)(elem + off3 + 0x1d2c);
    *(uint32_t *)(buf + 4) = *(uint32_t *)(*(uint8_t **)(elem + 0x1d58) + off3);
    r4 = (uint32_t *)*(uint8_t **)(elem + 0x1d54);

    ok = func_ov006_0219ca14(r4, *(uint32_t *)buf + *(uint32_t *)(buf + 4), r2v,
                             *(uint32_t *)(buf + 0x14));
    if (ok != 0) {
        base = data_ov006_021ba160;
        idx = base[0x1525];
        elem = base + idx * 0x5d4;
        return func_ov006_0219adec(*(uint32_t *)(buf + 0x14) + 6,
                                   *(uint16_t *)(elem + 0x1d4c));
    }

    base = data_ov006_021ba160;
    r7 = base + 0x7ce0;
    if (func_ov006_0219cbb4(r7) != 0) {
        return 0x15;
    }
    if (*r4 != 0) {
        (*r4)--;
        return 0x15;
    }

    sel = 0;
    for (k = 0; k < 4; k++) {
        ent = r4 + 12 + k * 4;
        if (ent[3] == 2) {
            if (sel == 0 || sel[0] > ent[0]) {
                sel = ent;
            }
        }
    }
    if (sel == 0) {
        func_02088f30();
    }
    *r4 = 2;
    sel[3] = 1;
    sel[0] = (*(uint32_t *)buf + *(uint32_t *)(buf + 4)) & ~0x1fu;
    *(uint32_t **)(r7 + 0x10) = sel;
    *(uint32_t **)(r7 + 0x14) = r4;
    func_ov006_0219cbc4(r7, func_ov006_02199fa4, 0, 4);
    return 0x15;
}
