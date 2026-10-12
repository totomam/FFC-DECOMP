#include "ffc/types.h"

extern void func_ov001_0218dff4(void *self, uint32_t a);
extern void func_ov001_0218e12c(void *self, uint32_t a);
extern void func_ov001_0218e134(void *self, uint32_t a);
extern void func_ov001_0218e13c(void *self, uint32_t a);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov007_021c5e68[];
typedef struct { uint32_t a, b; } P;
extern P data_ov007_021c5f6c;

void *func_ov007_021b1e30(void *self, uint32_t a, uint32_t b, uint8_t c)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t x;
    uint32_t y;
    void *p;

    func_ov001_0218dff4(self, a);
    *(uint32_t **)s = data_ov007_021c5e68;
    *(uint32_t *)(s + 0xbc) = b;
    *(uint8_t *)(s + 0xd0) = c;
    func_ov001_0218e12c(self, 1);
    func_ov001_0218e134(self, 1);
    func_ov001_0218e13c(self, 1);
    *(uint32_t *)(s + 0xc8) = 0xff;
    p = func_0205681c(0x204);
    if (p != 0) {
        *(uint32_t *)p = 0x02194a64;
    }
    *(void **)(s + 0xb8) = p;
    *(P *)(s + 0xb0) = data_ov007_021c5f6c;
    return self;
}
