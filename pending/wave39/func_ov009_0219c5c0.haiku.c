#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015c98(void *unused, uint32_t index);
extern void *func_02017714(void *unused, const uint8_t *index);

int func_ov009_0219c5c0(uint32_t a) {
    uint8_t *obj = (uint8_t *)func_02015c98(data_020b8e44, a);
    uint8_t *p = (uint8_t *)func_02017714(data_020b8e44, obj);
    int r;
    switch (p[1]) {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        r = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        r = 0;
        break;
    default:
        r = 0;
        break;
    }
    if (r) {
        return 1;
    }
    {
        uint32_t off = *(uint32_t *)(obj + 0x14);
        uint8_t *t;
        int s;
        if (off == 0) {
            t = 0;
        } else {
            t = obj + off;
        }
        switch (*t) {
        case 2:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 19:
        case 20:
        case 24:
            s = 1;
            break;
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 16:
        case 17:
        case 18:
        case 21:
        case 22:
        case 23:
            s = 0;
            break;
        default:
            s = 0;
            break;
        }
        return s;
    }
}
