#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b9fec(void *a, void *b, void *c, void *d, uint32_t e);
extern void *func_ov001_0218dde0(void *p, int x);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c7868[2];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov007_021bafa4(uint8_t *p) {
    void *r5 = func_0205681c(0x148);
    if (r5 != 0) {
        r5 = func_ov007_021b9fec(r5, p + 0xc0, p + 0xc4, p + 0xd8, *(uint32_t *)(p + 0x38bc));
    }
    void *obj = func_ov001_0218dde0(p, 1);
    func_02056bc0(obj, r5);
    *(Pair *)(p + 0xb0) = *(Pair *)data_ov007_021c7868;
}
