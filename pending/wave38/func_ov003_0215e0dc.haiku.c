#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Item;

typedef struct {
    uint8_t v;
} Byte;

extern void func_0200d5d4(void *object, Item *ptr, Byte value);

void func_ov003_0215e0dc(uint8_t *obj, Item item)
{
    uint32_t n;
    if (*(uint32_t *)(obj + 0xc8) < *(uint32_t *)(obj + 0xcc)) {
        uint32_t *buf;
        n = *(uint32_t *)(obj + 0xc8) + 1;
        *(uint32_t *)(obj + 0xc8) = n;
        buf = *(uint32_t **)(obj + 0xc4);
        buf[n - 1] = item.a;
        return;
    }
    {
        Byte flag;
        flag.v = 0;
        func_0200d5d4(obj + 0xc4, &item, flag);
    }
}
