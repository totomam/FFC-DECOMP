#include "ffc/types.h"

extern void func_ov000_0214d334(void *p);
extern uint8_t data_ov000_02169a58[];
extern uint8_t data_ov000_02169a40[];

void func_ov000_0214ed04(void *unused, int32_t mode) {
    if (mode == 1) {
        func_ov000_0214d334(data_ov000_02169a58);
        return;
    }
    func_ov000_0214d334(data_ov000_02169a40);
}
