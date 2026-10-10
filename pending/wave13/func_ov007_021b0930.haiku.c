#include "ffc/types.h"

extern void func_ov001_0218e724(void *object);
extern uint32_t func_ov001_0218e14c(void *object, uint32_t value);

uint32_t func_ov007_021b0930(void *object, uint32_t value) {
    func_ov001_0218e724(object);
    return func_ov001_0218e14c(value, 1);
}
