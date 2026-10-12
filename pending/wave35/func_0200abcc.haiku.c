#include "ffc/types.h"

extern uint32_t data_020aaf98[];
extern void func_02056c4c(void *p);
extern void *func_020059cc(void *object);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void func_02056db0(void *p);
extern void func_02056844(void *p);
extern void func_0200ab6c(void);

void *func_0200abcc(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    *(uint32_t **)p = data_020aaf98;
    func_02056c4c(p + 0x14);
    func_02056c4c(p + 0x48);
    func_020059cc(p + 0x140);
    func_020059cc(p + 0x134);
    func_0209d02c(p + 0xb4, 10, 12, func_0200ab6c);
    func_020059cc(p + 0x90);
    func_02056db0(p);
    func_02056844(p);
    return p;
}
