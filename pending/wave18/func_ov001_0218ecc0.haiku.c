#include "ffc/types.h"

extern uint32_t *data_020b8e44;
extern uint32_t func_02076404(uint32_t);
extern void func_ov001_0218ece4(void *, void *, int32_t);

void func_ov001_0218ecc0(void *a, void *b) {
    func_ov001_0218ece4(a, b, -(int32_t)func_02076404(*data_020b8e44));
}
