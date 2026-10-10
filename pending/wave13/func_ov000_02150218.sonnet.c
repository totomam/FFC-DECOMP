#include "ffc/types.h"

typedef void (*fn_t)(void);
extern fn_t data_ov000_0216e21c[];

void func_ov000_02150218(void) {
    fn_t f = data_ov000_0216e21c[10];
    if (f) {
        f();
    }
}
