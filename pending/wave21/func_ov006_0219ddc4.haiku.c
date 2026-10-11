#include "ffc/types.h"

extern int32_t data_ov006_021b8b20[];
extern int32_t func_ov006_0219f6f4(int32_t p);

int32_t func_ov006_0219ddc4(int32_t p)
{
    if (p == -1) {
        data_ov006_021b8b20[1] = p;
        return 0;
    }
    if (data_ov006_021b8b20[1] != p) {
        data_ov006_021b8b20[1] = p;
        return func_ov006_0219f6f4(p);
    }
    return 0;
}
