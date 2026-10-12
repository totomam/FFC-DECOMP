#include "ffc/types.h"

extern int32_t func_ov000_0215355c(int32_t x);
extern int32_t func_ov000_021543c8(void *p);
extern int32_t func_ov000_02153f7c(void *p);
extern void func_ov000_02153e18(int32_t x);

int32_t func_ov000_0215426c(void *p, int32_t mode)
{
    uint8_t *b = (uint8_t *)p;
    int32_t r = mode;

    switch (mode) {
    case 3:
        if (b[0x14c2] != 0 || *(uint16_t *)(b + 0x14c6) != 0) {
            if (func_ov000_0215355c(1) == 1) {
                r = 4;
            } else {
                r = func_ov000_021543c8(p);
            }
        } else {
            if (((uint32_t)(b[0x14bb] << 24) >> 28) < 1) {
                r = func_ov000_02153f7c(p);
            } else {
                r = 6;
            }
        }
        break;
    case 4:
        r = func_ov000_021543c8(p);
        break;
    case 5:
        if (((uint32_t)(b[0x14bb] << 24) >> 28) < 1) {
            r = func_ov000_02153f7c(p);
        } else {
            r = 6;
        }
        break;
    }

    func_ov000_02153e18(r);
    return r;
}
