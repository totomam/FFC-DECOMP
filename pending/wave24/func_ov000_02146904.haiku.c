#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x1c];
    void *f1c;
} S;

extern uint32_t func_ov000_021468f0(void *a);
extern void func_ov000_021460b4(uint32_t a, uint32_t b, void *c, uint32_t d);
extern void func_ov000_02145764(void *a);
extern void func_ov000_02145ad0(void);
extern uint32_t data_02141510[];
extern uint32_t data_ov000_0216c098[];

void func_ov000_02146904(S *p, uint32_t b) {
    if (func_ov000_021468f0(p->f1c) != 0 || data_02141510[1] != (uint32_t)data_ov000_0216c098) {
        func_ov000_021460b4(0, 0, p, b);
        return;
    }
    func_ov000_02145764(p->f1c);
    func_ov000_02145ad0();
}
