#include "ffc/types.h"

extern uint32_t data_ov007_021c9bac[];

void func_ov007_021bff24(void) {
    if (data_ov007_021c9bac[5] == 0) {
        data_ov007_021c9bac[5] = 1;
        return;
    }
    data_ov007_021c9bac[5] = 0;
}
