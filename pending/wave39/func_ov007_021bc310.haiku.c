#include "ffc/types.h"

extern void func_ov001_0218dff4(uint8_t *self, void *a1, uint32_t a2, uint8_t *a3);
extern char data_ov007_021c8110[];
typedef struct { uint32_t pad[2]; uint32_t a; uint32_t b; } GData;
extern char data_ov007_021c7b34[];

uint8_t *func_ov007_021bc310(uint8_t *self, void *a1, uint32_t a2, uint8_t *a3, uint8_t *a4)
{
    func_ov001_0218dff4(self, a1, a2, a3);
    *(char **)self = data_ov007_021c8110;
    *(uint32_t *)(self + 0xb0) = a2;
    *(uint8_t *)(self + 0xb4) = 0;
    *(uint8_t *)(self + 0xb5) = 0;
    *(uint32_t *)(self + 0xb8) = 0;
    *(uint32_t *)(self + 0xbc) = 0;
    *(uint8_t **)(self + 0xc0) = a3;
    *(uint8_t **)(self + 0xc4) = a4;
    *(uint8_t *)(self + 0x1d0) = 0;
    if (a3 != 0) {
        *a3 = 0;
    }
    if (*(uint8_t **)(self + 0xc4) != 0) {
        **(uint8_t **)(self + 0xc4) = 0;
    }
    {
        uint32_t *d = (uint32_t *)data_ov007_021c7b34;
        uint32_t x = d[2];
        uint32_t y = d[3];
        *(uint32_t *)(self + 0xc8) = x;
        *(uint32_t *)(self + 0xcc) = y;
    }
    return self;
}
