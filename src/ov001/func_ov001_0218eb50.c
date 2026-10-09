#include "ffc/types.h"

extern void func_020766a8(void *p);
extern uint8_t data_ov001_02194b10;

void *func_ov001_0218eb50(void **p) {
    func_020766a8(p);
    *p = &data_ov001_02194b10;
    return p;
}
