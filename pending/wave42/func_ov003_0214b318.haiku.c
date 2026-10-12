#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);

int func_ov003_0214b318(uint8_t *p, int mode)
{
    uint32_t *w = (uint32_t *)p;
    int r5 = 0;
    uint8_t *obj;
    uint8_t *r4;
    int r6;

    switch (mode) {
    case 0:
        if (w[0x6e] != 0 && w[0x6f] != 0) {
            r5 = 1;
        }
        break;
    case 1:
        if (w[0x6f] != 0) {
            r5 = 1;
        }
        break;
    case 2:
        if (w[0x6e] != 0) {
            r5 = 1;
        }
        break;
    default:
        break;
    }

    if (r5 != 0) {
        obj = (uint8_t *)w[0x6d];
        r6 = obj[0x12];
        r4 = obj + 0x1c;
        if (r6 != 0) {
            func_0208763c(r4);
        }
        r5 = (((uint32_t *)obj)[5] == 0);
        if (r6 != 0) {
            func_02087678(r4);
        }
    }
    return r5;
}
