#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x1c];
    uint8_t *base;
} S1;

typedef struct {
    uint8_t pad[4];
    uint8_t b4;
    uint8_t b5;
    uint8_t b6;
} S2;

extern S1 data_ov006_021ba0a8;
extern S2 data_ov006_021ba0c8;

void func_ov006_0219b2a4(void)
{
    uint32_t off = 0x4b;
    off <<= 4;
    *(uint16_t *)(data_ov006_021ba0a8.base + off) = 1;
    off += 4;
    data_ov006_021ba0c8.b6 = data_ov006_021ba0a8.base[off];
    data_ov006_021ba0c8.b4 = 5;
}
