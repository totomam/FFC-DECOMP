#include "ffc/types.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
} FfcFlagWord;

uint32_t func_02036838(const void *object) { return CONST_FIELD(FfcFlagWord, object, 0x30).flag; }
