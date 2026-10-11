#include "ffc/types.h"

extern void func_ov006_021a64e0(uint32_t a, int32_t *b);
extern void func_ov006_021a3688(void *p);

void func_ov006_021a3bdc(void *p) {
    int32_t v;
    func_ov006_021a64e0(0, &v);
    if (v == 1) {
        func_ov006_021a3688(p);
    }
}
