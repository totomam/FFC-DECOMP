#include "ffc/types.h"

extern uint32_t func_0209a978(uint32_t a, uint32_t b);

typedef struct {
    uint8_t pad[0x28];
    uint32_t kind;
    uint32_t val;
} S;

uint32_t func_ov007_021ac1c4(uint32_t unused, S *p) {
    uint32_t r4 = 0;
    uint32_t k = p->kind;
    uint32_t r;

    if (k == 1) {
        r4 = 0x4a;
    } else if (k == 2) {
        r4 = 0x4b;
    } else if (k == 3) {
        r4 = 0x4c;
    } else if (k == 4) {
        r4 = 0x4d;
    } else if (k == 5) {
        if (p->val < 3) {
            r4 = 0x4e;
        } else {
            r4 = 0x4f;
        }
    } else if (k == 6) {
        r4 = 0x50;
    } else if (k == 7) {
        if (p->val < 4) {
            r4 = 0x51;
        } else {
            r4 = 0x52;
        }
    } else if (k == 8) {
        r4 = 0x53;
    } else if (k == 9) {
        if (p->val < 5) {
            r4 = 0x54;
        } else {
            r4 = 0x55;
        }
    } else if (k >= 10) {
        r = func_0209a978(p->val * 100, k);
        if (r < 5) {
            r4 = 0x56;
        } else if (r < 0x23) {
            r4 = 0x57;
        } else if (r < 0x2d) {
            r4 = 0x58;
        } else if (r == 0x32) {
            r4 = 0x5a;
        } else if (r < 0x37) {
            r4 = 0x59;
        } else if (r < 0x41) {
            r4 = 0x5b;
        } else if (r < 0x5f) {
            r4 = 0x5c;
        } else {
            r4 = 0x5d;
        }
    }
    return r4;
}
