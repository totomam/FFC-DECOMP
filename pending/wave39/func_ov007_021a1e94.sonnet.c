#include "ffc/types.h"

extern void func_020211d4(int a, int b);
extern uint64_t data_ov007_021c3bc4;

void func_ov007_021a1e94(uint8_t *p)
{
    uint64_t v = data_ov007_021c3bc4;
    *(uint32_t *)(p + 0x80) = (uint32_t)v;
    *(uint32_t *)(p + 0x84) = (uint32_t)(v >> 32);
    switch (*(uint32_t *)(p + 0x90)) {
    case 0:
        func_020211d4(0x45, 0);
        **(uint32_t **)(p + 0x88) = 0;
        return;
    case 1:
        **(uint32_t **)(p + 0x88) = 3;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    case 2:
        **(uint32_t **)(p + 0x88) = 4;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
        return;
    }
}
