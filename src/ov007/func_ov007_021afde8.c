#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void func_ov001_0218dff4(void *self, uint32_t v);
extern void func_ov001_0218e13c(void *self, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov007_021c58e8[];
extern Pair data_ov007_021c5aa4;

void *func_ov007_021afde8(void *self, uint32_t a1)
{
    uint8_t *p = (uint8_t *)self;
    void *r;
    uint32_t lo, hi;

    func_ov001_0218dff4(self, 0);
    *(uint32_t *)p = (uint32_t)data_ov007_021c58e8;
    *(uint32_t *)(p + 0xbc) = a1;
    func_ov001_0218e13c(self, 1);
    r = func_0205681c(0x204);
    if (r != 0) {
        *(uint32_t *)r = 0x02194a64;
    }
    *(void **)(p + 0xb8) = r;
    *(uint32_t *)(p + 0xc0) = 1;
    *(Pair *)(p + 0xb0) = data_ov007_021c5aa4;
    return self;
}
