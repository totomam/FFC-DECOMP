#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *p, int v, uint32_t n);
extern uint32_t func_ov000_02168688(int x);
extern void func_ov001_0217c178(void);
extern void *func_ov000_021686f4(uint32_t size, int v, void *f);


uint32_t *func_ov001_0217c188(uint32_t *arg0, uint32_t a1, uint32_t a2)
{
    uint32_t *r5 = (uint32_t *)arg0[0];
    uint32_t *r4 = (uint32_t *)func_ov000_021653d4(0x50);
    if (r4 == 0) {
        return 0;
    }
    func_020903cc(r4, 0, 0x50);
    r4[0] = 0x64;
    r4[1] = a2;
    r4[4] = a1;
    r4[5] = func_ov000_02168688(0) + 0x2710;
    r4[19] = r5[0x5d8 / 4];
    r4[15] = (uint32_t)func_ov000_021686f4(0x18, 0, (void *)func_ov001_0217c178);
    r5[0x5d8 / 4] = (uint32_t)r4;
    r4[17] = 0;
    r4[18] = 0;
    r4[16] = 0;
    return r4;
}
