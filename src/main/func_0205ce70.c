#include "ffc/types.h"

extern int32_t data_020b0f50[];
extern int32_t data_020b0f4c[];

int32_t func_0205ce70(uint32_t i) {
    int32_t a = data_020b0f50[i * 2];
    int32_t b = data_020b0f4c[i * 2];
    return a * (b << 1);
}
