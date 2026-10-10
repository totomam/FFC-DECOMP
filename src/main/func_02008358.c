#include "ffc/types.h"

extern int32_t func_02008340(int32_t a);
extern uint8_t data_020a7eb8[];

void *func_02008358(int32_t a) {
    if (func_02008340(a)) {
        return &data_020a7eb8[a * 8];
    }
    return 0;
}
