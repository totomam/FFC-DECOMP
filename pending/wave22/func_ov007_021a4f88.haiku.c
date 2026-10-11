#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void func_020559d4(void *p);
extern uint32_t data_ov007_021c4260[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov007_021a4f88(void *self) {
    uint8_t *p = (uint8_t *)self;
    if (func_0206cb98(*(void **)(p + 0xc8))) {
        *(Pair *)(p + 0xb8) = *(Pair *)data_ov007_021c4260;
        return;
    }
    func_020559d4(p + 0x80);
}
