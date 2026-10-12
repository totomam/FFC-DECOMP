#include "ffc/types.h"

extern int func_0206cb98(void *p);
extern void func_020559d4(void *p);
extern uint32_t func_0206cb80(void *p);
extern uint32_t data_ov013_021c4320[];
extern uint32_t data_ov013_021c4328[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov013_021be9a0(uint8_t *self)
{
    Pair tmp;
    uint32_t i;
    uint32_t n;
    int ok;

    if (func_0206cb98(*(void **)(self + 0xf4)) != 0) {
        tmp = *(Pair *)data_ov013_021c4320;
        *(Pair *)(self + 0xb8) = tmp;
        return;
    }

    func_020559d4(self + 0x80);

    ok = 1;
    i = 1;
    n = func_0206cb80(*(void **)(self + 0xf4));
    if (n > 1) {
        do {
            if (self[0x11c + i] == 0) {
                ok = 0;
                break;
            }
            i++;
            n = func_0206cb80(*(void **)(self + 0xf4));
        } while (i < n);
    }

    if (ok) {
        tmp = *(Pair *)data_ov013_021c4328;
        *(Pair *)(self + 0xb8) = tmp;
    }
}
