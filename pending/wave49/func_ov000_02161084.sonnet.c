#include "ffc/types.h"

extern int func_ov000_0216376c(void);
extern uint8_t *func_ov000_02163350(void);
extern void *func_ov000_0215917c(int heap, uint32_t size);
extern int func_ov000_02163a84(void);
extern int func_ov000_02163408(void);
extern uint8_t *func_ov000_02163634(int idx);
extern void func_ov000_02163e00(int y, int x, void *out, int type);
extern void func_ov000_021591a8(int heap, void *p, int flag);
extern uint64_t func_020882cc(void);

void func_ov000_02161084(int x, int y)
{
    uint32_t loc[2];
    uint32_t *out;
    int type;
    int n;
    uint8_t i;
    int j;
    uint8_t *base;
    uint8_t *p;

    type = 4;
    out = loc;

    switch (y) {
    case 2:
        if (func_ov000_0216376c() != 0) {
            base = func_ov000_02163350();
            if (x == base[0x56a]) {
                out[0] = 1;
                break;
            }
        }
        type = 0x1c;
        out = func_ov000_0215917c(4, 0x1c);
        if (out == 0) {
            return;
        }
        out[0] = 0;
        base = func_ov000_02163350() + 0x554;
        out[1] = ((base[0x17] << 16) & 0xffff0000) | base[0x16];
        out[2] = *(uint32_t *)(base + 0);
        out[3] = *(uint32_t *)(base + 4);
        out[4] = *(uint32_t *)(base + 8);
        out[5] = ((*(uint16_t *)(base + 0xc) << 16) & 0xffff0000) | *(uint16_t *)(base + 0xe);
        out[6] = *(uint32_t *)(base + 0x24);
        break;
    case 3:
        base = func_ov000_02163350();
        ((uint8_t *)out)[0] = *(uint16_t *)(base + 0x630);
        base = func_ov000_02163350();
        ((uint8_t *)out)[1] = *(uint16_t *)(base + 0x630) >> 8;
        break;
    case 4:
        if (func_ov000_0216376c() == 0) {
            goto zero;
        }
        base = func_ov000_02163350();
        if (x != base[0x56a]) {
            goto zero;
        }
        if (func_ov000_02163a84() != 0) {
            n = 0;
        } else {
            n = func_ov000_02163408() - 1;
        }
        if (n == 0) {
            ((uint8_t *)out)[0] = 0;
            ((uint8_t *)out)[1] = 0;
            ((uint8_t *)out)[2] = 0;
            ((uint8_t *)out)[3] = 0;
            base = func_ov000_02163350();
            out[1] = *(uint32_t *)(base + 0x7c8);
            type = 8;
            break;
        }
        type = 0x18 * n;
        type = type + 8;
        out = func_ov000_0215917c(4, type);
        if (out == 0) {
            return;
        }
        out[0] = n;
        j = 1;
        for (i = 0; i < n; i++) {
            p = func_ov000_02163634(i + 1);
            *(uint32_t *)((uint8_t *)out + j * 4) = ((p[0x17] << 16) & 0xffff0000) | p[0x16];
            *(uint32_t *)((uint8_t *)out + (j + 1) * 4) = *(uint32_t *)(p + 0);
            *(uint32_t *)((uint8_t *)out + (j + 2) * 4) = *(uint32_t *)(p + 4);
            *(uint32_t *)((uint8_t *)out + (j + 3) * 4) = *(uint32_t *)(p + 8);
            *(uint32_t *)((uint8_t *)out + (j + 4) * 4) = ((*(uint16_t *)(p + 0xc) << 16) & 0xffff0000) | *(uint16_t *)(p + 0xe);
            *(uint32_t *)((uint8_t *)out + (j + 5) * 4) = *(uint32_t *)(p + 0x24);
            j += 6;
        }
        base = func_ov000_02163350();
        out[j] = *(uint32_t *)(base + 0x7c8);
        break;
    default:
        break;
    }
    goto call;

zero:
    type = 8;
    ((uint8_t *)out)[0] = 0;
    ((uint8_t *)out)[1] = 0;
    ((uint8_t *)out)[2] = 0;
    ((uint8_t *)out)[3] = 0;
    base = func_ov000_02163350();
    out[1] = *(uint32_t *)(base + 0x7c8);

call:
    func_ov000_02163e00(y, x, out, type);
    if (out != loc) {
        func_ov000_021591a8(4, out, 0);
    }
    {
        uint64_t t = func_020882cc();
        *(uint64_t *)(func_ov000_02163350() + 0x658) = t;
    }
}
