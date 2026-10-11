#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void func_ov001_0218dff4(void *self, uint32_t arg);
extern uint8_t data_ov007_021c675c[];
extern P data_ov007_021c68f4;

void *func_ov007_021b4c3c(void *self, uint32_t arg, uint32_t val)
{
    uint8_t *p = (uint8_t *)self;
    func_ov001_0218dff4(self, arg);
    *(uint8_t **)p = data_ov007_021c675c;
    *(uint32_t *)(p + 0xb8) = val;
    p[0x564] = 0;
    *(P *)(p + 0xb0) = data_ov007_021c68f4;
    return self;
}
