#include "ffc/types.h"

extern void func_ov006_021a64e0(int *out, int flag, uint32_t c, uint32_t d);
extern void func_ov006_021b0660(void *p);
extern void func_ov006_021b09cc(void *p);

void func_ov006_021a3bb0(void *a, int b, uint32_t c, uint32_t d)
{
    int x;
    func_ov006_021a64e0(&x, 0, c, d);
    if (x == 1) {
        func_ov006_021b0660(a);
        return;
    }
    if (x == 2) {
        func_ov006_021b09cc(a);
    }
}
