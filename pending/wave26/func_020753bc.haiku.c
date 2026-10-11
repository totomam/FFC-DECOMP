#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02074a38(void *obj);
extern uint32_t func_0207240c(void *obj);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020b26c8;

void func_020753bc(uint8_t *p)
{
    uint8_t *inner;
    uint32_t v;

    func_02074a38(*(void **)(p + 0x88));
    inner = *(uint8_t **)(p + 0x88);
    v = func_0207240c(*(void **)(inner + 0x28));
    func_02056bc0(p + 0x14, (void *)v);
    *(Pair *)(p + 0x80) = data_020b26c8;
}
