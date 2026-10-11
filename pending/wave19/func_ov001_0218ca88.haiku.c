#include "ffc/types.h"

extern void func_02037598(void *p);
extern void func_ov001_0218c454(void *p, int n);
extern uint32_t data_ov001_021948ac[2];

void func_ov001_0218ca88(void *p) {
    uint32_t a, b;
    func_02037598(p);
    func_ov001_0218c454(p, 4);
    a = data_ov001_021948ac[0];
    b = data_ov001_021948ac[1];
    *(uint32_t *)((uint8_t *)p + 0xb0) = a;
    *(uint32_t *)((uint8_t *)p + 0xb4) = b;
}
