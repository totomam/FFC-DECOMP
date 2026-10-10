#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void *p);

int func_ov000_02163a84(void *p) {
    int32_t v = *(int32_t *)(func_ov000_02163350(p) + 0x7b0);
    if (v == 2) {
        return 1;
    }
    return 0;
}
