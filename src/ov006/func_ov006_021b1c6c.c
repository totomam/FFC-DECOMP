#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
} S;

extern int func_ov006_021996b4(int x);
extern S *data_ov006_021bc7fc;

int func_ov006_021b1c6c(void) {
    uint16_t i;
    if (data_ov006_021bc7fc->b == 0) {
        return 0;
    }
    for (i = 1; i < 16; i++) {
        if (data_ov006_021bc7fc->b & (1 << i)) {
            if (!func_ov006_021996b4(i)) {
                return 0;
            }
        }
    }
    return 1;
}
