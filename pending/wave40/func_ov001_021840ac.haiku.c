#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern void func_ov001_02185228(void *p, int n);
extern void func_ov000_02165428(void);
extern void func_ov000_02165918(uint32_t v);
extern void func_ov001_02182a18(uint32_t v);
extern void func_ov000_021653f4(void *p);
extern uint8_t data_ov001_02193750[];
extern uint32_t *data_ov001_021926dc;
extern uint8_t data_ov001_021926e0[];

void func_ov001_021840ac(uint32_t *p)
{
    func_ov000_021652a8(3, 0, 0x40, data_ov001_02193750);
    if (p == 0) {
        p = data_ov001_021926dc;
    }
    if (p[0x31] != 0) {
        func_ov001_02185228(p, 2);
    }
    if (p[0] != 0xFFFFFFFFu && p[0x33] != 0) {
        func_ov000_02165428();
    }
    p[0] = 0xFFFFFFFFu;
    p[0x2d] = 0;
    if (p[0x33] != 0) {
        func_ov000_02165918(p[0x33]);
    }
    if (p[0x2b] != 0) {
        func_ov001_02182a18(p[0x2b]);
    }
    if ((void *)p != (void *)data_ov001_021926e0) {
        func_ov000_021653f4(p);
    }
}
