#include "ffc/types.h"

extern void func_ov001_02185978(uint8_t *self, uint8_t *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_ov001_02185d40(uint8_t *self, uint8_t *obj);
extern void func_ov001_021874c4(uint8_t *a, uint32_t b);
extern uint32_t func_ov000_02168768(uint32_t p);
extern void func_ov001_0218593c(uint8_t *self, uint32_t v);

typedef void (*fn_t)(uint8_t *, uint32_t, uint8_t *, uint32_t);

void func_ov001_021863fc(uint8_t *a, uint32_t type, uint8_t *obj, uint8_t *self)
{
    uint32_t r3;
    uint8_t f;
    uint32_t k;

    switch (type) {
    case 0:
        ((fn_t)*(uint32_t *)(self + 0x84c))(self, 0, obj, *(uint32_t *)(self + 0x854));
        f = obj[0x14];
        if (f & 3) {
            if (f & 0x40) break;
        }
        if (f & 0x2c) break;
        if (*(uint32_t *)(self + 0x840) != 0) break;
        if (obj[0x15] & 1) {
            if (*(uint32_t *)(self + 0x60) == 0 || *(uint32_t *)(self + 0x54) == 0) {
                r3 = 1;
            } else {
                r3 = 0;
            }
        } else {
            r3 = 2;
        }
        if (*(uint16_t *)(a + 0x7d0) & 0x80) {
            func_ov001_02185978(self, obj, 0, r3, 1);
            break;
        }
        func_ov001_02185978(self, obj, 0, r3, 0);
        break;
    case 1:
        k = 2;
        if (obj[0x14] & 0x43) {
            k = 1;
        }
        ((fn_t)*(uint32_t *)(self + 0x84c))(self, k, obj, *(uint32_t *)(self + 0x854));
        break;
    case 2:
        if (obj[0x14] & 0x2c) {
            func_ov001_02185d40(self, obj);
        }
        ((fn_t)*(uint32_t *)(self + 0x84c))(self, 3, obj, *(uint32_t *)(self + 0x854));
        break;
    case 3:
        if (*(uint32_t *)(self + 0x83c) != 0) {
            func_ov001_021874c4(a, *(uint32_t *)(self + 0x83c));
        }
        if (func_ov000_02168768(*(uint32_t *)(a + 4)) != 0) {
            if (*(uint32_t *)(self + 0x10) != 0) break;
        }
        ((fn_t)*(uint32_t *)(self + 0x84c))(self, 4, 0, *(uint32_t *)(self + 0x854));
        break;
    case 4:
    case 7:
        break;
    case 5:
        ((fn_t)*(uint32_t *)(self + 0x84c))(self, 5, 0, *(uint32_t *)(self + 0x854));
        break;
    case 6:
        func_ov001_0218593c(self, *(uint32_t *)(self + 0x704));
        break;
    }

    if (obj != 0) {
        if (*(uint32_t *)obj == *(uint32_t *)(self + 0x844) &&
            *(uint16_t *)(obj + 4) == *(uint16_t *)(self + 0x848)) {
            *(uint32_t *)(self + 0x844) = 0;
        }
    }
}
