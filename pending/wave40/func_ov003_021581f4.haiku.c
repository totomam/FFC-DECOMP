#include "ffc/types.h"

extern int32_t func_02024928(void);
extern void func_0202b258(void *obj, uint32_t a, int32_t b);

void func_ov003_021581f4(uint8_t *p5, uint32_t unused, uint8_t *p4)
{
    int32_t r4;
    int32_t r6;

    if (p4 != 0 && *(uint8_t **)(p4 + 0x110) != 0 &&
        *(uint32_t *)(*(uint8_t **)(p4 + 0x110) + 0x34) != 0 &&
        *(uint8_t **)(p5 + 0x110) != 0 &&
        *(uint32_t *)(*(uint8_t **)(p5 + 0x110) + 0x34) != 0) {

        r6 = func_02024928();
        r4 = (int32_t)*(uint8_t **)(p4 + 0x110);
        if (r6 == -1) {
            r4 = 0;
        }

        func_0202b258(*(void **)(p5 + 0x110), (uint32_t)r4, r6);
        if (*(uint8_t **)(p5 + 0x118) != 0) {
            func_0202b258(*(void **)(p5 + 0x118), (uint32_t)r4, r6);
        }
        if (*(uint8_t **)(p5 + 0x11C) != 0) {
            func_0202b258(*(void **)(p5 + 0x11C), (uint32_t)r4, r6);
        }
        *(uint32_t *)(p5 + 0x36C) = 0;
    }
}
