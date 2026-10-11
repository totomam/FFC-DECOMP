#include "ffc/types.h"

extern void func_02007494(void *p, int16_t a, int16_t b, int16_t c);
extern void func_02007450(void *p, int v);

void func_02007878(void *p)
{
    uint8_t *base = (uint8_t *)p;
    if (*(uint32_t *)(base + 0x20c) != 0) {
        func_02007494(p, *(int16_t *)(base + 0x206), *(int16_t *)(base + 0x208), *(int16_t *)(base + 0x20a));
        *(uint32_t *)(base + 0x20c) = 0;
    } else {
        func_02007450(p, 10);
    }
}
