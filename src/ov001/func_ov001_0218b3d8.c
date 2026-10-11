#include "ffc/types.h"

extern void func_ov001_02189ae4(void *p);
extern uint32_t data_ov001_021946d0[];
extern uint32_t data_ov001_02194740[];

void *func_ov001_0218b3d8(void *p)
{
    uint8_t *s = (uint8_t *)p;
    func_ov001_02189ae4(p);
    *(void **)(s + 0) = (void *)data_ov001_021946d0;
    *(void **)(s + 0xb0) = (void *)data_ov001_02194740;
    *(uint32_t *)(s + 0x72c) = 0;
    *(uint32_t *)(s + 0x730) = 0;
    *(uint32_t *)(s + 0x734) = 0;
    *(uint32_t *)(s + 0xe8) = 0;
    *(uint8_t *)(s + 0xec) = 0;
    *(uint32_t *)(s + 0x728) = 1;
    return p;
}
