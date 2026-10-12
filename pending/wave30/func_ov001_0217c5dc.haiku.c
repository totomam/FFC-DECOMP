#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t data_ov001_02191218[];
extern uint32_t data_ov001_02191234[];

void func_ov001_0217c5dc(uint32_t *p, uint32_t v)
{
    uint32_t *a;
    uint32_t *b;

    if (p == 0 || v == 0) {
        func_ov000_021652a8(1, 4, 2, data_ov001_02191218);
        return;
    }
    if (p[0x10] == 0) {
        p[0x11] = v;
        p[0x12] = v;
        p[0x10] = v;
    } else {
        b = (uint32_t *)p[0x12];
        a = (uint32_t *)p[0x11];
        if (a == b) {
            a[3] = v;
        } else {
            b[3] = v;
        }
        p[0x12] = v;
    }
    func_ov000_021652a8(1, 4, 8, data_ov001_02191234);
}
