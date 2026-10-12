#include "ffc/types.h"

extern void *data_0213df18;
extern char data_ov010_021d2270[];
extern uint32_t func_0204f7ec(const void *object);
extern void func_02069528(void *obj, uint32_t v, uint32_t c, uint32_t d);
extern void func_ov010_021d075c(void *obj, uint32_t b, uint32_t c);

void *func_ov010_021caf0c(void *a)
{
    uint32_t v = func_0204f7ec(data_0213df18);
    uint32_t k;
    uint8_t tmp;

    func_02069528(a, v, 0, 0);
    *(void **)a = data_ov010_021d2270;
    *(uint32_t *)((uint8_t *)a + 0xdc) = 0;
    k = 0x69;
    *(uint32_t *)((uint8_t *)a + (k << 2)) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 4) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 8) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0xc) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x10) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x14) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x18) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x1c) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x20) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x24) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x28) = 0;
    *(uint8_t *)((uint8_t *)a + (k << 2) + 0x2c) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x30) = 0;
    *(uint8_t *)((uint8_t *)a + (k << 2) + 0x34) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x38) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x3c) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x40) = 0;
    *(uint32_t *)((uint8_t *)a + (k << 2) + 0x44) = 0;
    *(uint8_t *)((uint8_t *)a + (k << 2) + 0x4c) = 0;
    tmp = 0;
    func_ov010_021d075c(a, 0, tmp);
    return a;
}
