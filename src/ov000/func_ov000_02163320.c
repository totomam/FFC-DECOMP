#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void *p);

int func_ov000_02163320(void *p)
{
    uint32_t v;

    v = *(uint32_t *)(func_ov000_02163350(p) + 0x61c);
    if (v - 9u <= 2u) {
        return 1;
    }
    return 0;
}
