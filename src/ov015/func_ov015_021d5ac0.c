/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t p0; uint32_t f4; uint32_t p8; uint32_t pc; uint32_t f10; } T;
extern T data_ov015_021d7984;
int func_ov015_021d5ac0(int a, int b, int c, int d) {
    uint8_t buf[0x10c];
    int n = 0x10;
    ((void (*)(void*, int, int))(data_ov015_021d7984.f10 - 0x3200))(buf, a, n);
    return -(((int (*)(void*, int, int, int))(data_ov015_021d7984.f4 - 0x3200))(buf, b, c, d) == n - 0x11);
}
