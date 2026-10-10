#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x38];
    uint16_t *table;
} FfcObj38;

uint16_t func_0201ce20(const FfcObj38 *obj, uint32_t index) {
    return obj->table[index];
}
