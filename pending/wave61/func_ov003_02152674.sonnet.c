#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern Pair data_ov003_02179eec;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_ov003_0214a0f0(void *self, Pair pr, void *p);
extern void func_02056bc0(void *object, void *node);
extern void func_ov003_021526d4(void *self, void *p);
void func_ov003_02152674(uint8_t *self, void *p) {
    uint8_t *o = *(uint8_t **)(self + 0xa0);
    uint8_t f = o[0x12];
    uint8_t *q = o + 0x1c;
    int z;
    if (f) func_0208763c(q);
    z = 0;
    if (*(uint32_t *)(o + 0x14) == 0) z = 1;
    if (f) func_02087678(q);
    if (z == 0) {
        void *r = func_ov003_0214a0f0(self, data_ov003_02179eec, p);
        func_02056bc0(*(void **)(self + 0xa0), r);
        return;
    }
    func_ov003_021526d4(self, p);
}
