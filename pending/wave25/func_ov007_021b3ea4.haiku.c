#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b829c(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c63d8;

void func_ov007_021b3ea4(uint8_t *self)
{
    void *n = func_0205681c(0x534);
    if (n) {
        n = func_ov007_021b829c(n, self);
    }
    func_02056bc0(self + 0x14, n);
    *(Pair *)(self + 0xb0) = data_ov007_021c63d8;
}
