#include "ffc/types.h"

typedef void (*FfcVirtualPairCall)(uint32_t *result, void *object);

typedef struct {
    uint8_t unknown_00[0x18];
    FfcVirtualPairCall call_18;
} FfcVirtualPairTable;

uint32_t func_02062898(void *object) {
    uint32_t result[2];
    FfcVirtualPairTable *table = *(FfcVirtualPairTable **)object;
    table->call_18(result, object);
    return result[1];
}
