#include "ffc/types.h"

extern void func_020849e0(int zero, uint8_t *p, uint32_t n);
extern void *func_ov000_02163350(void);
extern int func_ov001_02184db4(void *a, const uint8_t *b, void *c, uint8_t *d);
extern int func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern int func_ov001_02183a20(const uint8_t *a, void *b, uint8_t *c);

int func_ov000_0215d6f8(int a0, uint32_t a1, int32_t a2, const uint8_t *a3, void *a4)
{
    uint8_t buf[8];
    uint8_t *p;
    void *q;

    if (a4 == 0 || a3 == 0) {
        return 0;
    }
    func_020849e0(0, buf, 8);
    p = buf;
    p[1] = 2;
    *(uint16_t *)(p + 2) = (uint16_t)((uint8_t)(a2 >> 8) | ((a2 << 8) & 0xff00));
    *(uint32_t *)(p + 4) = a1;

    a2 = a3[0];
    if ((a2 == 0xfe && a3[1] == 0xfd) || a2 == 0x5c) {
        q = func_ov000_02163350();
        if (((void **)q)[4] != 0) {
            q = func_ov000_02163350();
            func_ov001_02184db4(((void **)q)[4], a3, a4, buf);
        }
    } else {
        if (func_02090410(a3, (const uint8_t *)0x02191b58, 6) != 0) {
            return 0;
        }
        func_ov001_02183a20(a3, a4, buf);
    }
    return 1;
}
