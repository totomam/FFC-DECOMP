#include "ffc/types.h"

extern void func_02088f30(void);
extern void *func_0205681c(uint32_t size);
extern void func_ov003_02166b64(void *obj, uint32_t a, uint32_t mode, uint32_t w0,
    uint32_t p6, uint32_t p44, uint32_t w5c, uint32_t w60, uint32_t p7, uint32_t p40,
    uint32_t p4c, uint32_t p50, uint32_t p3c, uint32_t p38, uint32_t p34);

#define QB(p) ((p) + *(uint32_t *)((p) + 8))

void func_ov003_0216c588(uint32_t a, uint8_t *p, uint32_t *out)
{
    uint32_t w0 = *(uint32_t *)QB(p);
    uint32_t f34 = (*(uint32_t *)(QB(p) + 4) == 0) ? 1 : 0;
    uint32_t f38 = *(uint32_t *)(QB(p) + 0xc);
    uint32_t f3c = *(uint32_t *)(QB(p) + 8);
    uint32_t f40 = 0, f44 = 0, f4c = 0, f50 = 0;
    uint32_t w5c = 0, w60 = 0, f7 = 0, p6 = 0;
    uint32_t mode = 0;
    uint32_t cnt = 0;
    uint16_t type = *(uint16_t *)p;
    void *obj;

    if (type == 0x90) mode = 0;
    else if (type == 0x91) mode = 1;
    else if (type == 0x92) mode = 2;
    else if (type == 0x93) mode = 3;
    else if (type == 0x94) mode = 4;
    else if (type == 0x95) mode = 5;
    else if (type == 0x96) mode = 6;
    else func_02088f30();

    if (mode - 2 <= 2) {
        f7 = *(uint32_t *)(QB(p) + 0x10);
        cnt++;
    } else if (mode - 5 <= 1) {
        f4c = *(uint32_t *)(QB(p) + 0x10);
    }

    if (mode == 0 || mode == 2 || mode - 4 <= 1) {
        p6 = *(uint32_t *)(QB(p) + 0x10 + cnt * 4);
        w5c = out[0];
        w60 = out[1];
    }

    if (w0 == 0) {
        if (mode - 2 <= 2) {
            uint32_t r3 = (mode == 2 || mode == 4) ? 1 : 0;
            if (*(uint32_t *)(p + 4) < r3 + 6) f40 = f7;
            else f40 = *(uint32_t *)(QB(p) + 0x14 + r3 * 4);
            cnt++;
        } else if (mode - 5 <= 1) {
            uint32_t r3 = (mode == 5) ? 1 : 0;
            if (*(uint32_t *)(p + 4) < r3 + 6) f50 = f4c;
            else f50 = *(uint32_t *)(QB(p) + 0x14 + r3 * 4);
            cnt++;
        }
    } else {
        f44 = p6;
        f40 = f7;
        f50 = f4c;
    }

    if (mode == 0 || mode == 2 || mode - 4 <= 1) {
        if (*(uint32_t *)(p + 4) < cnt + 6) f44 = p6;
        else f44 = *(uint32_t *)(QB(p) + 0x14 + cnt * 4);
    }

    obj = func_0205681c(0xb8);
    if (obj != 0) {
        func_ov003_02166b64(obj, a, mode, w0, p6, f44, w5c, w60, f7, f40, f4c, f50, f3c, f38, f34);
    }

    if (mode == 0 || mode == 2 || mode == 5) {
        out[0] = 0;
        out[1] = 0;
    }
}
