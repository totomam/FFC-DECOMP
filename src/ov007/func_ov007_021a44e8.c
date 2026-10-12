#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern int func_0206cdf0(int a, uint16_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c41e0[2];

void func_ov007_021a44e8(uint8_t *obj, uint8_t *node)
{
    switch (*(uint32_t *)(node + 0xc)) {
    case 5:
        *(uint16_t *)(obj + 0xcc) = *(uint16_t *)(node + 0x10);
        func_02084ca4(node + 0x12, obj + 0xd0, 0x18);
        if (*(uint32_t *)(obj + 0xd0) != 1) {
            int r = func_0206cdf0(*(int *)(obj + 0xc0), *(uint16_t *)(obj + 0xcc));
            func_02056bc0(obj + 0x14, (void *)r);
            return;
        }
        *(Pair *)(obj + 0xb8) = *(Pair *)data_ov007_021c41e0;
        return;
    case 6:
        obj[0xed] = 1;
        break;
    }
}
