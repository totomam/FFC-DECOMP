#include "ffc/types.h"

extern char data_ov003_0217a048[];
extern void *func_ov003_02155b40(void *obj);
extern void func_ov003_02157b6c(void *obj, int a, int b, int c, int d, int e, int f, int g);
extern void func_ov003_0215b1b0(void *obj, uint16_t v, int z);

void *func_ov003_0215b994(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t buf[4];
    uint8_t *q;

    *(void **)self = data_ov003_0217a048;
    if (*(uint16_t *)(self + 0x52) == 0 || *(uint16_t *)(self + 0x52) == 3) {
        q = (uint8_t *)func_ov003_02155b40(*(void **)(self + 0x4c));
        if (*(uint16_t *)(q + 0x12) == *(uint16_t *)(self + 0x56)) {
            buf[0] = 0;
            buf[1] = 0;
            buf[2] = 0;
            buf[3] = 0;
            func_ov003_02157b6c(*(void **)(self + 0x4c), 1, 1, 1 << 12, buf[0], buf[1], buf[2], buf[3]);
        }
        func_ov003_0215b1b0(*(void **)(self + 0x4c), *(uint16_t *)(self + 0x54), 0);
    }
    return self;
}
