#include "ffc/types.h"

extern int32_t func_ov006_0219f6f4(int32_t x);
extern uint32_t data_ov006_021b8b20[];

int32_t func_ov006_0219ddc4(int32_t a) {
    if (a == -1) {
        data_ov006_021b8b20[1] = a;
        return 0;
    }
    if (data_ov006_021b8b20[1] != a) {
        data_ov006_021b8b20[1] = a;
        return func_ov006_0219f6f4(a);
    }
    return 0;
}
