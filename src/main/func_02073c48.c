#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_020b2438[];
extern Pair data_020a6630;
extern Pair data_020b2598;

uint32_t *func_02073c48(uint32_t *self, uint32_t arg) {
    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_020b2438;
    self[0x20] = arg;
    self[0x21] = 0;
    self[0x22] = 0;
    *(Pair *)&self[0x24] = data_020a6630;
    *(Pair *)&self[0x24] = data_020b2598;
    return self;
}
