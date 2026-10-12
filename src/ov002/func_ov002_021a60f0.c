#include "ffc/types.h"

extern void *func_02017714(void *unused, const uint8_t *index);
extern void *data_020b8e44;

int func_ov002_021a60f0(uint8_t *a)
{
    uint8_t *r = (uint8_t *)func_02017714(data_020b8e44, a);
    uint8_t b = r[1];
    uint32_t off = *(uint32_t *)(a + 0x10);
    uint8_t *p = (off == 0) ? 0 : a + off;
    int f1;
    int f2;

    if (*(uint16_t *)(p + 2) != 0) {
        if (b != 1) {
            return 2;
        }
        return 3;
    }
    switch (b) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        f1 = 1;
        break;
    case 1:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        f1 = 0;
        break;
    default:
        f1 = 0;
        break;
    }
    if (f1) {
        return 1;
    }
    switch (b) {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
        f2 = 1;
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        f2 = 0;
        break;
    default:
        f2 = 0;
        break;
    }
    if (f2) {
        return 0;
    }
    return 4;
}
