#include "ffc/types.h"

extern void *data_020b8e44;
extern void *data_020b93b8;
extern void func_02072234(void *a, uint32_t b);
extern void func_02071f80(void);
extern void func_0201f788(void *a);

void func_ov007_021b0e7c(void)
{
    uint32_t off;
    int i;
    for (i = 0; i < 0x3c; i++) {
        func_02072234(*(void **)((uint8_t *)*(void **)data_020b8e44 + 0x84), (uint32_t)i);
        func_02071f80();
    }
    func_0201f788(data_020b93b8);
    off = 0x1d << 4;
    *(uint32_t *)((uint8_t *)data_020b93b8 + off) = 0;
    off += 4;
    *(uint32_t *)((uint8_t *)data_020b93b8 + off) = 0;
}
