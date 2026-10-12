#include "ffc/types.h"

extern int func_ov001_0217c148(void *p, void *a, uint32_t b, uint32_t d);
extern uint32_t func_ov000_0214f148(void *a);
extern void func_ov000_021652a8(int a, int b, int c, void *f, uint32_t d, uint32_t e);
extern int data_ov001_02191198;
extern int data_ov001_021911c0;
extern int data_ov001_021911ec;

void func_ov001_0217c560(void *a, uint32_t b, uint32_t c, uint32_t d, void *e)
{
    int r;
    uint32_t t;

    r = func_ov001_0217c148(e, a, b, d);
    if (r == 0) {
        t = func_ov000_0214f148(a);
        func_ov000_021652a8(1, 0, 1, &data_ov001_02191198, t, b);
    } else if (d != 0) {
        *(int *)r = 0x6a;
        t = func_ov000_0214f148(a);
        func_ov000_021652a8(1, 0, 8, &data_ov001_021911c0, t, b);
        return;
    }
    t = func_ov000_0214f148(a);
    func_ov000_021652a8(1, 0, 8, &data_ov001_021911ec, t, b);
}
