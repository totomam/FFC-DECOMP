#include "ffc/types.h"
extern void func_0205681c(void *p);
void func_0209ce3c(void *p, int n) {
    uint32_t buf[12];
    uint32_t vla[n];
    buf[11] = (uint32_t)buf;
    func_0205681c(p);
}
