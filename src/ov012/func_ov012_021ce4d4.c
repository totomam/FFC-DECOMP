#include "ffc/types.h"

extern char data_ov012_021d3f74[];
extern void *data_0213df18;
extern uint32_t func_0204f7ec(const void *object);
extern void func_02060c24(void *object);
extern void func_02060ac8(void);
extern void func_0203c2d0(void);
extern void func_0206047c(void);
extern void *func_0200a678(void *object);
extern void func_0209d02c(void *object, int a, int b, void *(*fn)(void *));
extern void func_020695d0(void *object);

void *func_ov012_021ce4d4(void *a)
{
    char *p = (char *)a;
    void *obj;

    *(char **)p = data_ov012_021d3f74;
    obj = (void *)func_0204f7ec(data_0213df18);
    func_02060c24(*(void **)((char *)obj + 0x1c));
    func_02060ac8();
    func_0203c2d0();
    func_0206047c();
    func_0200a678(p + 0x328);
    func_0209d02c(p + 0x304, 3, 0xc, func_0200a678);
    func_0200a678(p + 0x2f8);
    func_0200a678(p + 0x2ec);
    func_020695d0(p);
    return p;
}
