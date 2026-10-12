#include "ffc/types.h"

extern void func_ov003_02174e74(void *p, int n);
extern uint32_t data_020aeb84;

void func_ov003_02174388(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint32_t v = *(uint32_t *)(b + 0x88);
    if (v == 1) {
        func_ov003_02174e74(p, 3);
        return;
    }
    if (v == *(uint32_t *)(b + 0x8c)) {
        func_ov003_02174e74(p, 4);
        return;
    }
    if (v == *(uint32_t *)(b + 0x90)) {
        *(uint32_t *)(b + 0x94) = 0;
        data_020aeb84 = *(uint32_t *)(b + 0x84);
        func_ov003_02174e74(p, 5);
        return;
    }
    if (v == (uint32_t)-2) {
        func_ov003_02174e74(p, 7);
    }
}
