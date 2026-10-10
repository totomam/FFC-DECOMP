#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;

extern void *func_0206cbf4(void *);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4780;

void func_ov007_021a8ce0(uint8_t *self)
{
    void *node = func_0206cbf4(*(void **)(self + 0xc8));
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0xb8) = data_ov007_021c4780;
}
