#include "ffc/types.h"

extern int32_t func_ov006_0219fb98(void);
extern int32_t func_02087508(void *obj, void *out, int32_t n);
extern uint8_t data_ov006_021bafe0[];

int32_t func_ov006_0219f36c(void)
{
    int32_t ret = -1;
    int32_t val;
    int32_t flag;

    if (func_ov006_0219fb98() != 0) {
        do {
            func_02087508(data_ov006_021bafe0, &val, 1);
            if (val == 0xe) {
                flag = 0;
                ret = flag;
            } else {
                flag = 0;
            }
        } while (flag);
    }
    return ret;
}
