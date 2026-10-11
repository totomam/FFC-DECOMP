#include "ffc/types.h"

extern void *data_ov000_0217008c[];
extern void *func_ov001_02180840(void *p);

int func_ov000_0215b778(int x) {
    int i;
    for (i = 0; i < 0x20; i++) {
        void *p = data_ov000_0217008c[i];
        if (p != 0) {
            if (x == ((uint8_t *)func_ov001_02180840(p))[1]) {
                return 1;
            }
        }
    }
    return 0;
}
