#include "ffc/types.h"

extern void func_0208359c(void *x);
extern uint8_t data_ov014_02155a5c;

void *func_ov014_02147050(void **p) {
    void *d = &data_ov014_02155a5c;
    *p = d;
    func_0208359c(d);
    return p;
}
