#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int32_t func_ov004_0214f7d4(void *p);
extern void func_01ffe554(void *o);
extern void func_01ffd834(void *o, uint32_t a, uint32_t b);
extern void func_02021338(uint32_t x);
extern Pair data_ov004_02159694;
extern Pair data_ov004_0215969c;

void func_ov004_0214f878(uint8_t *p)
{
    void *a;
    void **vt;

    a = *(void **)(p + 0x90);
    vt = *(void ***)a;
    ((void (*)(void *, int))vt[8])(a, 0);

    a = *(void **)(p + 0x90);
    vt = *(void ***)a;
    ((void (*)(void *))vt[10])(a);

    if (func_ov004_0214f7d4(p) != 0) {
        *(uint32_t *)(p + 0xe8) = 0;
        *(uint32_t *)(p + 0xec) = 1 << 14;
        func_01ffe554(*(void **)(p + 0x90));
        func_01ffd834(*(void **)(p + 0x90), 0, 0);
        *(Pair *)(p + 0x80) = data_ov004_02159694;
        return;
    }

    *(uint32_t *)(p + 0xe8) = 3 << 18;
    *(uint32_t *)(p + 0xec) = 0xfffeb000;
    func_02021338(0x9d);
    *(Pair *)(p + 0x80) = data_ov004_0215969c;
}
