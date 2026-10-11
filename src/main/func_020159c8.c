#include "ffc/types.h"

extern void *data_020b8f64;
extern void *func_0205681c(uint32_t size);
extern void *func_020358c8(void *object);
extern uint32_t func_02035a40(void *obj, void *arg);

uint32_t func_020159c8(uint32_t unused, void *arg)
{
    void *p;
    (void)unused;
    if (data_020b8f64 == 0) {
        p = func_0205681c(0x10);
        if (p != 0) {
            p = func_020358c8(p);
        }
        data_020b8f64 = p;
    }
    return func_02035a40(data_020b8f64, arg);
}
