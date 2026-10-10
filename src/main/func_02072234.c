#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x10];
    uint32_t *table;
} FfcObj;

uint32_t func_02072234(const FfcObj *obj, uint32_t index) {
    return obj->table[index];
}
