#include "ffc/types.h"

extern void func_0205d620(void *obj);
extern void func_02056844(void *obj);
extern void *func_02035fd0(void *object);
extern void func_020695d0(void *obj);
extern uint8_t data_ov011_021cb330[];

void *func_ov011_021c38e8(uint8_t *p)
{
    void *x;
    int i;
    int off;
    *(void **)p = (void *)data_ov011_021cb330;
    for (i = 0; i < 5; i++) {
        off = i << 2;
        x = *(void **)(p + off + 0xec);
        if (x) {
            if (x) {
                func_0205d620(x);
                func_02056844(x);
            }
            *(void **)(p + off + 0xec) = 0;
        }
    }
    off = 0x1d4;
    x = *(void **)(p + off);
    if (x) {
        func_02056844(x);
        *(void **)(p + off) = 0;
    }
    func_02035fd0(p + 0x168);
    func_02035fd0(p + 0x108);
    func_020695d0(p);
    return p;
}
