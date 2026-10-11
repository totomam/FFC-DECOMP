#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b1058(void *p, void *a, void *b, void *c, int d);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c5c5c;

void func_ov007_021b0cb4(uint8_t *self)
{
    void *n = func_0205681c(0xc4);
    if (n) {
        n = func_ov007_021b1058(n, *(void **)(self + 0x88), *(void **)(self + 0x8c), self + 0x98, 2);
    }
    func_02056bc0(self + 0x14, n);
    *(Pair *)(self + 0x80) = data_ov007_021c5c5c;
}
