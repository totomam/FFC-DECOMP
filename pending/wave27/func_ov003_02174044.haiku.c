#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217ba28[];
extern uint32_t data_ov003_0217ba38[];
extern uint32_t data_020aeb84;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

uint32_t *func_ov003_02174044(uint32_t *p, uint32_t a, uint32_t b) {
    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov003_0217ba28;
    p[32] = a;
    p[33] = b;
    p[34] = 0;
    *(Pair *)&p[39] = *(Pair *)data_ov003_0217ba38;
    if (data_020aeb84 != (uint32_t)-1) {
        p[33] = data_020aeb84;
    }
    return p;
}
