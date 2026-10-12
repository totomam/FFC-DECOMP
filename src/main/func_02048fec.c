#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t *func_020424e0(void *p);
extern uint32_t func_ov003_021498fc(void);
extern uint32_t data_020afe54[];
extern uint32_t data_020afea0[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void *func_02048fec(void *a, void *b) {
    uint32_t *self = (uint32_t *)a;
    uint32_t *p;
    Pair *src;

    func_02056c9c(a, 0);
    self[0] = (uint32_t)data_020afe54;
    self[0x22] = 0;
    self[0x23] = 0;
    self[0x24] = 0;
    self[0x25] = (uint32_t)b;
    p = func_020424e0(b);
    self[0x23] = p[0x1f0 / 4];
    func_020424e0((void *)self[0x25]);
    self[0x24] = func_ov003_021498fc();
    src = (Pair *)data_020afea0;
    *(Pair *)(self + 0x20) = *src;
    return a;
}
