#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint8_t *data_020b93b8;
extern void func_0201cf34(void *a, void *b);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t func_ov007_021bcdc0(uint32_t a, void *obj, void *b, void *c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c68fc[];

void func_ov007_021b4c98(uint8_t *obj)
{
    uint32_t tmp[0x26];
    uint32_t r1;

    if (*(uint32_t *)(data_020b93b8 + 0x1d0) == 0) {
        *(uint32_t *)(obj + 0xc4) = 0;
        func_0201cf34(data_020b93b8, tmp);
        *(uint32_t *)(obj + 0xe4) = (uint8_t)tmp[5];
        *(uint32_t *)(obj + 0x150) = 1;
        *(uint32_t *)(obj + 0x154) = 1;
        obj[0x564] = 0;
    } else {
        obj[0x564] = 0;
        r1 = func_0205681c(0x1dc);
        if (r1 != 0) {
            r1 = func_ov007_021bcdc0(r1, obj, obj + 0xc0, obj + 0x564, *(uint32_t *)(obj + 0xb8));
        }
        func_02056bc0(obj + 0x14, (void *)r1);
    }

    {
        *(Pair *)(obj + 0xb0) = *(Pair *)data_ov007_021c68fc;
    }
}
