#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x34];
    uint32_t *table;
} FfcObj;

uint32_t func_0201c218(const FfcObj *obj, uint32_t index) {
    return obj->table[index];
}
