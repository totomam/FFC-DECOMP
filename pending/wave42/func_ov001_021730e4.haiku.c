#include "ffc/types.h"

extern int32_t func_0209a76c(uint32_t a, int32_t b);

typedef struct {
    uint8_t pad0[0x40];
    int32_t f40;
    uint8_t pad1[0x118 - 0x44];
    uint32_t f118;
} Obj;

void func_ov001_021730e4(void *p0) {
    Obj *p = (Obj *)p0;
    uint32_t v = p->f118;

    switch (func_0209a76c(v, 100)) {
    case 1:
    case 2:
    case 3:
        return;
    case 4:
        switch (v - 0x191) {
        case 0:
            p->f40 = 9;
            return;
        case 2:
            p->f40 = 10;
            return;
        case 3:
        case 9:
            p->f40 = 11;
            return;
        default:
            p->f40 = 8;
            return;
        }
    case 5:
        p->f40 = 12;
        break;
    default:
        break;
    }
}
