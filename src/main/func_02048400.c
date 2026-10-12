#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov003_021721d0(void *obj, uint32_t a, uint32_t b, void *c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020afce0[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_02048400(uint8_t *p)
{
    void *n = func_0205681c(0x9c);
    if (n != 0) {
        n = func_ov003_021721d0(n, *(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x8c), p + 0x90);
    }
    func_02056bc0(p + 0x14, n);
    *(Pair *)(p + 0x80) = *(Pair *)data_020afce0;
}
