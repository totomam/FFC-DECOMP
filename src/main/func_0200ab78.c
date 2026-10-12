#include "ffc/types.h"

extern uint32_t data_020aaf98[];
extern void func_02056c4c(void *obj);
extern void func_020059cc(void *obj);
extern void func_0209d02c(void *obj, int a, int b, void *fn);
extern void func_02056db0(void *obj);
extern void func_0200ab6c(void);

void *func_0200ab78(void *p) {
    uint8_t *r4 = (uint8_t *)p;
    *(void **)r4 = (void *)data_020aaf98;
    func_02056c4c(r4 + 0x14);
    func_02056c4c(r4 + 0x48);
    func_020059cc(r4 + 0x140);
    func_020059cc(r4 + 0x134);
    func_0209d02c(r4 + 0xb4, 10, 12, (void *)func_0200ab6c);
    func_020059cc(r4 + 0x90);
    func_02056db0(r4);
    return r4;
}
