#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b688(void);
extern void *func_ov003_021462d8(void *a, Pair s);
extern void *func_ov003_02178080(void *p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov003_021799ac;

void *func_ov003_0214de14(void *a) {
    void *r4;
    void *r6;
    void *r1;
    uint8_t *p = (uint8_t *)a;

    r4 = func_0203b688();
    if (*(void **)(p + 0x414) != 0) {
        r6 = func_ov003_021462d8(a, data_ov003_021799ac);
        r1 = func_ov003_02178080(*(void **)(p + 0x414));
        func_02056bc0(r4, r1);
        func_02056bc0(r4, r6);
    }
    return r4;
}
