#include "ffc/types.h"
extern int32_t func_02081210(int32_t a, int32_t b);
extern uint32_t func_020817c8(int32_t first, int32_t second);
typedef struct { uint8_t p[0xac]; int32_t a[4]; int32_t b[4][4]; } S;
void func_ov004_0214f6c0(uint32_t *out, S *s, int32_t i, int32_t j) {
    int32_t pad[8];
    int32_t a = s->a[i] << 12;
    int32_t k = 0x19 << 14;
    int32_t b = s->b[i][j] << 12;
    pad[0] = (int32_t)pad;
    *out = func_020817c8(func_02081210(b, a), k);
}
