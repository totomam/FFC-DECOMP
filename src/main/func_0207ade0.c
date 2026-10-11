#include "ffc/types.h"

extern void *func_02078100(uint32_t a, uint32_t b, uint32_t c);
extern void func_0207adb0(void);
extern void func_02077aa4(void *dst, void *src);

int func_0207ade0(uint32_t *p)
{
    void *r;

    r = func_02078100(p[0], 0x14, 4);
    if (r == 0) {
        return 0;
    }
    func_0207adb0();
    func_02077aa4(&p[1], r);
    return 1;
}
