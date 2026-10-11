#include "ffc/types.h"

extern void func_02084e04(void *dst, const void *src, uint32_t n);
extern int func_ov000_021502c4(uint8_t *a, uint8_t *b, int c, int d, int e);
extern uint8_t data_ov000_021697e8[];
extern uint8_t data_ov000_0216bc60[];

void func_ov000_02145834(uint8_t *a, int b, int c, int d)
{
    uint8_t flag;
    int r;

    func_02084e04(data_ov000_021697e8, a + 6, 6);
    r = func_ov000_021502c4(a, a + 6, b - 6, c, d);
    flag = 1;
    if (r >= 0) {
        flag = 0;
    }
    data_ov000_0216bc60[0] = flag;
}
