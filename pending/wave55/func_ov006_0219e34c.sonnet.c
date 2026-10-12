#include "ffc/types.h"

extern uint32_t func_ov006_0219f078(uint32_t v);
extern void func_ov006_0219ef5c(uint8_t *dst, uint8_t *src, uint32_t n);

int func_ov006_0219e34c(uint8_t *p0, uint8_t *ctx) {
    uint8_t *r5 = p0 + 6;
    uint8_t *base;
    uint8_t *pc8 = ctx + 8;
    uint8_t *pf0 = ctx + 0xf0;
    uint8_t *pb0 = ctx + 0xb0;
    uint8_t *p70 = ctx + 0x70;
    uint8_t *p30 = ctx + 0x30;
    uint32_t size;
    uint8_t type;
    uint32_t next;

    base = r5;
    for (;;) {
        size = func_ov006_0219f078(*(uint16_t *)(r5 + 2));
        type = r5[0];
        switch (type) {
        case 0x10: case 0x11: case 0x12: case 0x13:
            if (size > 5) return -1;
            break;
        case 0x20: case 0x21: case 0x22: case 0x23:
            if (size > 0xd) return -1;
            break;
        case 0x15: case 0x25:
            if (size > 0x21) return -1;
            break;
        default:
            break;
        }
        switch (type) {
        case 0x10: case 0x20:
            func_ov006_0219ef5c(p30, r5 + 6, size);
            *(uint32_t *)(ctx + 4) = size;
            break;
        case 0x11: case 0x21:
            func_ov006_0219ef5c(p70, r5 + 6, size);
            *(uint32_t *)(ctx + 4) = size;
            break;
        case 0x12: case 0x22:
            func_ov006_0219ef5c(pb0, r5 + 6, size);
            *(uint32_t *)(ctx + 4) = size;
            break;
        case 0x13: case 0x23:
            func_ov006_0219ef5c(pf0, r5 + 6, size);
            *(uint32_t *)(ctx + 4) = size;
            break;
        case 0x15: case 0x25:
            if (size != 0 && r5[size + 5] != 0) return -1;
            func_ov006_0219ef5c(pc8, r5 + 6, size);
            break;
        default:
            return -1;
        }
        next = *(uint16_t *)(r5 + 4);
        if (next != 0) {
            r5 = base + func_ov006_0219f078(next);
            continue;
        }
        return 0;
    }
}
