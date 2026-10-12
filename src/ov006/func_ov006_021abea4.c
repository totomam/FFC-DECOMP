#include "ffc/types.h"

extern void *func_ov006_021afd28(void);

int func_ov006_021abea4(uint32_t a)
{
    uint8_t *p = (uint8_t *)func_ov006_021afd28();
    int r = 1;

    switch (a) {
    case 7:
        if (p[0xf5] == 0) {
            r = 0;
        }
        break;
    case 0:
    case 1:
        if ((uint8_t)(p[0xe7] + 0xff) <= 1) {
            r = 0;
        }
        break;
    case 4:
    case 5:
    case 6:
        if (p[0xf5] != 0) {
            r = 0;
        }
        break;
    case 9:
    case 10:
        if (p[0xf6] != 0) {
            r = 0;
        }
        break;
    default:
        break;
    }
    return r;
}
