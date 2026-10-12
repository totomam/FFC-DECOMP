#include "ffc/types.h"

extern uint32_t data_ov010_021d2270;
extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_ov010_021d0798(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);

void *func_ov010_021cb014(uint8_t *p) {
    void *r4;

    *(void **)p = (void *)&data_ov010_021d2270;
    r4 = *(void **)(p + 0xdc);
    if (r4 != 0 && r4 != 0) {
        if (r4 != 0) {
            func_0205d620(r4);
            func_02056844(r4);
        }
        *(void **)(p + 0xdc) = 0;
    }
    func_ov010_021d0798(p + 0x1e0);
    func_0200d5ec(p + 0x1bc);
    func_0200d5ec(p + 0x1b0);
    func_0200d5ec(p + 0x1a4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
