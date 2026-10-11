#include "ffc/types.h"

extern int32_t func_ov000_0214f140(void);
extern int32_t func_ov006_0219f36c(void);

int32_t func_ov006_0219ef18(void) {
    if (func_ov000_0214f140() < 0) {
        return -1;
    }
    if (func_ov006_0219f36c()) {
        return -1;
    }
    return 0;
}
