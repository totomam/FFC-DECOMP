#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov013_021c32e4(void *obj, void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4250;

void func_ov013_021bd90c(uint8_t *p)
{
    void *n = func_0205681c(0x9c);
    if (n) {
        n = func_ov013_021c32e4(n, p, p + 0xd4);
    }
    func_02056bc0(p + 0x14, n);
    *(Pair *)(p + 0xb8) = data_ov013_021c4250;
}
