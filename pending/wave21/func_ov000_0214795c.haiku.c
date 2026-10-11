#include "ffc/types.h"

extern uint8_t data_02141510[];
extern void func_ov000_0214b8e0(void *p);
extern void func_ov000_02147918(void *p);

void func_ov000_0214795c(void) {
    uint8_t *p;
    p = *(uint8_t **)(data_02141510 + 4);
    p = *(uint8_t **)(p + 0xa4);
    if (p != 0) {
        if (p[9] != 0) {
            func_ov000_0214b8e0(p);
        }
        func_ov000_02147918(p);
    }
}
