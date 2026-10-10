#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad;
    uint32_t *reg;
} Obj;

extern uint32_t func_ov006_021b1430(void);
extern void func_ov006_021a64c8(void (*cb)(void));
extern void func_ov006_021aa7d4(void);
extern Obj *data_ov006_021bc784;

void func_ov006_021aae1c(void)
{
    if (func_ov006_021b1430() == 0) {
        uint32_t *r = data_ov006_021bc784->reg;
        *r = *r & 0xc1fffcffu;
        func_ov006_021a64c8(func_ov006_021aa7d4);
    }
}
