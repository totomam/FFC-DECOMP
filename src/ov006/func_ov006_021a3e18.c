#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_ov006_021a3b88(void *a, void *b);
extern int func_ov006_021a6530(void);
extern uint32_t data_ov006_021bc6f4;
extern uint32_t data_ov006_021b8ec0;
extern void func_020829b8(void);
extern Pair data_ov006_021b8e70;
extern void func_02082738(void);

void func_ov006_021a3e18(void) {
    int r;
    data_ov006_021bc6f4 = func_ov006_021b49e4(0xc0, 4);
    func_ov006_021a3b88(&data_ov006_021b8ec0, (void *)func_020829b8);
    r = func_ov006_021a6530();
    switch (r) {
    case 0:
        func_ov006_021a3b88((void *)data_ov006_021b8e70.a, (void *)func_02082738);
        break;
    case 1:
        func_ov006_021a3b88((void *)data_ov006_021b8e70.b, (void *)func_02082738);
        break;
    }
}
