#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern void *func_ov000_021686f4(uint32_t size, uint32_t align, void (*cb)(void));
extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);
extern void func_ov000_021680b4(void *p);
extern char data_ov000_0216bad4[];
extern void func_ov000_02167430(void);
extern char data_ov000_0216bb08[];
extern void func_ov000_02167434(void);

void *func_ov000_02167300(void)
{
    void **p;

    p = func_ov000_021653d4(0x14);
    if (p == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216bad4, 0x14);
        return 0;
    }
    p[0] = func_ov000_021686f4(0x18, 0x20, func_ov000_02167430);
    if (p[0] == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216bb08);
        func_ov000_021653f4(p);
        return 0;
    }
    p[1] = func_ov000_021686f4(0x18, 0x10, func_ov000_02167434);
    if (p[1] == 0) {
        func_ov000_021652a8(12, 2, 1, data_ov000_0216bb08);
        func_ov000_02168738(p[0]);
        func_ov000_021653f4(p);
        return 0;
    }
    func_ov000_021680b4(p);
    return p;
}
