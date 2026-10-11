#include "ffc/types.h"

extern int func_ov004_02153488(void *p);
extern int func_ov004_02153494(void *p);

int func_ov004_02153458(uint8_t *p) {
    if (*(uint32_t *)(p + 0xe4) != 0) {
        if (func_ov004_02153488(p) || func_ov004_02153494(p)) {
            return 1;
        }
        return 0;
    }
    return p[0xcd];
}
