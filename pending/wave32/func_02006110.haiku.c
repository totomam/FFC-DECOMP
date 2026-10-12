#include "ffc/types.h"

typedef struct {
    int8_t *data;
    int32_t len;
    uint8_t pad[4];
    uint8_t flag;
} FuncBits;

uint32_t func_02006110(FuncBits *s, int32_t idx)
{
    int8_t byte;
    uint32_t mask;
    int32_t bit;

    if (s->flag == 0) {
        return 0;
    }
    if (idx >= s->len) {
        return 0;
    }
    bit = idx % 8;
    mask = 1u << bit;
    byte = s->data[idx / 8];
    return (byte & mask) ? 1 : 0;
}
