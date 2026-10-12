#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int func_ov000_02160f48(uint32_t v);
extern int func_ov000_02163408(void);
extern int func_ov000_0216376c(void);
extern uint64_t func_020882cc(void);
extern void func_ov000_0216335c(int v);
extern int func_ov000_021604bc(uint32_t v);

int func_ov000_021613f0(void)
{
    uint8_t *p = func_ov000_02163350();
    uint32_t v = *(uint32_t *)(p + 0x650);

    if (func_ov000_02160f48(v) == 0) {
        return 0;
    }
    if (func_ov000_02163408() > 1 || func_ov000_0216376c() != 0) {
        uint64_t r = func_020882cc();
        uint32_t off = 0x658;
        p = func_ov000_02163350();
        *(uint32_t *)(p + off) = (uint32_t)r;
        off += 4;
        *(uint32_t *)(p + off) = (uint32_t)(r >> 32);
        func_ov000_0216335c(0x17);
    } else {
        p = func_ov000_02163350();
        if (func_ov000_021604bc(*(uint32_t *)(p + 0x680)) == 0) {
            return 0;
        }
    }
    return 1;
}
