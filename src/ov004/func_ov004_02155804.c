#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_020214b4(void);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02147140(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov004_02159d30;

void func_ov004_02155804(uint8_t *p)
{
    void *r1;

    *(uint8_t *)(p + 0x220) = 1;
    func_020214b4();
    r1 = func_0205681c(0x94);
    if (r1 != 0) {
        r1 = func_ov004_02147140(r1, p, p + 0x244);
    }
    func_02056bc0(*(void **)(p + 0x23c), r1);
    *(Pair *)(p + 0x94) = data_ov004_02159d30;
}
