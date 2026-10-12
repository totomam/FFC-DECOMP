#include "ffc/types.h"

extern uint32_t func_0204aca8(uint32_t a);
extern uint32_t func_0204b280(void *p, uint32_t a, uint32_t b);
extern uint32_t func_0204b1bc(void *p, uint32_t a, uint32_t b, uint32_t c);

uint32_t func_0204b334(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t ret = 0;
    uint32_t val = 0;

    if (*(uint32_t *)(p + 4) != 0) {
        return ret;
    }
    if (*(uint32_t *)(p + 0x10) != 0) {
        return ret;
    }
    if (a3 != 0) {
        val = func_0204aca8(a3);
    }
    if (func_0204b280(p, a3, val) != 0) {
        ret = func_0204b1bc(p + 0x34, a1, a2, a3);
        if (ret != 0) {
            uint32_t *inner = *(uint32_t **)(*(uint32_t *)(p + 0x34));
            inner[4] = val;
        }
    }
    return ret;
}
