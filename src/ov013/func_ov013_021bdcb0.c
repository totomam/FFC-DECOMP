#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern int func_0206cb98(void *p);
extern void func_020559d4(void *p);
extern uint32_t func_0206cb80(void *p);
extern Pair data_ov013_021c4290;
extern Pair data_ov013_021c4298;
extern Pair data_ov013_021c42a0;

void func_ov013_021bdcb0(uint8_t *self)
{
    uint8_t flag;
    uint32_t i;

    if (func_0206cb98(*(void **)(self + 0xf4)) != 0) {
        *(Pair *)(self + 0xb8) = data_ov013_021c4290;
        return;
    }

    func_020559d4(self + 0x80);

    flag = 1;
    if (self[0x100] == 0) {
        flag = 0;
    }

    for (i = 0; i < func_0206cb80(*(void **)(self + 0xf4)); i++) {
        if (self[i + 0x101] == 0) {
            flag = 0;
        }
    }

    if (flag) {
        if (((uint8_t *)(*(void **)(self + 0xc8)))[0x5c] == 0) {
            *(Pair *)(self + 0xb8) = data_ov013_021c4298;
            return;
        }
        *(Pair *)(self + 0xb8) = data_ov013_021c42a0;
    }
}
