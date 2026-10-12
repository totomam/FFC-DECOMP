#include "ffc/types.h"

extern void *data_ov012_021d3f74;
extern void *data_0213df18;

extern uint32_t func_0204f7ec(const void *object);
extern void func_02060c24(void *x);
extern void func_02060ac8(void);
extern void func_0203c2d0(void);
extern void func_0206047c(void);
extern void *func_0200a678(void *object);
extern void func_0209d02c(void *object, int a, int b, void *(*f)(void *));
extern void func_020695d0(void *object);
extern void func_02056844(void *object);

void *func_ov012_021ce538(void *param_0)
{
    uint8_t *p = (uint8_t *)param_0;
    *(void **)p = &data_ov012_021d3f74;
    {
        void *obj = *(void **)&data_0213df18;
        uint32_t v = func_0204f7ec(obj);
        func_02060c24(*(void **)(v + 0x1c));
    }
    func_02060ac8();
    func_0203c2d0();
    func_0206047c();
    func_0200a678(p + 0x328);
    func_0209d02c(p + 0x304, 3, 0xc, func_0200a678);
    func_0200a678(p + 0x2f8);
    func_0200a678(p + 0x2ec);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
