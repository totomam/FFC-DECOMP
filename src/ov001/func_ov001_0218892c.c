#include "ffc/types.h"

extern uint32_t data_ov001_021957d4[];
extern uint8_t data_ov001_02195798[];

void func_ov001_0218892c(void) {
    int i;
    for (i = 0; i < 3; i++) {
        uint32_t v = data_ov001_021957d4[i];
        if (v != 0) {
            void (*fn)(uint32_t) = *(void (**)(uint32_t))(data_ov001_02195798 + 0x14);
            fn(v);
            data_ov001_021957d4[i] = 0;
        }
    }
}
