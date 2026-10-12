#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x2ec];
    struct { uint32_t bit0 : 1; uint32_t rest : 31; } f;
    uint32_t w2;
    uint16_t *ptr;
    uint8_t pad1[0x338 - 0x2f8];
    int8_t idx;
    uint8_t pad2[0x34c - 0x339];
    uint32_t st;
} S;

extern int func_ov012_021d0c84(S *p);
extern void func_ov012_021d0e50(S *p, int flag);

void func_ov012_021d0e50(S *p, int flag);

void func_ov012_021d0d0c(S *p, uint32_t mode)
{
    uint32_t st;
    int r7 = 0;
    int r5 = 0;
    int idx;
    int flag;
    uint16_t *tbl;
    int v;

    st = p->st;
    if (st >= 5) {
        r7 = 1;
    }
    switch (mode) {
    case 0:
        p->st = p->st + 1;
        break;
    case 1:
        p->st = p->st - 1;
        break;
    case 2:
        p->st = func_ov012_021d0c84(p);
        break;
    case 3:
        break;
    default:
        return;
    }
    st = p->st;
    if (st >= 5) {
        r5 = 1;
    }
    if (mode == 3 && st >= 5) {
        idx = p->idx;
        flag = p->f.bit0 ? 0 : 1;
        if (flag) {
            tbl = (uint16_t *)((uint8_t *)&p->f + 2);
        } else {
            tbl = p->ptr;
        }
        if ((int)tbl[idx] >= 0x30) {
        if (flag) {
            tbl = (uint16_t *)((uint8_t *)&p->f + 2);
        } else {
            tbl = p->ptr;
        }
        if ((int)tbl[idx] <= 0x39) {
            func_ov012_021d0e50(p, 0);
            return;
        }
        }
        func_ov012_021d0e50(p, 1);
        return;
    }
    if (r5 != 0 && r5 != r7) {
        idx = p->idx;
        flag = p->f.bit0 ? 0 : 1;
        if (flag) {
            tbl = (uint16_t *)((uint8_t *)&p->f + 2);
        } else {
            tbl = p->ptr;
        }
        if ((int)tbl[idx] >= 0x30) {
        if (flag) {
            tbl = (uint16_t *)((uint8_t *)&p->f + 2);
        } else {
            tbl = p->ptr;
        }
        if ((int)tbl[idx] <= 0x39) {
            func_ov012_021d0e50(p, 0);
            return;
        }
        }
        func_ov012_021d0e50(p, 1);
        return;
    }
    if (r5 == 0 && r5 != r7) {
        func_ov012_021d0e50(p, 0);
    }
}
