#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_020159c8(void *heap, uint32_t size);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void *func_0203bda0(Pair p, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);

void func_ov011_021c8880(void *param)
{
    Pair p;
    void *node;
    uint8_t *obj = (uint8_t *)param;

    p.a = 0x80;
    p.b = 0x60;
    node = func_0203bda0(p, func_020159c8(data_020b8e44, 0x91), 4, 0, 0);
    *(void **)(obj + 0x34c) = node;
    func_02056bc0(obj + 0x48, node);
}
