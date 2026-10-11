#include "ffc/types.h"

extern void *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern uint32_t func_0201b924(const void *object);
extern void func_0201f1f0(void *a, uint32_t b, void *c);

void func_ov001_02189e64(uint8_t *p) {
    uint32_t buf[38];

    func_0201cf34(data_020b93b8, buf);
    *(uint32_t *)(p + 0x6c8) = (buf[5] << 13) >> 27;
    func_0201f1f0(data_020b93b8, func_0201b924(data_020b93b8), p + 0x6cc);
    p[0x724] = 1;
}
