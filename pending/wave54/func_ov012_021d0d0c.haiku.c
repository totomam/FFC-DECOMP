#include "ffc/types.h"

extern int func_ov012_021d0c84(uint8_t *p);
extern void func_ov012_021d0e50(uint8_t *p, int flag);

void func_ov012_021d0d0c(uint8_t *p, uint32_t mode)
{
    uint32_t st;
    int r7 = 0;
    int r5 = 0;
    int idx;
    int flag;
    uint16_t *tbl;
    int v;

    st = *(uint32_t *)(p + 0x34c);
    if (st >= 5) {
        r7 = 1;
    }
    switch (mode) {
    case 0:
        *(uint32_t *)(p + 0x34c) = *(uint32_t *)(p + 0x34c) + 1;
        break;
    case 1:
        *(uint32_t *)(p + 0x34c) = *(uint32_t *)(p + 0x34c) - 1;
        break;
    case 2:
        *(uint32_t *)(p + 0x34c) = func_ov012_021d0c84(p);
        break;
    case 3:
        break;
    default:
        return;
    }
    st = *(uint32_t *)(p + 0x34c);
    if (st >= 5) {
        r5 = 1;
    }
    if (mode == 3 && st >= 5) {
        idx = *(int8_t *)(p + 0x338);
        flag = ((*(uint32_t *)(p + 0x2ec) << 31) >> 31) ? 0 : 1;
        if (flag) {
            tbl = (uint16_t *)(p + 0x2ec + 2);
        } else {
            tbl = *(uint16_t **)(p + 0x2f4);
        }
        if (tbl[idx] < 0x30) {
            func_ov012_021d0e50(p, 1);
            return;
        }
        if (flag) {
            tbl = (uint16_t *)(p + 0x2ec + 2);
        } else {
            tbl = *(uint16_t **)(p + 0x2f4);
        }
        if (tbl[idx] > 0x39) {
            func_ov012_021d0e50(p, 1);
            return;
        }
        func_ov012_021d0e50(p, 0);
        return;
    }
    if (r5 != 0 && r5 != r7) {
        idx = *(int8_t *)(p + 0x338);
        flag = ((*(uint32_t *)(p + 0x2ec) << 31) >> 31) ? 0 : 1;
        if (flag) {
            tbl = (uint16_t *)(p + 0x2ec + 2);
        } else {
            tbl = *(uint16_t **)(p + 0x2f4);
        }
        if (tbl[idx] < 0x30) {
            func_ov012_021d0e50(p, 1);
            return;
        }
        if (flag) {
            tbl = (uint16_t *)(p + 0x2ec + 2);
        } else {
            tbl = *(uint16_t **)(p + 0x2f4);
        }
        if (tbl[idx] > 0x39) {
            func_ov012_021d0e50(p, 1);
            return;
        }
        func_ov012_021d0e50(p, 0);
        return;
    }
    if (r5 == 0 && r7 != 0) {
        func_ov012_021d0e50(p, 0);
    }
}
