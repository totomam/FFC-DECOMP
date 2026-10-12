/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0208763c(void *p);
extern "C" void func_02087678(void *p);

extern "C" int func_ov003_0214b318(uint8_t *p, int mode)
{
    uint32_t *w = (uint32_t *)p;
    int r5 = 0;
    struct G { int a, b; ~G() {} } g;
    uint8_t *obj;
    int r6;
    uint8_t *r4;

    switch (mode) {
    case 0:
        if (w[0x6e] != 0 && w[0x6f] != 0) {
            r5 = 1;
        } else {
            r5 = 0;
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
