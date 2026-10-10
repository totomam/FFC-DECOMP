#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t *table;
} FfcTableObj;

uint32_t func_02005fc8(const FfcTableObj *obj, uint32_t index) {
    return obj->table[index];
}
