#include "ffc/types.h"

extern void func_02060e88(uint32_t a, uint32_t b);
extern uint32_t func_02060e9c(void);

typedef struct {
    uint8_t pad0[0x14];
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
} S;

void func_020612c4(S *p) {
    if (p->f1c == 0) {
        func_02060e88(p->f14, p->f18);
        return;
    }
    if (func_02060e9c() != 0) {
        return;
    }
    if (p->f18 == 0) {
        p->f18 = 2;
    }
    func_02060e88(p->f14, p->f18);
}
