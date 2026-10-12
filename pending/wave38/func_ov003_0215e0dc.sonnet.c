#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint32_t c; } Item;
typedef struct { uint8_t v; } Byte;
extern void func_0200d5d4(void *object, Item *ptr, Byte value);
void func_ov003_0215e0dc(uint8_t *obj, Item item)
{
    uint32_t z = 0;
    uint32_t n;
    if (*(volatile uint32_t *)(obj + 0xc8) < *(uint32_t *)(obj + 0xcc)) {
        n = *(volatile uint32_t *)(obj + 0xc8) + 1;
        *(uint32_t *)(obj + 0xc8) = n;
        (*(uint32_t **)(obj + 0xc4))[n - 1] = item.a;
        return;
    }
    {
        struct { uint8_t p; Byte q; } t;
        t.q.v = z;
        func_0200d5d4(obj + 0xc4, &item, t.q);
    }
}
