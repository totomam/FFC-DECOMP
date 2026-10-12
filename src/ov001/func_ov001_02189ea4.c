#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern void func_0201ce70(void *a, void *b);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1a8(void *a, uint32_t b, void *c);

void func_ov001_02189ea4(void *param_0)
{
    uint8_t *p = (uint8_t *)param_0;
    uint32_t buf[38];
    uint32_t v;

    if (p[0x724] != 0) {
        func_0201cf34(data_020b93b8, buf);
        v = buf[5];
        v = (v & 0xfff83fff) | ((*(uint32_t *)(p + 0x6c8) << 27) >> 13);
        buf[5] = v;
        func_0201ce70(data_020b93b8, buf);
        func_0201f1a8(data_020b93b8, func_0201b924(data_020b93b8), p + 0x6cc);
        p[0x724] = 0;
    }
}
