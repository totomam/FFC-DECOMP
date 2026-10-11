#include "ffc/types.h"

extern uint32_t func_0201bd84(const void *object, uint32_t addend);
extern uint32_t func_0201bc54(const void *object, uint32_t index, uint32_t addend);

typedef struct {
    uint8_t pad[0xc];
    uint8_t *bits;
} BitTable;

typedef struct {
    uint8_t pad[0x30];
    BitTable *table;
} Owner;

uint32_t func_0201bcc0(const void *object, uint32_t index, uint32_t addend)
{
    if (index == 0) {
        return func_0201bd84(object, addend);
    }
    uint32_t v = func_0201bc54(object, index, addend);
    uint32_t bit = 1u << (v & 7);
    uint32_t result = 1;
    if (!(((const Owner *)object)->table->bits[v >> 3] & bit)) {
        result = 0;
    }
    return result;
}
