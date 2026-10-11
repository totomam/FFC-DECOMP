#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *data_020b8e44;
extern void func_02019d58(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4368;

void func_ov007_021a6564(uint8_t *a)
{
    uint8_t *p6;
    void *n1;

    func_02019d58(data_020b8e44, a + 0x88, a + 0x8c);
    n1 = *(void **)(a + 0x8c);
    p6 = a + 0x48;
    func_02056bc0(p6, *(void **)(a + 0x88));
    func_02056bc0(p6, n1);
    *(uint32_t *)(a + 0x94) = 2;
    *(Pair *)(a + 0x80) = data_ov007_021c4368;
}
