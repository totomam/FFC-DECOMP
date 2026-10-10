#include "ffc/types.h"

extern void *func_ov000_0214f1a4(int kind, void *args, void *dst, int size);
extern uint8_t data_ov000_0216e0b8[];

void *func_ov000_0214f148(int a, int b, int c, int d) {
    void *p = data_ov000_0216e0b8;
    func_ov000_0214f1a4(2, &a, p, 0x10);
    return p;
}
