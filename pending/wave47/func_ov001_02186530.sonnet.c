#include "ffc/types.h"

typedef void (*FnT)(void *self, int idx, void *p, uint32_t v);

void func_ov001_02186530(int a0, uint32_t idx, void *p, void *self)
{
    uint8_t *s = (uint8_t *)self;

    switch (idx) {
    case 1:
        ((FnT)*(uint32_t *)(s + 0x84c))(self, 2, p, *(uint32_t *)(s + 0x854));
        break;
    case 0:
        ((FnT)*(uint32_t *)(s + 0x84c))(self, 1, p, *(uint32_t *)(s + 0x854));
        break;
    case 2:
        ((FnT)*(uint32_t *)(s + 0x84c))(self, 4, p, *(uint32_t *)(s + 0x854));
        break;
    case 3:
        ((FnT)*(uint32_t *)(s + 0x84c))(self, 6, p, *(uint32_t *)(s + 0x854));
        return;
    default:
        break;
    }

    if (p != 0) {
        if (*(uint32_t *)p == *(uint32_t *)(s + 0x844) &&
            *(uint16_t *)((uint8_t *)p + 4) == *(uint16_t *)(s + 0x848)) {
            *(uint32_t *)(s + 0x844) = 0;
        }
    }
}
