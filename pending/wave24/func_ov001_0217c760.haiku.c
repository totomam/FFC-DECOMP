#include "ffc/types.h"

extern void *func_ov000_021689f8(int a, int b, void *c, void *d, void *e);
extern void func_ov001_0217c6cc(void);
extern void func_ov001_0217c6b8(void);
extern void func_ov001_0217c6c4(void);

int func_ov001_0217c760(void *self)
{
    uint8_t *base = *(uint8_t **)self;
    int ret = 0;

    *(uint32_t *)(base + 0x5d0) = 0;
    *(uint32_t *)(base + 0x5d4) = 0;
    *(uint32_t *)(base + 0x5cc) = 0;
    *(void **)(base + 0x5c8) = func_ov000_021689f8(0x30, 0x20,
        (void *)func_ov001_0217c6b8, (void *)func_ov001_0217c6c4,
        (void *)func_ov001_0217c6cc);
    if (*(uint32_t *)(base + 0x5c8) != 0) {
        ret = 1;
    }
    return ret;
}
