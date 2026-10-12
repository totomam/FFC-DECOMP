#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern int func_0206cb98(void *p);
extern uint32_t func_ov013_021be768(void *obj, uint32_t a, uint32_t b, int c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov013_021c4308;
extern Pair data_ov013_021c4310;
extern Pair data_ov013_021c4318;

void func_ov013_021be700(uint8_t *obj) {
    Pair *d;
    uint32_t r;
    uint32_t i;

    if (func_0206cb98(*(void **)(obj + 0xf4)) != 0) {
        *(Pair *)(obj + 0xb8) = data_ov013_021c4308;
        return;
    }
    for (i = 0; i < 4; i++) {
        obj[0x11c + i] = 0;
    }
    r = func_ov013_021be768(obj, data_ov013_021c4310.a, data_ov013_021c4310.b, 1);
    func_02056bc0(obj + 0x14, (void *)r);
    *(Pair *)(obj + 0xb8) = data_ov013_021c4318;
}
