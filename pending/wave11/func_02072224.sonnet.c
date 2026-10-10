#include "ffc/types.h"

extern uint32_t func_ov000_02159560(void *p);

typedef struct {
    uint8_t pad[0xc];
} Elem;

typedef struct {
    uint8_t pad[0xc];
    Elem *arr;
} Owner;

uint32_t func_02072224(Owner *o, uint32_t i) {
    return func_ov000_02159560((uint8_t *)o->arr + i * 12);
}
