#include "ffc/types.h"

extern uint32_t func_02060c24(uint32_t a);
extern void func_02060ad4(uint32_t a, uint32_t b);
extern uint32_t func_02060c28(uint32_t a);

typedef struct {
    uint8_t pad[0x40];
    uint32_t f40;
} S;

void func_0206b014(S *p, uint32_t v) {
    func_02060ad4(func_02060c24(p->f40), v);
    func_02060ad4(func_02060c28(p->f40), v);
}
