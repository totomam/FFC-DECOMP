#include "ffc/types.h"

extern void func_0205d620(void *p);
extern void func_02056844(void *p);
extern void func_ov010_021d0798(void *p);
extern void func_0200d5ec(void *p);
extern void func_020695d0(void *p);
extern uint8_t data_ov010_021d2270[];

void *func_ov010_021cafb4(void *p) {
    uint8_t *s = (uint8_t *)p;
    void *v;

    *(void **)s = data_ov010_021d2270;
    v = *(void **)(s + 0xdc);
    if (v == 0 || v == 0) {
        goto skip;
    }
    if (v == 0) {
        goto clear;
    }
    func_0205d620(v);
    func_02056844(v);
clear:
    *(void **)(s + 0xdc) = 0;
skip:
    func_ov010_021d0798(s + 0x1e0);
    func_0200d5ec(s + 0x1bc);
    func_0200d5ec(s + 0x1b0);
    func_0200d5ec(s + 0x1a4);
    func_020695d0(s);
    return s;
}
