#include "ffc/types.h"

extern void func_02007278(void *p, uint32_t i);

typedef struct {
    uint8_t pad[0x24];
    uint32_t f24;
    uint8_t pad2[0x34 - 0x28];
    uint32_t f34;
} Obj;

void func_020071d4(Obj *p)
{
    int i;
    for (i = 0; i < 0x12; i++) {
        func_02007278(p, i);
    }
    p->f24 = 1;
    p->f34 = 0;
}
