#include "ffc/types.h"

extern void *data_0213df18;
extern uint32_t func_0204f7ec(const void *object);
extern void func_02069528(void *obj, uint32_t v, uint32_t a, uint32_t b);
extern uint32_t data_ov010_021d137c[];

void *func_ov010_021bd420(uint8_t *obj, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4)
{
    uint32_t v = func_0204f7ec(data_0213df18);
    func_02069528(obj, v, 0, 0);
    *(uint32_t **)obj = data_ov010_021d137c;
    *(uint32_t *)(obj + 0xb8) = 0;
    *(uint32_t *)(obj + 0xbc) = 0;
    *(uint32_t *)(obj + 0xc0) = 0;
    *(uint32_t *)(obj + 0xd4) = 0;
    *(uint32_t *)(obj + 0xd8) = 0;
    *(uint32_t *)(obj + 0xdc) = 0;
    *(uint32_t *)(obj + 0xe0) = p1;
    *(uint32_t *)(obj + 0xe4) = p2;
    *(uint32_t *)(obj + 0xe8) = p3;
    *(uint32_t *)(obj + 0xec) = 0;
    *(uint32_t *)(obj + 0xf0) = 0;
    *(uint32_t *)(obj + 0xf4) = 0;
    *(uint32_t *)(obj + 0xf8) = 0;
    *(uint32_t *)(obj + 0xfc) = 0;
    *(uint32_t *)(obj + 0x104) = p4;
    {
        uint32_t i;
        for (i = 0; i < 4; i++) {
            *(uint32_t *)(obj + 0xc4 + i * 4) = 0;
        }
    }
    return obj;
}
