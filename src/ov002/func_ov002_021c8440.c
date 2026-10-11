#include "ffc/types.h"

extern void func_ov002_021b86ec(void *p, void *b, void *a);
extern void func_ov002_021c82b0(void *p, int v);

void func_ov002_021c8440(uint8_t *a, uint8_t *b)
{
    *(uint8_t *)(a + 0x98) = *(uint8_t *)(b + 0x28);
    *(uint8_t *)(a + 0x99) = *(uint8_t *)(b + 0x29);
    *(uint8_t *)(a + 0x9a) = 0;
    if (*(void **)(a + 0x9c) != 0) {
        func_ov002_021b86ec(*(void **)(a + 0x9c), b, a);
    }
    if (*(void **)(a + 0x9c) != 0) {
        func_ov002_021c82b0((uint8_t *)*(void **)(a + 0x9c) + 0xb8, 1);
    }
}
