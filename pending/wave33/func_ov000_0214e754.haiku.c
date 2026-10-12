#include "ffc/types.h"

extern uint32_t data_ov000_0216e010;
extern uint32_t data_ov000_0216bcb0;
extern void *data_ov000_02169a34;
extern uint32_t data_ov000_0216e01c[8];
extern int32_t func_ov000_0214e848(void);
extern void func_020871d8(int32_t);
extern int32_t func_ov000_0214d190(void);
extern void func_ov000_0214e7bc(void);
extern void func_ov000_0214eab4(void);

typedef struct {
    uint8_t pad0[0x1c];
    void (*fn)(uint32_t);
    uint8_t pad1[8];
    uint32_t f28;
} Ctl;

int32_t func_ov000_0214e754(void)
{
    int32_t r4;
    Ctl *ctl;

    if (data_ov000_0216e010 == 0) {
        data_ov000_0216e010 = data_ov000_0216bcb0;
    }
    while (func_ov000_0214e848() == -26) {
        func_020871d8(100);
    }
    r4 = func_ov000_0214d190();
    if (r4 >= 0) {
        func_ov000_0214e7bc();
        ctl = (Ctl *)data_ov000_02169a34;
        if (ctl->f28 == 0) {
            ctl->fn(data_ov000_0216e01c[7]);
        }
        data_ov000_02169a34 = 0;
        func_ov000_0214eab4();
    }
    return r4;
}
