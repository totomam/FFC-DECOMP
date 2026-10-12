#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_02015c98(void *unused, uint32_t index);
extern void *func_02017714(void *unused, const uint8_t *index);

int func_ov002_021b599c(uint32_t a) {
    uint8_t *obj;
    uint8_t *e;
    uint8_t *q;
    uint32_t off;
    uint8_t v;
    int f;

    obj = func_02015c98(data_020b8e44, a);
    e = func_02017714(data_020b8e44, obj);
    switch (e[1]) {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        f = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        f = 0;
        break;
    default:
        f = 0;
        break;
    }
    if (f) {
        return 1;
    }

    off = *(uint32_t *)(obj + 0x14);
    if (off == 0) {
        q = (uint8_t *)0;
    } else {
        q = obj + off;
    }
    v = *q;
    switch (v) {
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
        return 1;
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
        return 0;
    default:
        return 0;
    }
}
