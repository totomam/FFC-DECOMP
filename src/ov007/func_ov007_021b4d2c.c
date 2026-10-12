#include "ffc/types.h"

typedef struct { uint32_t w0; uint32_t w1; } Pair;

extern uint32_t data_020b93b8;
extern Pair data_ov007_021c6904;
extern Pair data_ov007_021c690c;
extern void func_0201cf34(uint32_t obj, void *out);
extern void func_02093bc8(void *dst, void *src);
extern uint32_t func_0201b924(const void *object);
extern void func_ov007_021b56a0(void *obj);

void func_ov007_021b4d2c(void *r0)
{
    uint8_t *p = (uint8_t *)r0;
    uint32_t buf[38];

    if (*(uint8_t *)(p + 0x564) != 0) {
        *(Pair *)(p + 0xb0) = data_ov007_021c6904;
        return;
    }

    func_0201cf34(data_020b93b8, buf);
    *(uint32_t *)(p + 0xe8) = (buf[5] << 13) >> 27;
    func_02093bc8(p + 0xd0, buf);
    *(uint32_t *)(p + 0x53c) = func_0201b924((const void *)data_020b93b8);
    func_ov007_021b56a0(p);
    *(Pair *)(p + 0xb0) = data_ov007_021c690c;
}
