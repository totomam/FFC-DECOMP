#include "ffc/types.h"

extern uint32_t func_0201bcf4(void *object, uint32_t a, uint32_t b);
extern uint32_t func_0201bc54(const void *object, uint32_t index, uint32_t addend);

typedef struct {
    uint32_t pad[3];
    uint8_t *bytes;
} BitInner;

void func_0201bc64(void *object, uint32_t index, uint32_t addend, uint32_t set) {
    uint32_t volatile bit_spill;
    BitInner * volatile inner_spill;
    uint32_t bit;
    BitInner *inner;
    uint8_t *bytes;
    if (index == 0) {
        func_0201bcf4(object, addend, set);
        return;
    }
    bit = func_0201bc54(object, index, addend);
    bit_spill = bit;
    inner = *(BitInner **)((uint8_t *)object + 0x30);
    inner_spill = inner;
    
    if (set) {
        inner->bytes[bit >> 3] |= (uint8_t)(1u << (bit & 7));
    } else {
        inner->bytes[bit >> 3] &= (uint8_t)~(1u << (bit & 7));
    }
}
