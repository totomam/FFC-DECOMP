#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t);
extern void *func_020358c8(void *object);
extern void *data_020b8f64;

void *func_02014f98(void) {
    if (data_020b8f64 == 0) {
        void *p = (void *)func_0205681c(0x10);
        if (p != 0) {
            p = func_020358c8(p);
        }
        data_020b8f64 = p;
    }
    return data_020b8f64;
}
