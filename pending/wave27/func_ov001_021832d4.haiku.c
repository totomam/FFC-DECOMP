#include "ffc/types.h"

extern uint32_t func_ov001_02182950(uint32_t a);
extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e);
extern void func_ov000_02165428(int a);
extern char data_ov001_02191f08[];
extern char data_ov001_02191f38[];

void func_ov001_021832d4(uint32_t a)
{
    uint32_t *p;

    p = (uint32_t *)func_ov001_02182950(a);
    if (p == 0) {
        func_ov000_021652a8(7, 4, 4, data_ov001_02191f08, a);
        return;
    }
    func_ov000_021652a8(7, 4, 8, data_ov001_02191f38, a);
    if (p[6] != (uint32_t)-1) {
        func_ov000_02165428(p[6]);
        p[6] = (uint32_t)-1;
    }
    p[7] = 6;
}
