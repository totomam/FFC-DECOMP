#include "ffc/types.h"

typedef uint32_t (*fn_t)(void *, uint32_t, uint32_t, uint32_t,
                         uint32_t, uint32_t, uint32_t, uint32_t,
                         uint32_t, uint32_t, uint32_t, uint32_t);

uint32_t func_ov003_0214e31c(uint8_t *p)
{
    uint32_t *pm = (uint32_t *)(p + 0x3c);
    int32_t adj = (int32_t)pm[1];
    uint8_t *obj = *(uint8_t **)(p + 0x38);
    uint8_t *self = obj + (adj >> 1);
    uint32_t fn;

    if (adj & 1) {
        uint8_t *vt = *(uint8_t **)self;
        fn = *(uint32_t *)(vt + pm[0]);
    } else {
        fn = pm[0];
    }

    return ((fn_t)fn)(self,
                      *(uint32_t *)(p + 0x44),
                      *(uint32_t *)(p + 0x48),
                      *(uint32_t *)(p + 0x4c),
                      *(uint32_t *)(p + 0x50),
                      *(uint32_t *)(p + 0x54),
                      *(uint32_t *)(p + 0x58),
                      *(uint32_t *)(p + 0x5c),
                      *(uint32_t *)(p + 0x60),
                      *(uint32_t *)(p + 0x64),
                      *(uint32_t *)(p + 0x68),
                      *(uint32_t *)(p + 0x6c));
}
